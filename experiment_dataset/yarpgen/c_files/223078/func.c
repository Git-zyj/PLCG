/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223078
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (_Bool)1))));
    var_17 = ((/* implicit */_Bool) var_1);
    var_18 = ((/* implicit */long long int) max(((short)25921), (((/* implicit */short) (_Bool)0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [(short)2] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((~((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))))));
                                var_19 ^= ((/* implicit */long long int) max((((/* implicit */short) max((max(((_Bool)1), ((_Bool)0))), ((_Bool)0)))), (min((min(((short)3329), ((short)15048))), (max((var_7), ((short)8361)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
                var_20 &= ((/* implicit */short) ((max((((/* implicit */long long int) max(((short)27977), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) (short)3323)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) | (((/* implicit */long long int) ((/* implicit */int) max((var_13), (((/* implicit */short) ((((/* implicit */int) (short)-3329)) > (((/* implicit */int) (_Bool)1)))))))))));
                var_21 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-8375)) : (((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (max((((/* implicit */long long int) var_6)), (-1645869639703034797LL)))))));
            }
        } 
    } 
}
