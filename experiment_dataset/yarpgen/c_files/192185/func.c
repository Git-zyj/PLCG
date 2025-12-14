/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192185
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
    var_16 = ((/* implicit */signed char) min((var_3), (var_5)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((long long int) max((5393315389797621083LL), (-5393315389797621083LL)));
                            var_18 += -1LL;
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) (~(arr_7 [i_0] [i_1] [i_1])));
                var_20 = ((/* implicit */short) ((max((max((var_9), (((/* implicit */long long int) (short)-8969)))), (((/* implicit */long long int) (short)8968)))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97)))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) var_11)))))));
            }
        } 
    } 
}
