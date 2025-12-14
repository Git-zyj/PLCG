/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30914
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
    var_18 = ((/* implicit */unsigned char) (-(var_10)));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_4 [(unsigned short)9] [i_1] [i_2] [6LL]), (arr_1 [i_1 + 1] [(unsigned char)8])))) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1]))) : (arr_0 [i_2] [i_1 + 1]))) - (8029U))))))));
                    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned char)66)), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (arr_0 [i_1] [i_1])))));
                    var_21 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_0 [i_2 - 2] [(unsigned char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((unsigned char) var_13))) : ((((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))));
}
