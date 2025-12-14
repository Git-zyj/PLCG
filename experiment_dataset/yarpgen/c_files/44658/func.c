/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44658
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_18), (((/* implicit */long long int) arr_5 [i_1 - 1])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [3] [8] [8] [8] [i_3] [8] = ((/* implicit */int) var_13);
                                var_21 = max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0 - 1] [i_3])) ? (arr_8 [(short)6] [(short)6] [i_0 - 1] [i_3]) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))), (((unsigned long long int) arr_4 [i_3 - 1])));
                                arr_17 [i_4] [i_2] [i_2] [i_4] [i_4] [(short)5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))) && (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 + 1])))))) | (((((((/* implicit */_Bool) arr_12 [i_0] [3ULL] [i_1] [8] [8] [3ULL] [i_4])) ? (arr_8 [(unsigned char)2] [(_Bool)1] [i_0] [i_0]) : (var_19))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_0]))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [0ULL] = ((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (((((/* implicit */_Bool) min((arr_7 [i_4] [0] [1]), (var_5)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (arr_0 [i_4])))) : (max((arr_8 [7] [i_1] [6ULL] [i_3]), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (var_17));
                                arr_19 [(signed char)7] [(signed char)7] = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_3] [i_1 + 1])) <= (((/* implicit */int) arr_1 [i_1] [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) 16776192U))))) : (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0 - 2]) : (arr_0 [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (short)-14970);
    var_23 = var_6;
}
