/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 ^= (~26521);
                    var_16 |= ((1 & ((65535 >> (4274941760569742449 - 4274941760569742445)))));
                }
            }
        }

        for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
        {
            arr_8 [i_3] [i_0] = (max(((12546 ^ (arr_2 [i_3 + 2] [i_3 - 1] [i_3 + 1]))), (!-67)));
            var_17 = ((((((arr_2 [i_0] [i_3 + 2] [i_3 + 2]) - 1135624643)) / (arr_7 [i_0] [4] [1]))));
            var_18 = (((((max((arr_0 [i_3 + 1]), (arr_0 [i_3 - 1]))))) != (((arr_6 [i_0] [i_0] [i_0]) / (max(43727, 15038854665835453748))))));
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
        {
            var_19 -= ((!((max(3943971141, (21809 != 10))))));
            var_20 = (min(var_20, 47));
        }
        for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
        {
            var_21 += 237;
            var_22 = ((+((max((arr_7 [i_5 + 2] [i_5 + 3] [i_5 + 3]), 29863)))));
            var_23 = (max((-3233997741596049911 - 4290772992), (((~(arr_0 [4]))))));
        }
    }
    var_24 = (3407889407874097868 / 1008);
    #pragma endscop
}
