/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226286
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
    var_16 = ((signed char) min((((((/* implicit */_Bool) (signed char)-7)) && (((/* implicit */_Bool) (unsigned char)26)))), ((!(((/* implicit */_Bool) (unsigned char)31))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((((/* implicit */int) (signed char)30)) * (((/* implicit */int) (unsigned char)13))))));
        arr_2 [i_0] [i_0] = ((signed char) (unsigned char)125);
        var_18 = ((/* implicit */signed char) ((unsigned char) arr_1 [i_0] [i_0]));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)108)) >> (((((/* implicit */int) (unsigned char)255)) - (253)))));
                    arr_9 [i_2] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) (signed char)65)));
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1]))));
                }
            } 
        } 
    }
}
