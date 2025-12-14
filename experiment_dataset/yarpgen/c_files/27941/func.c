/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27941
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
    var_19 = (-(((/* implicit */int) var_11)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((((signed char) (!(((/* implicit */_Bool) var_0))))), (((/* implicit */signed char) ((((/* implicit */int) (signed char)29)) < (((/* implicit */int) (signed char)-80)))))));
                var_21 = ((/* implicit */short) ((((-1632058960) + (((/* implicit */int) (signed char)-74)))) <= ((-(arr_4 [i_1] [i_1] [i_0 - 2])))));
                arr_5 [(unsigned short)5] [i_1] [i_0] = ((/* implicit */signed char) var_18);
                var_22 = ((/* implicit */signed char) ((((arr_2 [i_0 - 1] [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 1])) : (-1632058960))) + (((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])) / (-165628221)))));
            }
        } 
    } 
}
