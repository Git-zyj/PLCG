/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (min(2615466587, (((((min(var_5, 26910))) ? (var_2 < var_8) : var_3)))));
    var_11 = 107;
    var_12 = ((max(var_1, (1 >= var_6))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 *= (max((arr_7 [i_0 - 1] [4] [12]), (arr_7 [i_3 + 1] [10] [i_0 + 2])));
                                arr_13 [i_2] [i_0 + 1] [i_2] [i_0] [i_4] [i_0] [i_4] = (1613043241 ? var_6 : (var_8 % 953965335));
                            }
                        }
                    }
                }
                var_14 = 1145438785;
            }
        }
    }
    #pragma endscop
}
