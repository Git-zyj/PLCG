/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (min(var_11, 21));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_12 = (min(var_12, (((-(-143 - 51795))))));
                    var_13 += ((-((min(65517, (arr_5 [i_0] [i_2 - 2] [i_2 + 1] [i_1]))))));
                }
                arr_7 [i_0] [i_1] = 196;
                arr_8 [i_0] [i_0] [i_1] |= (!0);
            }
        }
    }
    var_14 = (min(var_14, (((!((max(var_5, 13611794636099240580))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_18 [i_3] [i_6 + 2] = arr_4 [11];
                            arr_19 [1] [1] [i_3] [i_6] = 13741;
                            var_15 = (~170);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_16 = (arr_15 [i_3] [i_4] [i_7] [i_8]);
                            var_17 = 19;
                            arr_27 [i_3] = (max((((var_5 & 15830026774348647088) * (arr_17 [2] [i_7] [i_7] [i_4] [i_3]))), 32747));
                        }
                    }
                }
                var_18 ^= (max(var_9, ((min(((-4313064712874535751 ? (arr_23 [i_3] [i_3] [i_3] [i_3]) : 255)), (arr_10 [i_3]))))));
                var_19 -= 32748;
            }
        }
    }
    var_20 = var_4;
    var_21 = var_9;
    #pragma endscop
}
