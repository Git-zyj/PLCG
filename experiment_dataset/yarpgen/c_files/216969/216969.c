/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((((!((min(var_13, 108))))) ? -255 : var_4));
                arr_8 [12] [i_1] = 1064769626;
                var_14 = var_2;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_22 [17] [i_6] [i_4] [i_5 - 2] [i_4] = ((((arr_21 [i_2] [i_2] [i_4] [i_3 - 2] [i_2]) || var_4)));
                                arr_23 [i_4] [i_4] [i_4] [i_5 - 1] [i_4] = 1;
                            }
                        }
                    }
                    var_15 += (!var_6);
                }
            }
        }
    }
    var_16 = 63;
    #pragma endscop
}
