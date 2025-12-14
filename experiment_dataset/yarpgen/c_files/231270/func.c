/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231270
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 = ((((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [1ULL]))) : (arr_3 [(_Bool)1] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_19) ? (arr_1 [i_0]) : (arr_12 [i_0] [(_Bool)1] [i_3])))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3])) + (((/* implicit */int) var_6))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) * (var_15))))));
                                var_21 = ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                arr_15 [i_0] [i_0] [i_3] [i_3] [i_0] [i_3] = (_Bool)1;
                                var_22 *= ((/* implicit */_Bool) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) / (arr_12 [4ULL] [i_3] [4ULL]))), (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_23 = max((max((max((arr_0 [i_0]), (arr_2 [i_1]))), (4ULL))), (((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_0] [i_0]))) : (arr_3 [i_0] [i_0] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]), ((_Bool)0))))) : (max((var_11), (arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_16 [i_0 - 1] [i_1] [3ULL] [i_2] [(_Bool)1] [i_6])))))) < (((/* implicit */int) arr_16 [i_0 + 2] [i_1] [i_2] [i_5] [i_2] [i_6]))));
                                arr_23 [1ULL] [i_5] [i_6] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_6] [i_1] [i_6] [i_5] [(_Bool)1])) ^ (((/* implicit */int) max((var_7), (((_Bool) var_13)))))));
                                arr_24 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_6] [i_6] = ((/* implicit */unsigned long long int) min(((~(((arr_8 [i_5]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_16 [i_6] [i_6] [1ULL] [i_2] [i_0] [i_0])))))), (((/* implicit */int) (_Bool)1))));
                                arr_25 [i_0] [i_0] [i_6] [i_5] [i_6] = ((/* implicit */_Bool) (~((-(arr_13 [i_0 + 3] [i_0] [3ULL] [i_2] [i_5] [i_6] [i_6])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) 985162418487296ULL)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (127ULL)))));
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((_Bool) ((var_13) & (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))))))))));
    var_27 = var_13;
}
