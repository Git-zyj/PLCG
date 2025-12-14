/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191182
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */_Bool) ((2490906582919846172ULL) | (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_8 [i_1] [i_1] [(short)0])))))))));
                            arr_11 [5U] [1U] [i_2 - 1] [i_1] [i_3 + 1] [i_3 + 1] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_2]))) < (var_9)))), (788236517)));
                            var_10 = arr_8 [i_1] [i_2] [i_3 + 1];
                            var_11 = min((((/* implicit */unsigned long long int) (-(min((arr_1 [i_0] [i_3]), (2U)))))), ((-(var_1))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_0]);
                arr_12 [i_1] [i_1] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_1])))))) & ((~(max((((/* implicit */long long int) 2500753223U)), (5865667299529389482LL)))))));
                arr_13 [i_1] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [1ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) : (arr_5 [i_0] [i_0] [(short)0])))));
            }
        } 
    } 
    var_13 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3002387806U)) ? (((/* implicit */unsigned long long int) 2U)) : (16554774206332115501ULL)))) ? (max((((/* implicit */unsigned long long int) var_7)), (var_0))) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) -1502709797)))))));
}
