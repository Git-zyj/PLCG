/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-5564987584125213939 ? 35184372080640 : 1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 = ((((((((var_11 / (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (arr_11 [i_2] [i_2]) : 0))) ? (arr_0 [i_3] [i_4]) : ((((max(5564987584125213949, 4294967286))) ? (3 && var_2) : (arr_13 [i_0] [11] [i_2] [i_2] [i_4])))));
                                var_15 = ((((((233 ? 1 : -5564987584125213939)) * -74)) / -1));
                            }
                        }
                    }
                }
                var_16 = (arr_11 [10] [i_1]);
            }
        }
    }
    #pragma endscop
}
