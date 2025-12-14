/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220532
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_12 -= ((unsigned int) ((unsigned int) 2215281767U));
        var_13 ^= ((/* implicit */signed char) ((unsigned int) var_1));
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-18)) && (((/* implicit */_Bool) 2079685528U))));
        var_14 = var_3;
    }
    for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((unsigned int) max(((signed char)38), ((signed char)7))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_1 + 2] [i_1 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), ((signed char)4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1547733642U)))) : (min((arr_6 [i_1 - 2] [i_1 - 2]), (arr_7 [i_1 - 1] [i_1])))));
        var_16 |= ((min((((((/* implicit */_Bool) 1491195314U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) : (var_6))), (max((arr_7 [i_1] [i_1]), (((/* implicit */unsigned int) (signed char)32)))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    }
    var_17 = ((/* implicit */unsigned int) (signed char)-62);
}
