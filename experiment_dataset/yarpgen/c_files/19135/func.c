/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19135
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned short)18])) : (((/* implicit */int) var_1)))) + (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_1]))))));
                arr_5 [(signed char)11] [i_1] = ((/* implicit */signed char) max(((-(((unsigned int) var_9)))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_4)))), ((+(var_9))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) var_8);
                var_18 = ((_Bool) arr_2 [i_0 - 1] [i_0 - 1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_13)))) || (((/* implicit */_Bool) var_0))));
}
