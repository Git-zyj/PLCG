/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_12));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = ((((~(arr_0 [i_0] [i_2]))) == (((((((arr_1 [i_1] [i_1]) || var_9))) >= var_2)))));
                    var_16 = (((arr_2 [i_1] [i_1 + 1] [i_1 + 1]) ? var_8 : (arr_1 [2] [2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                {
                    var_17 = arr_12 [i_3] [i_3] [i_3] [i_5];

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_17 [i_3] = (min(-4696529839551629096, 7663));
                        var_18 = ((((((arr_7 [i_3]) ? ((1 ? (arr_16 [i_3] [i_4] [i_4] [i_4]) : var_0)) : (((arr_13 [i_3] [i_4] [i_6]) - var_3))))) ? 7666 : (((((min((arr_7 [i_3]), (arr_8 [i_3])))) >= var_0)))));
                        var_19 = var_5;
                        arr_18 [i_6] [i_6] [i_3] [i_3] [i_4 - 1] [i_3] = (min(7639647010764554799, (-127 - 1)));
                        var_20 = (((((((-123 ? 11904846336262393456 : (arr_11 [1] [1] [1]))) == ((7648 ? var_13 : 58553))))) >> (7639647010764554812 - 7639647010764554791)));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        var_21 *= (((min((arr_7 [i_5]), (arr_20 [i_4 - 1] [i_5] [i_4 + 1]))) > ((((arr_7 [i_5]) | (arr_7 [i_5]))))));

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_22 = (((((arr_9 [i_3 - 1] [i_3 - 1] [i_3]) - (arr_23 [i_3] [i_3] [i_8 + 1]))) != (arr_9 [i_5] [i_7 - 1] [i_3])));
                            var_23 = ((var_14 - (arr_22 [i_3] [i_4] [i_3] [i_7 - 1] [i_8] [i_4])));
                        }
                    }
                    var_24 = (((((((var_2 % (arr_14 [i_5] [i_3] [i_4] [i_3]))) > 7667)))) % (arr_11 [i_3] [i_3] [i_3]));
                    var_25 = (min(var_25, ((((((~(arr_19 [i_5] [i_4])))) ? (arr_24 [5] [i_3] [5] [i_3 - 1] [i_3] [i_4 + 1] [i_5]) : 827214079)))));
                }
            }
        }
    }
    #pragma endscop
}
