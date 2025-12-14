/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51749
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
    var_11 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)108))) ? (var_0) : (((((/* implicit */int) var_10)) % (((/* implicit */int) var_10)))))));
    var_12 = var_3;
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) var_0);
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 - 1] [(unsigned short)3] [i_2 + 1])) ? (((/* implicit */int) max((arr_6 [(signed char)10] [i_1] [(signed char)13] [i_1]), (arr_6 [i_0 - 1] [i_1 - 1] [i_2] [i_2 - 1])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_6 [(short)13] [i_1] [i_1] [i_0]))))));
                    arr_7 [i_0 + 1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 - 3]))));
                }
            } 
        } 
    } 
}
