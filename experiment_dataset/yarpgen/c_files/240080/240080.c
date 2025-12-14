/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((19067 > (((arr_2 [i_1 + 2]) ? (arr_4 [2] [i_0] [i_0]) : var_8))))) >> (-6223418876287648519 - 64740)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [2] [15] [i_4] [i_4] = 63488;
                                var_20 = arr_7 [4] [i_1 - 1] [0] [i_3];
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 &= (!6223418876287648506);
    #pragma endscop
}
