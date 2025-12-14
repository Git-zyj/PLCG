/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228802
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
    var_17 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [(unsigned char)0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (((/* implicit */int) arr_0 [(unsigned char)10])) : (((/* implicit */int) (unsigned char)61))))) ? (((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) (unsigned char)170)))) : ((+(((/* implicit */int) (unsigned char)224))))));
                var_18 += ((/* implicit */unsigned char) ((min((((((/* implicit */int) arr_0 [(unsigned char)2])) / (((/* implicit */int) (unsigned char)197)))), (((/* implicit */int) (unsigned char)169)))) / (((/* implicit */int) ((unsigned char) (unsigned char)167)))));
                var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) (unsigned char)150))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 1]))))));
                var_20 = ((/* implicit */unsigned char) max((var_20), ((unsigned char)48)));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)250)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((var_3), ((unsigned char)82))))))));
}
