/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246046
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
    var_16 &= ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */unsigned char) var_1);
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)43637))) ? (5494518702299065893ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) var_12)) : (((long long int) ((var_7) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (short)32767))))))))));
    var_19 = ((/* implicit */unsigned short) (short)-26003);
}
