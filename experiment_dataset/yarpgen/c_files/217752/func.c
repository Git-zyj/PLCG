/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217752
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
    var_13 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (var_10))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((int) ((((/* implicit */_Bool) var_10)) ? (7) : (1329127434)));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((((/* implicit */int) ((signed char) (signed char)125))) >= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) var_12))))))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_12 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)-12)) * (((((/* implicit */int) arr_4 [(signed char)10])) >> (((/* implicit */int) (signed char)15))))))));
                    var_16 = ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7))))), (((signed char) arr_4 [(signed char)10]))))) ? ((((~(arr_8 [i_1] [(signed char)6] [i_1]))) & (((-1377669567) | (((/* implicit */int) (signed char)-1)))))) : (((((var_4) < (((/* implicit */int) arr_5 [i_1])))) ? (((/* implicit */int) ((signed char) 1401827309))) : (((-1401827310) / (var_2))))));
                }
            } 
        } 
    } 
}
