/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = arr_3 [i_0];
                arr_7 [1] [i_0] = 41;
                arr_8 [i_0] [8] = var_8;
                var_10 = ((((max((~2147483647), (var_0 | var_0)))) ? (((((((-32767 - 1) + -32746)) >= ((~(arr_2 [i_1] [i_0]))))))) : (arr_1 [i_1])));
                var_11 = (((min((var_1 | var_2), (var_5 ^ 215))) % 4294967293));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    arr_19 [i_2] [i_4] |= (((((arr_9 [i_2]) / 98)) << ((((var_7 ? (arr_9 [i_2]) : var_0)) - 1935679234))));
                    var_12 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
