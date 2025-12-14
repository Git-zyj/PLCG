/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25770
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)169), ((unsigned char)193)))) - ((-(((/* implicit */int) var_8))))));
                var_11 *= ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) <= ((+(arr_1 [i_0 - 1] [i_0 - 1])))));
                var_12 *= ((/* implicit */unsigned short) min(((((_Bool)0) ? (((/* implicit */int) (unsigned char)48)) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_10))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_6))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)80))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_6);
}
