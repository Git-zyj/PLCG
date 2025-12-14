/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215396
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
    var_11 = ((/* implicit */long long int) min((var_2), (((/* implicit */short) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 *= ((/* implicit */short) arr_0 [i_1]);
                            var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_1] [2LL])))) <= (((unsigned long long int) var_3))))), (min((max((arr_7 [i_1] [i_1 + 2] [i_0] [15U]), (arr_7 [i_3] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_3])), (var_5))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) var_6))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 818309059U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) : ((~(var_7)))))));
            }
        } 
    } 
}
