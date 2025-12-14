/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193869
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((_Bool) ((_Bool) (_Bool)1));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)2)) && (((/* implicit */_Bool) var_5))));
            arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [(unsigned char)10] [i_1] [i_1 - 2])) + (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2]))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned short) arr_6 [i_0]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) var_9))))));
            var_17 = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) max((arr_4 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) var_4))))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_18 = ((/* implicit */unsigned char) (signed char)-3);
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)2)) : (((max((arr_13 [i_4]), (((/* implicit */int) var_8)))) << (((((((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_4])) ? (17281931925552803762ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_3] [i_4] [i_3]))))) - (17281931925552803737ULL)))))));
                var_20 |= ((/* implicit */int) var_11);
                var_21 += ((/* implicit */_Bool) 11ULL);
            }
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) ((18446744073709551607ULL) / (arr_5 [14LL] [i_5])));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_23 &= (!(((/* implicit */_Bool) -1367872565)));
                            arr_34 [i_2] [i_2] [i_2] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) 0U));
                            arr_35 [i_2] [i_8] [i_6] [4ULL] [i_8] [i_7] [10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5] [i_7])) || (((/* implicit */_Bool) arr_11 [i_2] [i_5]))));
                        }
                    } 
                } 
                var_24 = ((7ULL) != (((var_10) % (2047ULL))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    for (unsigned char i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_41 [(unsigned short)0] [i_9] [i_5] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_5] [i_5] [i_10 + 1] [i_10] [i_5]))) % (18363849360753400341ULL));
                            var_25 &= ((/* implicit */int) arr_1 [i_10 - 1]);
                            arr_42 [i_2] [i_2] [i_5] [i_6] [i_9] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) ^ (arr_6 [i_2]))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_5)) + (4294967295U))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                arr_46 [i_2] [13ULL] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((_Bool) arr_28 [i_2] [i_2] [i_2]));
                arr_47 [10] [i_5] [i_5] [i_2] = ((/* implicit */_Bool) 18446744073709551615ULL);
            }
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                for (int i_13 = 3; i_13 < 14; i_13 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((_Bool) 2147483647)))));
                        var_27 = var_10;
                    }
                } 
            } 
            var_28 -= ((/* implicit */unsigned long long int) ((short) (unsigned char)81));
        }
        var_29 = var_14;
    }
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            {
                arr_60 [i_14] [i_15] [i_15] = ((unsigned long long int) ((((/* implicit */unsigned long long int) 0U)) - (arr_55 [i_15])));
                arr_61 [i_14] [i_15] = ((/* implicit */short) min((((unsigned long long int) arr_54 [i_14])), (((unsigned long long int) var_15))));
                var_30 = ((/* implicit */unsigned char) var_13);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_9);
}
