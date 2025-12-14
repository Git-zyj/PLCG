/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (14255858960960802270 ^ var_7);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 3] [i_0 - 3] [i_2] [i_0] = ((23992 ? 181 : 5851463101373211962));
                    arr_7 [i_0] [i_1 - 2] [i_1 - 2] = var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 6;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_19 [i_3] [i_4] [i_5] [i_6] [i_7] = (~16607237663148354601);
                                arr_20 [i_3] [i_4] [i_5] [i_6 - 1] [i_7] [i_6 - 1] = ((((((var_2 != 16607237663148354601) | var_5))) ? 239 : (((4681474302320420265 != ((var_9 ? 5851463101373211974 : var_8)))))));
                            }
                        }
                    }
                }
                arr_21 [0] [i_4] = var_0;
                arr_22 [i_4] = (((((30085 % (arr_1 [i_3] [i_3 + 1])))) ? (min(((~(arr_12 [i_3 - 3] [i_4] [i_4] [i_4]))), 239)) : (((arr_0 [i_3]) ? (arr_8 [i_3 - 2] [i_4]) : 0))));
                arr_23 [i_3] &= ((((max((arr_8 [i_4] [i_3 - 2]), (arr_8 [i_3 - 1] [i_4])))) > ((min((arr_8 [i_3 + 3] [i_3 - 1]), -91)))));
            }
        }
    }
    #pragma endscop
}
