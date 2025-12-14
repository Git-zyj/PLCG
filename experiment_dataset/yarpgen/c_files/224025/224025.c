/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (((arr_2 [i_1] [i_1]) ? (min(((max(var_3, 0))), (min(13821911034161764810, -27)))) : (((-5 ? var_13 : (max(179, var_13)))))));
                arr_7 [i_0] [i_1] = (min(4, (max(0, var_4))));
            }
        }
    }
    var_15 = (min(var_15, (max((max(((var_3 ? 11197 : 1)), 981525206)), (~var_2)))));
    var_16 &= var_0;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_17 = (max(var_17, 121));
                var_18 *= (-1 > var_5);
                arr_15 [i_3] [i_2] [i_3] = (0 % 6035113507137514705);
                var_19 = (max(var_19, -95));
                arr_16 [i_3] = -9;
            }
        }
    }
    #pragma endscop
}
