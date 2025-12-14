/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28070
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((signed char) (short)-11299))) ? (((((arr_2 [i_0] [i_1]) + (2147483647))) << (((((/* implicit */int) (short)11320)) - (11320))))) : (((/* implicit */int) arr_0 [i_0] [i_0])))), ((~(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_6))))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)15))))));
                var_16 = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) arr_0 [i_1] [i_0 + 1])) : (((/* implicit */int) (short)11318)))))) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned short)65523)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_1);
}
