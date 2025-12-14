/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24082
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (var_10)))) ? (((/* implicit */int) ((signed char) (signed char)54))) : (((/* implicit */int) min(((signed char)15), ((signed char)92)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 = (signed char)127;
                var_21 = ((/* implicit */signed char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))))))), (((/* implicit */int) (signed char)-109))));
                var_22 = (signed char)38;
            }
        } 
    } 
    var_23 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */int) (signed char)31)) >> (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-27)) && (((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) ((signed char) (signed char)30)))));
    var_24 = (signed char)15;
}
