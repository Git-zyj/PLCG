/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_0 ? var_19 : var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = 17945374793658643727;
                arr_6 [i_1] = (((((((((arr_1 [i_0]) ? (arr_2 [i_0]) : var_17))) ? (((~(arr_0 [i_0])))) : (((arr_1 [i_0]) ? (arr_4 [i_1]) : (arr_3 [i_1])))))) ? (((arr_2 [i_1 - 4]) ^ (arr_4 [i_1]))) : (arr_1 [i_0])));
                var_21 = 164;
                var_22 = (arr_0 [i_1 - 2]);
            }
        }
    }
    #pragma endscop
}
