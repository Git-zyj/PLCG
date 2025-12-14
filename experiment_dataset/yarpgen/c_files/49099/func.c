/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49099
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
    var_16 = min((((unsigned int) ((var_7) >= (var_3)))), (min((((((/* implicit */_Bool) var_11)) ? (var_3) : (var_6))), (((((/* implicit */_Bool) var_8)) ? (var_2) : (var_12))))));
    var_17 = var_15;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((((/* implicit */_Bool) ((arr_3 [i_1] [i_1 - 3] [i_1 - 1]) ^ (var_1)))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 4] [i_1 - 4] [i_1 - 3])) ? (arr_4 [i_1 - 4] [i_1 - 4] [i_1 - 3]) : (arr_4 [i_1 - 4] [i_1 - 4] [i_1 - 3]))) : (min((arr_2 [i_1 - 4] [4U]), (var_11))));
                var_19 *= ((((unsigned int) (!(((/* implicit */_Bool) var_8))))) - (var_15));
                arr_5 [i_0] [i_1] |= (-(min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [11U])) ? (arr_0 [i_0] [i_1]) : (var_0))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_3) : (arr_3 [i_1] [i_1] [i_1]))))));
                arr_6 [i_0] [i_0] = (((+(min((arr_4 [i_0] [i_1] [i_1]), (arr_0 [2U] [15U]))))) >> (((arr_3 [i_0] [i_0] [i_1]) - (2909228223U))));
            }
        } 
    } 
}
