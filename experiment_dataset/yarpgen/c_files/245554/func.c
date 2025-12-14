/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245554
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((unsigned long long int) var_1))));
    var_18 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_1)), (var_3)));
    var_19 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_10)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((18446744073709551604ULL), ((~(var_4)))))) ? (((min((var_7), (var_9))) * (max((((/* implicit */unsigned long long int) (short)-11397)), (12ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((unsigned long long int) var_9)) : (((arr_0 [i_1]) * (var_10))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_7 [i_2] [16ULL] [i_0] = (~(max((((unsigned long long int) var_8)), (min((var_7), (var_3))))));
                    var_21 = (-(min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2]))));
                    var_22 += min((var_8), (max((min((var_4), (var_7))), (min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_13)))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), ((-(max((((arr_3 [i_0] [i_0] [11ULL]) | (var_7))), (((unsigned long long int) var_16))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 4) 
                    {
                        for (short i_5 = 4; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_24 = ((unsigned long long int) (~(var_9)));
                                arr_16 [15ULL] [i_3] [i_4] [i_3] [4ULL] [i_1 + 2] [i_0 - 2] = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_11))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)15383))))))));
                                arr_17 [i_1 + 3] [4ULL] [i_3] [i_3] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) / (arr_14 [i_5] [i_4 - 4] [i_3] [i_1] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) / (arr_15 [i_5] [i_4] [i_4] [i_3] [i_1] [i_0]))) : (((var_10) / (var_4)))));
                            }
                        } 
                    } 
                    arr_18 [i_3] [i_1] [i_0 + 1] &= (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))) + (arr_14 [4ULL] [i_1] [3ULL] [i_3] [4ULL]))));
                }
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((12ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15383)))))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (10299210846580606752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9)))))))));
                var_26 &= var_12;
            }
        } 
    } 
}
