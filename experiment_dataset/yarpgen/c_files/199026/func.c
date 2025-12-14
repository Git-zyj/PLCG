/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199026
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [(unsigned char)19] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) var_0);
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_8))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? ((+((-(var_16))))) : ((+(var_6)))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_1))));
    var_23 = ((((((var_15) + (9223372036854775807LL))) << ((((((+(((/* implicit */int) var_10)))) + (12210))) - (60))))) << (((var_14) - (2384354234U))));
    var_24 = ((/* implicit */signed char) var_14);
}
