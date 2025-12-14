/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193601
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
    var_19 = (signed char)-13;
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_10))) * (((/* implicit */int) var_16))));
    var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((signed char) (signed char)12))) ? ((+(((/* implicit */int) (signed char)75)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_18)))))), (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = arr_2 [i_1];
                    arr_10 [i_2] [i_1 + 1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_1 - 1])) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-76))))))))));
                }
            } 
        } 
    } 
}
