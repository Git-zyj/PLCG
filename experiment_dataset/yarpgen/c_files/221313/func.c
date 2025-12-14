/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221313
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 |= ((/* implicit */unsigned char) min((((unsigned long long int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned long long int) (+(arr_0 [i_0]))))));
        var_15 += ((/* implicit */unsigned char) ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */signed char) ((var_4) >= (3852233644063794810LL))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) (unsigned short)10))));
        var_17 = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1])) > (((/* implicit */int) arr_3 [i_1 - 1]))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1 + 1])) - (((/* implicit */int) arr_4 [i_1 - 2])))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1 - 2]))));
            arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 951152862U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1]))) : (arr_6 [i_2] [i_1 - 1])));
            var_19 -= ((/* implicit */unsigned char) (~(arr_5 [i_1])));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((arr_6 [i_1 - 1] [i_1 - 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_3])) - (0ULL)))) ? (((/* implicit */long long int) var_11)) : (((arr_6 [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3])))))));
            arr_12 [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 + 2])) ? (((/* implicit */int) arr_10 [i_1] [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1 + 2]))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 3; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned short i_6 = 2; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */_Bool) arr_11 [i_5 - 1]);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6 - 2] [i_6 - 1] [i_6])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_17 [i_6] [i_6] [i_6 - 2] [i_6 - 1] [i_6]))))));
                        }
                    } 
                } 
                arr_20 [i_3] [i_3] = ((/* implicit */_Bool) ((int) (+(arr_17 [i_1] [i_1] [4] [i_1] [i_1]))));
            }
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) (((-(arr_24 [i_1]))) - (((/* implicit */unsigned long long int) arr_13 [i_7] [i_1 + 2] [i_1 + 1] [i_1]))));
            /* LoopSeq 1 */
            for (int i_8 = 2; i_8 < 20; i_8 += 3) 
            {
                var_25 = ((/* implicit */_Bool) var_7);
                var_26 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)-18452)) / (((/* implicit */int) (signed char)-65)))));
                var_27 += ((/* implicit */_Bool) ((arr_13 [1ULL] [i_8 + 1] [i_8 + 1] [1ULL]) << (((((/* implicit */int) arr_21 [i_1 - 2] [i_1 - 2] [i_8 + 1])) - (195)))));
                var_28 = ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 2] [3LL])) && ((!(((/* implicit */_Bool) 13437096568023791538ULL)))));
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_1] [i_9] [i_9] [i_9] [i_1 - 1]));
            arr_32 [7U] [7U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_13 [i_1 - 2] [i_1 - 2] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26251))) : (7ULL)))));
        }
    }
    for (long long int i_10 = 2; i_10 < 22; i_10 += 2) /* same iter space */
    {
        var_30 *= ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 951152862U)) * (6994073201891933302ULL))), (((/* implicit */unsigned long long int) ((signed char) arr_13 [i_10] [i_10 + 2] [i_10 + 1] [i_10 + 1])))));
        arr_35 [i_10] = ((/* implicit */signed char) arr_14 [i_10 + 2] [i_10 - 1] [i_10 + 2] [i_10]);
    }
    var_31 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((951152856U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1946920415)) ? (arr_14 [i_11] [(_Bool)1] [i_12] [i_12]) : (((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) (-(((unsigned int) 3343814433U))))) : (min((arr_6 [i_11] [18]), (((((/* implicit */_Bool) (unsigned char)7)) ? (var_12) : (7630322704920159220LL)))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    for (unsigned int i_14 = 1; i_14 < 13; i_14 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((max((var_8), (((-1) != (((/* implicit */int) (signed char)57)))))) ? (((((/* implicit */_Bool) arr_1 [i_14 + 1] [i_14 + 1])) ? (((long long int) (unsigned short)724)) : (((/* implicit */long long int) min((-12), (((/* implicit */int) arr_33 [i_12]))))))) : (((var_12) | (((arr_31 [(unsigned char)13] [(unsigned char)13]) | (arr_47 [i_13] [i_13] [i_13] [i_13] [i_13])))))));
                            arr_48 [i_11] [7LL] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((max((max((((/* implicit */unsigned int) (unsigned char)28)), (4294967284U))), (((/* implicit */unsigned int) (signed char)(-127 - 1))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)126)) ? ((+(155412606))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -3980241352526382674LL))))))))));
                            var_34 |= ((/* implicit */unsigned int) ((min((arr_15 [i_14 + 2] [(_Bool)1] [i_14 + 2] [i_14]), (arr_23 [i_14 + 2] [i_14 + 2]))) && (((/* implicit */_Bool) arr_26 [i_11] [i_11] [i_14 + 2]))));
                        }
                    } 
                } 
                var_35 -= ((/* implicit */unsigned int) min((((/* implicit */signed char) arr_15 [i_12] [(_Bool)1] [i_11] [i_11])), (min((arr_3 [i_11]), (arr_3 [i_11])))));
                var_36 = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (arr_24 [i_12])));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned char)6)) / (((int) (signed char)-12))))))));
                            var_38 = ((/* implicit */long long int) 4294967258U);
                        }
                    } 
                } 
            }
        } 
    } 
}
