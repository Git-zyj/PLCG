/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51865
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
    var_18 = var_5;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [i_1] [i_1] [i_1] = ((unsigned long long int) (-(2199023255551ULL)));
                    arr_9 [i_1] = (-(((unsigned long long int) 2199023255551ULL)));
                    arr_10 [10ULL] = var_2;
                }
                for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_1 + 1] [i_3] [i_1] = ((unsigned long long int) (+(((18446741874686296064ULL) ^ (3850665982135786316ULL)))));
                        arr_16 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_12 [i_3 + 2] [i_1] [i_4])) > (min((arr_14 [i_1] [i_3] [i_3] [i_1]), (var_17)))));
                        arr_17 [i_3] [i_3 + 2] [i_1] [i_3] = min((((((/* implicit */_Bool) (~(0ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [6ULL]) : (arr_13 [i_1]))) : ((~(var_5))))), (var_17));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        arr_20 [i_3] [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1]))) ? (5145930139136469722ULL) : ((+(var_14))));
                        arr_21 [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) + (var_2));
                        arr_22 [16ULL] [i_3] [i_1] [16ULL] = 18446744073709551615ULL;
                        arr_23 [20ULL] [20ULL] [i_3] [14ULL] [i_3 + 3] [i_1] = (+(var_12));
                    }
                    arr_24 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((var_0), (var_13))))))));
                    arr_25 [i_0] [8ULL] [i_0] = ((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    arr_29 [i_1] = (((-(arr_1 [i_1 - 1] [i_1 - 1]))) & ((+((~(0ULL))))));
                    arr_30 [i_1] = ((unsigned long long int) (+(214241032064866366ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_35 [i_0] [i_7] [i_1] = (+((+(((((/* implicit */_Bool) var_2)) ? (arr_31 [i_0] [i_1 + 1] [i_6] [i_7] [i_8]) : (arr_4 [20ULL] [i_6] [i_0]))))));
                                arr_36 [i_0] [i_0] [i_0] [i_1] [5ULL] = ((((/* implicit */_Bool) min(((~(arr_26 [i_7] [i_1] [i_1] [i_0]))), (var_7)))) ? ((~(min((0ULL), (var_6))))) : (((unsigned long long int) min((var_11), (var_3)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                arr_43 [i_0] [i_1] [i_6] [i_9] [2ULL] = (-(((unsigned long long int) 2199023255551ULL)));
                                arr_44 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = min(((~(18446744073709551615ULL))), (var_14));
                                arr_45 [i_0] [i_1] [i_6] [i_9] [i_10] = var_10;
                            }
                        } 
                    } 
                }
                arr_46 [8ULL] |= ((unsigned long long int) (~(var_11)));
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 4) 
                        {
                            {
                                arr_54 [i_0] [i_1] [i_11] [i_1] [i_13] = min((((arr_41 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) | (arr_41 [i_13 + 2] [i_12] [i_11] [i_1 - 1] [i_0]))), (min((arr_41 [i_0] [i_1 - 1] [i_11] [i_12] [i_13]), (var_17))));
                                arr_55 [i_0] [i_1] [i_11] [i_12] [i_11] = min(((+(var_12))), (arr_4 [i_1 - 1] [i_12] [i_13 + 2]));
                                arr_56 [i_1] [i_1] = (~(min((arr_31 [i_13 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                            }
                        } 
                    } 
                } 
                arr_57 [i_0] [i_0] [i_1] = ((unsigned long long int) min((arr_12 [i_0] [i_1] [i_0]), (arr_12 [i_0] [i_1] [17ULL])));
                arr_58 [14ULL] [14ULL] = min((min((4190117012830559206ULL), (arr_53 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))), (min((var_9), (18446744073709551615ULL))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
    var_20 = var_8;
}
