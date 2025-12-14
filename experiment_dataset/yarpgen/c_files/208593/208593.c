/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((((min(var_10, var_5))) ? var_7 : 9415250807083362436));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = -9151314442816847872;
                var_13 = (max(1294591879, (-2147483647 - 1)));
                arr_6 [i_0] [i_0] = min((min(-242213160, (arr_2 [i_0]))), ((max(((((arr_1 [i_1]) ? -1350977957 : (arr_1 [i_0])))), (arr_4 [i_0] [i_1 + 2])))));
                arr_7 [i_0] [i_0] = ((2358801095 ? 1528815832 : (min((var_0 > -9151314442816847885), (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}
