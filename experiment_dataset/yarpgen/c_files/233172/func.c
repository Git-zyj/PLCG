/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233172
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
    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)21)))), (((/* implicit */int) (signed char)-84))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = (signed char)121;
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) min((var_4), ((signed char)(-127 - 1))))) + (((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0 + 4] [i_0]))))) & (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1])) <= (((/* implicit */int) arr_5 [i_0 + 1])))))));
                    arr_10 [i_0 + 2] [i_0 + 2] [i_2] |= ((/* implicit */signed char) min((((((((/* implicit */int) var_0)) <= (((/* implicit */int) (signed char)-109)))) ? (((/* implicit */int) (signed char)-55)) : (((((/* implicit */int) (signed char)115)) % (((/* implicit */int) arr_5 [i_1])))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))));
                    arr_11 [i_0] [i_1] [i_1] [i_1] = var_12;
                    arr_12 [i_0] [i_1] [i_1] = var_10;
                }
            } 
        } 
    } 
    var_19 = min((((signed char) max((var_10), (var_2)))), (((signed char) var_6)));
}
