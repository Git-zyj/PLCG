/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (max((max((arr_1 [i_0] [i_0]), var_10)), (((((-1647161976300864917 ? var_5 : (arr_0 [i_0])))) ? var_5 : 6199008163482869351))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = var_0;
                    arr_11 [i_0] [i_1] = 4294967295;
                }
            }
        }
        arr_12 [7] = arr_1 [i_0] [i_0];
        arr_13 [23] [i_0] = (((-(((-120 + 2147483647) << (var_8 - 2738991255))))));
    }
    var_11 = (min(1152921504606846912, var_7));
    var_12 = 2770678857;
    #pragma endscop
}
