/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196203
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
    var_15 = var_2;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_9);
        var_16 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_17 = var_8;
        arr_4 [i_0] = max((((unsigned long long int) min((arr_0 [i_0]), (11174075963449311971ULL)))), (var_1));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_18 *= (((-(max((18446744073709551615ULL), (3423608218657339147ULL))))) & (max((((((/* implicit */_Bool) var_7)) ? (10362539487228842270ULL) : (arr_1 [i_1]))), (((/* implicit */unsigned long long int) var_5)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned int) (-(var_1)));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                arr_12 [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) var_8);
                var_19 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]);
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (1098012290930827431ULL) : (((/* implicit */unsigned long long int) var_12))));
                    arr_15 [i_4] [6U] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_3])) ? (var_1) : (var_4)));
                }
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        var_22 = arr_20 [i_6] [i_2] [i_3] [8ULL] [i_2] [i_1];
                        var_23 = ((((unsigned long long int) var_9)) ^ (((/* implicit */unsigned long long int) (-(var_14)))));
                        var_24 -= ((unsigned int) (~(971763232484373900ULL)));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        arr_23 [i_1] [i_2] [i_2] [i_3] [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) arr_22 [i_7] [i_5] [i_2] [i_1]));
                        arr_24 [i_1] [i_1] [i_7] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_1] [i_2] [i_3] [i_5] [i_7] [i_2])) ? (arr_11 [i_2] [i_3] [i_5]) : (((/* implicit */unsigned long long int) arr_2 [i_3]))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        arr_27 [i_1] [i_2] [i_3] [i_5] [i_8] = arr_17 [i_1] [i_2] [i_3] [i_5] [i_5];
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 996327116222572716ULL)))))))));
                        arr_28 [i_2] = (+(arr_1 [i_1]));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-(arr_1 [i_1]))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_27 = var_7;
                        var_28 = (-(arr_7 [i_2]));
                        var_29 = (-(((arr_11 [i_2] [14ULL] [i_2]) & (((/* implicit */unsigned long long int) 2579955809U)))));
                        arr_33 [i_1] [i_2] [i_3] [2ULL] [i_2] = (~(var_4));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        arr_38 [i_1] [i_3] [i_2] [11U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_30 ^= ((((/* implicit */_Bool) 5466600158555603314ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_31 [i_1] [i_2] [i_10 + 1] [i_5] [i_1] [i_10]));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        arr_42 [i_5] [i_1] [i_2] [i_3] [i_5] [i_5] [i_11] &= ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_11] [i_11] [i_5])) ? (arr_36 [i_2] [i_1]) : (((/* implicit */unsigned long long int) 2849868400U)));
                        arr_43 [i_11] [i_2] [i_3] [i_5] [i_2] = (((!(((/* implicit */_Bool) 1628498546466836347ULL)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) == (14277541807628365335ULL))))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 1) 
                    {
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11291023234766490601ULL)) ? (18446744073709551615ULL) : (var_11)))) ? ((-(var_8))) : (var_1));
                        arr_47 [i_12 + 1] [11U] [11U] [i_2] [i_3] [i_1] [i_1] = var_3;
                    }
                    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 101536167749351516ULL))));
                    arr_48 [i_2] [i_2] [i_3] [i_5] = (-(arr_11 [i_2] [i_3] [i_5]));
                    var_33 = ((unsigned long long int) ((((/* implicit */_Bool) 2130063640U)) ? (1311083934U) : (1957924575U)));
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            var_34 = arr_32 [i_13];
            var_35 = ((/* implicit */unsigned long long int) (((~(2657642264U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5))))))));
            arr_51 [i_1] [i_1] [i_1] = ((arr_39 [i_1] [i_13] [i_1] [i_13] [i_13]) % (arr_39 [i_13] [i_13] [i_13] [i_13] [i_13]));
        }
    }
}
