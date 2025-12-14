/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((-1676389664 ? 24576 : -4200395970762682208)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((max((var_7 == var_10), (max(528482304, (arr_7 [5] [5])))))) || (arr_8 [i_0] [i_1]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_2] = ((-(max(-528482315, ((max(var_3, (arr_14 [i_4] [i_4]))))))));
                                arr_16 [i_4] [i_2] [i_3] [22] [i_4 - 1] = ((max(((arr_12 [i_0] [i_0] [1] [1] [i_3] [9] [9]), (~4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = 31981;
    var_15 = (max(var_11, 48));
    var_16 ^= ((!((min(var_11, var_3)))));
    #pragma endscop
}
