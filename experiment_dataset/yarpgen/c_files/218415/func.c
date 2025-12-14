/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218415
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1 + 1] = min((((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) arr_1 [i_0]))), (((((/* implicit */int) (unsigned char)54)) & (((/* implicit */int) arr_5 [i_1]))))))), (arr_4 [i_1] [i_1] [i_1 + 1]));
                arr_8 [i_1] [i_1 + 1] [i_0] = arr_6 [i_0] [i_0];
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((short) var_1))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)9))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | ((+(var_12)))))));
    var_15 = ((/* implicit */long long int) 536870880U);
    var_16 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)31)), ((+(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_1)))))))));
}
