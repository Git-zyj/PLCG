/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max((((var_10 ^ var_17) ^ ((max(var_13, -2047185076))))), var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((-3382259771974600340 / 530103697) / 20)));
                arr_6 [8] = (((!(65535 <= var_0))) ? (arr_4 [i_1]) : (arr_1 [i_0]));
            }
        }
    }
    var_21 = (((43913 ? ((15095691233949298085 ? -3414281548982469710 : -3414281548982469710) : var_15))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] = ((!(arr_8 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((!3414281548982469710) | -3414281548982469734))) + (arr_12 [i_2] [i_3] [7])));
                                arr_20 [i_2] [4] [i_4] [i_2] [i_6] = 3414281548982469708;
                            }
                        }
                    }
                    arr_21 [i_2] [i_2] [i_4] = (~3414281548982469699);
                    arr_22 [i_2] [5] [16] = (((arr_8 [i_3]) ? (((arr_12 [i_2] [i_2] [i_4]) * -3414281548982469687)) : ((((arr_11 [i_2] [14]) ? (((arr_8 [5]) - 3414281548982469709)) : ((max((arr_9 [13]), (arr_8 [i_2])))))))));
                }
            }
        }
    }
    var_22 = (+-0);
    #pragma endscop
}
