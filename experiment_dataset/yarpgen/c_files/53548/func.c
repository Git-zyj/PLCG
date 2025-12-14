/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53548
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
    var_16 = ((/* implicit */signed char) -1468992824);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (-((-(((long long int) var_12))))));
                                arr_13 [i_2] [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */long long int) (~(-1468992804)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) var_1);
                    var_19 = (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((int) arr_0 [i_2])))));
                    arr_14 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((short) max((((/* implicit */int) var_9)), (-1468992823))))), (-1468992823)));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) ((short) var_15))) ? (((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))))) >> ((((~(1468992823))) + (1468992837))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) var_9))), (((((/* implicit */_Bool) var_10)) ? (-1761207849) : (((/* implicit */int) (signed char)-100))))))));
}
