/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min(((-11299 ? (((((arr_2 [i_0] [i_1]) + 2147483647)) << (11320 - 11320))) : (arr_0 [i_0] [i_0]))), ((~(var_11 >= var_6))))))));
                arr_4 [i_0] [i_0] = (+-15);
                var_16 = (((((4 ? (arr_0 [i_1] [i_0 + 1]) : 11318)))) ? 201 : 65523);
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
