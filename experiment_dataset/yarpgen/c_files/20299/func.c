/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20299
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [0U] [0U] = ((/* implicit */signed char) var_2);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 |= ((long long int) arr_10 [i_3]);
                            var_15 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+((-(((/* implicit */int) var_5))))))), ((-(var_2)))));
                            var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-13948))));
                            var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_6)), ((short)32765))))))), (((((/* implicit */unsigned long long int) var_2)) % (arr_0 [i_0 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (_Bool)1))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_10)), ((+(var_12))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))))));
}
