/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45564
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
    var_19 = ((_Bool) (unsigned short)65535);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) (~(((/* implicit */int) var_14))));
                arr_4 [i_0] [i_0] |= max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1 + 1]))))), (-4115965890290442671LL));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */signed char) min((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))), (((493522324U) <= (493522324U)))))), (((signed char) ((((((/* implicit */int) var_15)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (30934)))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_3), (((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_16))))))));
}
