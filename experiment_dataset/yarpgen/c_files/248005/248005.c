/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((~var_7) | (~1874148132))) ^ var_9);
    var_14 = (((((max(var_10, var_2)) ? var_1 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((-1874148133 | (arr_1 [i_1 + 3] [6])))) ? var_7 : var_12);
                arr_6 [i_0] [i_0] = (!((min(-394978189, 0))));
                arr_7 [i_0] [i_0] = (~var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [7] [i_2] [9] [i_2] [i_0] = ((49273 ^ (arr_0 [19] [i_0])));
                            arr_15 [14] [16] [i_0] [18] [i_3] = ((30 || (((var_4 ? 1 : (-29 & 15242554355275508447))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                arr_21 [i_4] [i_4] = (min((((((max((arr_19 [i_4] [i_4]), (arr_17 [20])))) + ((var_8 ? var_0 : (arr_18 [i_4] [1] [i_4])))))), (min(((min(-1874148133, (arr_18 [i_4] [i_4] [13])))), (max(18, -499621382890895675))))));
                arr_22 [i_4] [i_5] = (~var_11);
                arr_23 [i_4] [i_4] [i_5] = (min((((-(arr_16 [i_5])))), (((((18 ? var_12 : 57600067))) ? var_11 : var_5))));
            }
        }
    }
    #pragma endscop
}
