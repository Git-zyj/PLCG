/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35365
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) == (var_8)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((arr_0 [i_0]) << (((var_14) - (416961947)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((int) var_16));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        arr_7 [13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483633)) ? (arr_5 [i_1 + 2] [i_1 + 2]) : (arr_5 [i_1 + 2] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((256) >= (arr_5 [i_1] [i_1 - 1]))))) : (((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 + 2])) - (var_12))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    arr_15 [13] [i_1 + 1] [i_1 + 1] [i_1] = (-(((unsigned long long int) arr_8 [i_1] [i_1 + 2] [i_1 + 1])));
                    arr_16 [i_1] [i_1] [i_1 + 2] [9] = ((/* implicit */unsigned long long int) ((int) max((((unsigned long long int) arr_1 [i_3])), (min((var_4), (arr_6 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            {
                                arr_21 [i_2] [i_2] = ((((/* implicit */_Bool) max((arr_14 [i_5] [i_5 - 1] [i_4 - 2] [i_1 + 2]), (arr_14 [i_5] [i_5 - 1] [i_4 - 2] [i_1 + 2])))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) 1457675607)))) : (((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_3)))))));
                                arr_22 [i_5] [i_5] [i_2] [i_3] [i_4 - 2] [10ULL] [i_5] = min((((/* implicit */int) ((arr_12 [0ULL] [i_5 - 1] [i_3] [i_1 + 2]) >= (arr_11 [i_1] [i_5 - 1])))), (((((/* implicit */_Bool) arr_13 [i_1] [i_5 - 1])) ? (arr_11 [5] [i_5 - 1]) : (var_14))));
                            }
                        } 
                    } 
                    arr_23 [1] [1] = max((((/* implicit */unsigned long long int) ((int) ((arr_6 [12ULL]) * (var_4))))), (((unsigned long long int) arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1])));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */int) var_1);
}
