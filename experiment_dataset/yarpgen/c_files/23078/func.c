/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23078
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
    var_20 = ((_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (~((~(var_13))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_1)))) || ((!(((/* implicit */_Bool) var_14))))));
                                var_23 = ((/* implicit */long long int) (unsigned short)51983);
                                var_24 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_19)))) || ((_Bool)1)))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)22))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_6)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) <= (((/* implicit */int) (unsigned char)255))));
}
