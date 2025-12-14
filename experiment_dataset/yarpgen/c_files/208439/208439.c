/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (-60 ? (max(127, 0)) : ((((arr_2 [i_0]) % (arr_2 [i_0])))));
                arr_7 [i_1] = (min(60, 15872));
                arr_8 [i_0] = var_5;
                var_18 = (arr_4 [i_0]);
            }
        }
    }
    var_19 = (min((min(var_10, 0)), ((((var_13 & -124) == ((max(var_15, -61))))))));
    #pragma endscop
}
