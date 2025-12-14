/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204140
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
    var_19 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) min(((signed char)63), ((signed char)63)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_9), (var_14))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_20 = (signed char)(-127 - 1);
                    arr_9 [i_0] [i_1] [i_2] = ((signed char) arr_7 [i_0] [(signed char)0] [(signed char)4]);
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_17)) + (22))))))))));
                    arr_10 [(signed char)13] = ((/* implicit */signed char) min((((/* implicit */int) (((-(((/* implicit */int) (signed char)-63)))) == (((/* implicit */int) var_7))))), (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) min(((signed char)127), ((signed char)0))))))));
                }
            } 
        } 
    } 
}
