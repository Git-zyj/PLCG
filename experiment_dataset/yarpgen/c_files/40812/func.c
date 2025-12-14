/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40812
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
    var_14 = ((/* implicit */short) max((var_10), ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 4294967295U))));
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1U) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)25)) ? (((((/* implicit */_Bool) 4080351824U)) ? (3089417920279684315LL) : (-3089417920279684316LL))) : (((/* implicit */long long int) 65535U))))) : ((+(var_2)))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_1))));
}
