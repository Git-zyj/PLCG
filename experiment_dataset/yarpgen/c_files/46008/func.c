/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46008
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) arr_6 [i_0] [(short)15] [i_0] [i_3]);
                                var_13 = ((/* implicit */short) arr_2 [i_1]);
                                var_14 = ((/* implicit */long long int) min((arr_10 [i_4 + 1] [i_3] [i_2] [i_1] [i_0]), (((short) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1 - 1])), (arr_5 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 - 1])))), (((/* implicit */unsigned long long int) (unsigned short)3))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(((int) ((short) var_2))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_2);
    var_17 = ((/* implicit */int) ((short) 1186022447));
}
