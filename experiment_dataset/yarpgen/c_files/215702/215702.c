/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_19 = (arr_2 [4] [i_1] [4]);
                            arr_9 [i_1] [i_1] [i_2] [i_0] = ((((~((var_5 ? (arr_1 [i_1]) : var_17)))) != (!3237709284)));
                            var_20 = (-1 & 1057258012);
                        }
                    }
                }
                arr_10 [i_0] [i_0] = 1374233336;
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
