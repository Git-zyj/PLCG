/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208015
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = min((arr_0 [i_0 - 1] [i_0]), (arr_1 [i_0 - 1]));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_3 [i_0 - 1] [i_1]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) arr_12 [i_0] [i_1] [i_3 + 1] [i_3]);
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_1] [i_0]))));
                            var_17 = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                            arr_15 [(_Bool)1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) arr_1 [i_0 - 1]);
                            arr_16 [i_2] [i_1] [18ULL] [(_Bool)1] = ((/* implicit */int) arr_10 [i_3 + 1] [i_3 - 1] [i_2] [(_Bool)0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_22 [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) arr_4 [i_6] [i_6 - 1] [i_6 - 1]);
                            var_18 = arr_4 [i_6] [(_Bool)1] [i_6 - 1];
                        }
                    } 
                } 
            }
            var_19 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1]);
        }
    }
    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_25 [i_7]);
        var_20 = max((max((arr_25 [i_7]), (arr_25 [i_7]))), (arr_25 [i_7]));
        var_21 = ((/* implicit */_Bool) min((arr_24 [i_7]), (min((arr_24 [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_7]))))));
        var_22 = ((/* implicit */unsigned long long int) arr_25 [i_7]);
    }
    for (int i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        var_23 += arr_28 [i_8];
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_27 [i_8]))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((arr_23 [i_8]), (arr_23 [i_8]))))));
    }
}
