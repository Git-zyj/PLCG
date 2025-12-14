/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [1] [i_0] = (255 << 0);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1 - 1] [i_0] [i_2] [i_3 - 2] = 6441526342256043859;
                            var_15 = (max(var_15, 1));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = (arr_0 [i_0] [i_4 - 1]);
                                arr_21 [i_0] [i_0] [i_4] [2] [i_6] &= (((1 != 0) % (((var_8 | (arr_19 [10] [i_5] [i_6]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_17 = (((((38952 ? var_8 : (arr_0 [i_0] [i_0])))) ? (((255 ? 0 : 53))) : (arr_29 [4] [8] [i_7 - 1] [i_7 - 1] [1] [1] [10])));
                                arr_30 [i_0] [i_1] = -6441526342256043860;
                                var_18 -= -var_8;
                            }
                        }
                    }
                    arr_31 [i_0] [i_1] = ((~(arr_19 [i_0] [0] [i_4])));
                }
            }
        }
    }
    var_19 = (((-6441526342256043860 & 255) & -6441526342256043859));
    #pragma endscop
}
