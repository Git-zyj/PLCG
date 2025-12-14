/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192403
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((var_7), (((/* implicit */short) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (max((2491903892U), (((/* implicit */unsigned int) (short)11719)))))))));
                arr_6 [i_0] = ((/* implicit */signed char) var_15);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) var_10);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_18 = var_9;
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((var_11), (min((var_1), (var_10))))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_12), (((/* implicit */short) var_8))))), (var_16)))) ? ((+(((/* implicit */int) max((var_7), ((short)-26288)))))) : (((var_8) ? (((/* implicit */int) min((var_1), (var_6)))) : (((/* implicit */int) var_5))))));
}
