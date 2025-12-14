/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203057
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
    var_19 = max(((signed char)125), ((signed char)-117));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)108))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [(signed char)6]))));
                    arr_11 [i_0 - 1] [(signed char)12] [i_0 + 1] [i_0] |= ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)53)) | (((/* implicit */int) (signed char)-62)))) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0] [(signed char)2])) + (43))) - (30)))));
                    var_22 = ((signed char) ((((/* implicit */int) (signed char)-109)) == (((/* implicit */int) (signed char)61))));
                }
            } 
        } 
    }
}
