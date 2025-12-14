/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 42797));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((((0 ? 127 : var_5))) && (((var_4 ? 4257850900 : (arr_1 [i_1])))))) ? (arr_2 [i_0]) : (((var_2 + 2147483647) >> (15089 - 15059)))));
                arr_6 [i_0] = (((19 / 55181) ? (((min(40873, 0)))) : (((arr_3 [9] [i_1]) * (((var_4 ? (arr_2 [i_0]) : -19)))))));
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
