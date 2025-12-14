/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 9223372036854775797));
                var_18 += ((16 ? 1 : (arr_1 [i_1])));
                var_19 = 16;
            }
        }
    }
    var_20 = (min(1, (!1187622686)));
    var_21 = ((-((~((65531 >> (10403414471221179159 - 10403414471221179135)))))));
    var_22 = ((var_9 ? (max(((min(1, 250))), (var_3 * 3152460099))) : 3152460106));
    var_23 = 5920;
    #pragma endscop
}
