/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23128
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
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (unsigned char)242))))) / (((arr_0 [i_0 + 1] [i_1]) + (((/* implicit */unsigned long long int) var_10))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_19 += (!(((/* implicit */_Bool) min((((/* implicit */short) arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])), ((short)-13754)))));
                            arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (4294967295U)));
                            var_20 = min((-6207748674322164883LL), (((/* implicit */long long int) 3320267534U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_7))));
}
