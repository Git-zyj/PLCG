/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234266
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
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-9808))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_4)))) > ((-(((/* implicit */int) var_17))))));
                            var_20 = ((/* implicit */long long int) var_17);
                            var_21 -= var_9;
                        }
                    } 
                } 
                arr_9 [i_1] = (short)9808;
                arr_10 [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_2);
    var_23 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-9806)) ? (((/* implicit */int) (short)9808)) : (((/* implicit */int) var_2))))))) + (((/* implicit */long long int) max((((((/* implicit */int) var_10)) + (((/* implicit */int) (short)9808)))), (((/* implicit */int) max((var_15), ((short)9808)))))))));
    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_0)))));
}
