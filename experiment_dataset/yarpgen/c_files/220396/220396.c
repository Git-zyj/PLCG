/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((min(((max(1, 98))), (min(var_11, var_6)))), (min(((min(var_6, var_6))), (max(var_7, var_5)))));
    var_14 &= (min(0, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (min(((min((min(1, var_3)), ((min((arr_2 [i_0]), (arr_0 [i_0]))))))), (max(((max(120, 1))), (max(0, 0))))));
                var_16 = min((min((min(4294967295, 0)), (min(2439132859, var_3)))), (min(1349355220, 1)));
                var_17 = (min(var_17, (min((max((max(var_2, (arr_1 [i_0]))), ((max((arr_1 [i_1]), var_12))))), ((min((min(23, 1)), ((min(-45, 38))))))))));
                var_18 = max((min((min(2390642403, var_6)), ((min((arr_4 [i_0] [i_0] [i_1]), 22))))), ((max(((max(var_1, 1))), (max((arr_1 [i_0]), (arr_1 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
