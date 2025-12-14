/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243349
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) ((_Bool) (signed char)-8)))))) + (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_7))) == (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    var_13 = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) ((unsigned char) var_3))));
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (2394304268U)))) ? (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) var_4)) : (var_3)))) : (((var_9) ? (var_8) : (var_8))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_0] [11U] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_0])))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_1)))))))), (max((3952554696U), (((/* implicit */unsigned int) arr_2 [i_1]))))));
                var_15 = ((/* implicit */_Bool) ((long long int) ((unsigned char) ((_Bool) var_5))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((signed char) var_5));
}
