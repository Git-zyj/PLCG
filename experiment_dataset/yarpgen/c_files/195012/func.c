/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195012
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [(_Bool)1] = ((/* implicit */unsigned long long int) ((-919739911) * (((/* implicit */int) (!(var_12))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = min((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_10 [i_2]))), (((/* implicit */unsigned long long int) ((arr_1 [i_4]) - (arr_1 [i_0])))));
                                var_17 = (!(((/* implicit */_Bool) 3)));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = arr_13 [i_3] [i_3] [i_0] [i_1] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_13);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((var_9) ? (((((/* implicit */unsigned long long int) (+(771994035)))) * (var_8))) : (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_6)), (var_13)))))))))));
}
