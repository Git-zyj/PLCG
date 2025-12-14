/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max(var_1, 4294967295));
    var_16 &= 4294967295;
    var_17 = 7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (max(var_6, (((4294967288 == 1) << (var_1 >= 1)))));
                    var_19 = 4294967288;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_5] = (((((var_6 ? (arr_7 [i_3] [i_4]) : (((arr_14 [i_4]) ? var_1 : var_4))))) ? -1 : (((17 ? (arr_6 [i_3]) : var_0)))));
                    var_20 = (min(-26999, 8307714340165782382));
                }
            }
        }
    }
    #pragma endscop
}
