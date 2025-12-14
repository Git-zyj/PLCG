/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210743
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((arr_1 [i_0] [i_0]) <= (((/* implicit */int) var_1)))) ? (((/* implicit */int) (!(arr_2 [i_0])))) : (((/* implicit */int) var_1)))))));
        var_21 ^= ((/* implicit */long long int) ((arr_2 [i_0]) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0] [6ULL])), (var_12))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (arr_4 [i_1])))));
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) var_13);
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_1)), (arr_8 [(unsigned short)15] [i_2 - 1])))) || (((/* implicit */_Bool) var_3)))))) | ((((-(arr_7 [i_2] [i_2] [(short)9] [i_3]))) % (((unsigned long long int) arr_4 [i_3]))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) ((((unsigned long long int) (+(((/* implicit */int) arr_11 [i_2 + 1] [i_2]))))) >> (((/* implicit */int) var_18))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] [i_2] = min((((/* implicit */unsigned long long int) min((((short) arr_4 [i_1])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [4U] [(short)10])))))))), (arr_4 [i_1]));
                    var_26 = ((/* implicit */signed char) arr_3 [i_1] [i_2 - 1]);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_6 [i_2 - 1]))))));
                    var_27 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) : (18446744073709551607ULL))), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2 + 1] [i_2] [i_5])))), (min((min((var_7), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) var_17)))))))));
                }
                arr_18 [i_1] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_2 + 1] [(unsigned char)19])) : (((/* implicit */int) (unsigned short)65535))))));
            }
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_1))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) >= (2111062325329920ULL)));
                        arr_27 [i_7] = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_8 + 1]))) > (var_3))));
                    }
                } 
            } 
            arr_28 [i_1] = ((/* implicit */short) arr_25 [(unsigned char)17] [i_1] [i_1] [i_6] [i_6] [i_6]);
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_9 = 4; i_9 < 15; i_9 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) (+(2111062325329920ULL)));
        var_31 = ((/* implicit */unsigned short) ((_Bool) arr_7 [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 2]));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 16; i_13 += 2) 
                        {
                            {
                                arr_40 [i_9] [i_9] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) var_19));
                                arr_41 [i_9] = var_6;
                                arr_42 [i_11 + 1] [i_10] [i_11] [i_12] [i_9] = ((/* implicit */unsigned long long int) var_3);
                                var_32 = ((arr_36 [13LL] [i_10] [i_11 - 1] [i_9 - 2]) <= (arr_36 [i_9 - 4] [i_10] [i_11 - 1] [i_9 - 2]));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_14 = 1; i_14 < 16; i_14 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) var_8);
                        arr_46 [i_9 - 2] [i_9] [i_11] = (i_9 % 2 == zero) ? (((/* implicit */unsigned char) ((arr_9 [i_11 - 1] [i_11 - 1] [i_9]) + (arr_9 [i_11 - 2] [i_14 + 1] [i_9])))) : (((/* implicit */unsigned char) ((arr_9 [i_11 - 1] [i_11 - 1] [i_9]) - (arr_9 [i_11 - 2] [i_14 + 1] [i_9]))));
                        var_34 = ((/* implicit */unsigned short) (+(arr_38 [i_9 - 4] [3ULL] [(unsigned short)13] [i_9] [i_11] [i_10])));
                        arr_47 [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                    }
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                        var_36 -= ((/* implicit */unsigned char) (-(var_14)));
                        arr_50 [i_9] [i_9] [i_11 - 3] [i_15] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)22))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        var_37 &= ((/* implicit */signed char) (((+(arr_39 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)23)))))));
        var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)22)))) > (((/* implicit */int) ((((/* implicit */_Bool) 18444633011384221678ULL)) && (var_18))))));
    }
    for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
    {
        var_39 += ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((arr_22 [(short)9]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_17]))))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_17] [i_17] [i_17]))))) : (((/* implicit */int) arr_21 [i_17] [i_17]))))));
        var_40 = ((/* implicit */signed char) min(((-(min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_7 [i_17] [i_17] [i_17] [(unsigned short)12]))))), (((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_13))))))));
    }
    /* LoopNest 2 */
    for (long long int i_18 = 2; i_18 < 17; i_18 += 2) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 2) 
        {
            {
                var_41 = ((/* implicit */long long int) ((unsigned long long int) (signed char)-1));
                var_42 = ((/* implicit */_Bool) ((var_18) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_6))) + ((-(((/* implicit */int) arr_10 [i_19] [i_19] [i_19] [i_18]))))))) : (var_15)));
                arr_60 [i_18] [i_18] [i_19] = ((/* implicit */unsigned short) min((arr_7 [i_18] [i_18 + 1] [i_18] [i_18]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
            }
        } 
    } 
}
