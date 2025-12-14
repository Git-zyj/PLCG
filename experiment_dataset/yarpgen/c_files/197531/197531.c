/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((((253 ? var_10 : -38)) == (((min(var_9, 241))))))), (max((-2147483647 - 1), (-2147483647 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = 0;
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] = (-9223372036854775807 - 1);
                var_13 = ((-1174 ^ 31646) >= ((((134217727 / (-9223372036854775807 - 1))) - (((arr_3 [i_0] [i_0] [i_0]) / 9223372036854775780)))));
                var_14 = (var_5 - var_11);
            }
        }
    }
    #pragma endscop
}
