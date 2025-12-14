/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238759
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (signed char)-71);
                var_13 = ((/* implicit */signed char) min((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_9))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 4) 
    {
        var_14 = ((/* implicit */long long int) var_2);
        arr_8 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)4855))));
        var_15 = arr_5 [i_2];
        arr_9 [i_2 - 3] = (-(var_4));
    }
    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) /* same iter space */
    {
        var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [1LL] [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3]))))), (max((((/* implicit */long long int) arr_13 [i_3])), (arr_10 [i_3])))))));
        var_17 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_3])) == (arr_6 [i_3]))))))), (arr_3 [i_3] [i_3])));
        arr_14 [i_3] = ((unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) var_4)))));
    }
    for (unsigned short i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 15762598695796736ULL))) ? (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_1))), (((/* implicit */unsigned long long int) var_6))))));
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) arr_15 [i_4]);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_23 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-67)) >= (((/* implicit */int) ((arr_19 [i_4] [i_4]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ^ (((/* implicit */int) (signed char)66))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_1)));
                    var_20 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                }
            } 
        } 
        arr_24 [i_4] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)60680)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_20 [6ULL] [i_4 - 3] [i_4])))));
    }
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_11)), (var_8)));
    var_22 |= var_6;
    /* LoopSeq 2 */
    for (long long int i_7 = 1; i_7 < 14; i_7 += 2) /* same iter space */
    {
        var_23 &= ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) ((signed char) var_1))))));
        var_24 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)60675)))));
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 14; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_9 = 3; i_9 < 16; i_9 += 3) 
        {
            arr_32 [i_8] = ((/* implicit */unsigned short) ((long long int) arr_28 [i_8] [i_9 - 2]));
            var_25 = ((/* implicit */unsigned long long int) (+(arr_29 [i_8 + 2])));
            arr_33 [i_8] [i_8] = ((/* implicit */signed char) arr_3 [i_9 - 1] [i_9]);
            var_26 = ((/* implicit */unsigned long long int) (~(arr_28 [i_8] [i_8])));
            /* LoopNest 2 */
            for (unsigned char i_10 = 4; i_10 < 13; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_1))));
                            var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_8 - 1])) ? (arr_3 [i_10 - 1] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_43 [i_8 + 3] [i_9 - 2] [i_8] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)12651))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8] [i_8] [i_8])))))) : (arr_3 [i_9 - 3] [10U])));
                            var_29 *= arr_30 [0U] [i_10] [i_11];
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 1; i_13 < 15; i_13 += 2) 
                        {
                            var_30 += ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_8]))))));
                            var_31 = ((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_9 - 2]));
                            var_32 = ((/* implicit */unsigned char) arr_26 [i_10]);
                            var_33 ^= ((/* implicit */long long int) var_5);
                        }
                        for (long long int i_14 = 3; i_14 < 13; i_14 += 4) 
                        {
                            arr_48 [i_14] [i_14] [i_14] [i_14] [i_14] [i_8] [i_14 + 1] = ((/* implicit */long long int) (+(var_1)));
                            arr_49 [i_10] [i_8] [i_8] = (~(arr_28 [i_8] [i_9]));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_8] [i_14]))) > (arr_27 [i_8] [i_8])));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_15 = 2; i_15 < 16; i_15 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) * (1861929548U)));
            /* LoopNest 2 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                for (unsigned short i_17 = 1; i_17 < 16; i_17 += 3) 
                {
                    {
                        arr_58 [i_8 + 3] [i_15 + 1] [i_16] [i_16] [i_17] [(unsigned char)12] |= ((/* implicit */unsigned short) ((var_5) >> (((/* implicit */int) var_6))));
                        /* LoopSeq 1 */
                        for (signed char i_18 = 2; i_18 < 16; i_18 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) arr_60 [i_15] [i_15] [i_15 - 2] [i_15] [i_15] [i_15 - 1] [i_15]);
                            var_37 |= ((/* implicit */long long int) var_2);
                            var_38 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((unsigned short) var_11)))));
                        }
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_8]))) % (((arr_25 [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_8] [i_8] [i_8 + 1] [0ULL] [9ULL])))))));
                        var_40 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)4855))) ? (arr_5 [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [(unsigned short)10] [(short)6] [(unsigned short)10] [i_17])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                for (signed char i_20 = 2; i_20 < 15; i_20 += 2) 
                {
                    {
                        arr_70 [i_8] [i_15] [i_8] [i_15] = ((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_8]))));
                        arr_71 [i_8] [i_15 - 2] [i_8] [i_8] [i_15 - 2] = ((/* implicit */unsigned short) (-(7809542125753850598LL)));
                        arr_72 [i_8 + 1] [i_15] [i_8] [i_8 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)93));
                    }
                } 
            } 
        }
        for (unsigned char i_21 = 2; i_21 < 16; i_21 += 1) /* same iter space */
        {
            arr_76 [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_7 [i_21 + 1] [i_8 - 1])));
            var_41 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_67 [16ULL] [i_8] [i_8 + 3]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_73 [i_8]))))) || (((/* implicit */_Bool) var_3))));
            /* LoopNest 3 */
            for (unsigned long long int i_22 = 2; i_22 < 16; i_22 += 3) 
            {
                for (unsigned short i_23 = 1; i_23 < 15; i_23 += 1) 
                {
                    for (unsigned short i_24 = 1; i_24 < 16; i_24 += 1) 
                    {
                        {
                            var_42 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_38 [i_22] [i_22 - 2] [i_22] [10LL] [i_22 + 1]));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 719170401350927252ULL)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60672))) % (12043589531356538421ULL))))));
                            var_44 = ((/* implicit */unsigned short) (~(var_1)));
                        }
                    } 
                } 
            } 
            arr_85 [i_8 + 3] [i_8] [(unsigned char)8] = ((unsigned short) 14353102064635561687ULL);
        }
        var_45 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_38 [i_8] [i_8] [i_8] [4ULL] [i_8 + 2]))) ? (((unsigned long long int) (unsigned short)10711)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))));
        arr_86 [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_8] [i_8]))) : (10818879761801075870ULL))) | (((unsigned long long int) var_8))));
    }
}
