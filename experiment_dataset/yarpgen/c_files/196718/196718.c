/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] |= var_8;
                arr_7 [i_0] [i_1] = (arr_3 [i_0] [i_0] [i_0]);
                arr_8 [i_1] [i_1] [i_1] = (~var_12);
            }
        }
    }
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_16 = var_11;
                        var_17 = -827047068;
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_3] [i_2] [i_3] [i_3] [i_2] [i_2] = (arr_17 [i_3] [i_3] [i_6 + 1] [i_3]);
                        var_18 |= var_2;
                        var_19 = arr_3 [i_2] [i_2] [i_2 - 1];
                        arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] = var_10;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_5, (arr_4 [i_2] [i_2] [i_2])));
                                var_21 |= (max(827047067, (~var_3)));
                                arr_27 [i_3] [i_3] [i_3] [i_3] = var_9;
                            }
                        }
                    }
                    var_22 = (arr_0 [i_4]);
                }
                arr_28 [i_3] = arr_23 [i_2] [i_2] [i_2] [i_2] [i_2];
                var_23 = var_9;
                arr_29 [i_3] = (max(var_1, 827047067));
            }
        }
    }
    var_24 = -827047087;
    #pragma endscop
}
