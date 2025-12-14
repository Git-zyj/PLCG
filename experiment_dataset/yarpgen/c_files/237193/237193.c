/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 += (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_12 -= 44443;
                                arr_16 [i_0] [i_3 + 2] [i_0] [i_0] [i_0] = (var_0 | var_5);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] = 44451;
                        var_13 -= (986677743 * 12024022738234847007);
                        arr_21 [i_0] [i_1] [i_1] [11] [i_1] [i_5] = (max(((((arr_11 [i_0 + 1]) && var_3))), (min((arr_11 [i_0 + 1]), (arr_11 [i_0 - 1])))));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_14 += 8785603129539308799;
                        arr_26 [i_0] [i_1] [i_2] [i_6] [i_0] = var_2;

                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            var_15 = (min(var_15, ((((((((-291947418 ? (arr_8 [10]) : 1998126717))) ? (min((arr_15 [i_0] [10] [6] [i_2] [i_0] [i_6] [4]), var_3)) : (arr_9 [i_7 + 2] [i_1] [i_0 - 1])))) ^ var_2))));
                            var_16 = (((arr_9 [i_0] [i_0 - 1] [i_7 + 2]) ? (arr_22 [i_0] [3] [i_7 + 3] [i_0] [i_0 + 1]) : (arr_9 [i_0] [i_0 - 1] [i_7 + 1])));
                            var_17 = (min(var_17, (((((((var_6 && (arr_11 [i_1]))))) <= (arr_28 [i_0 + 1] [i_0 + 1] [i_7 - 1]))))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_18 = ((1934340043 ? (arr_12 [i_0 + 2]) : (((arr_12 [i_0 - 1]) ? -7389784139290203855 : (arr_12 [i_0 + 2])))));
                            var_19 = (min(var_19, var_4));
                        }
                    }
                    arr_33 [1] [i_0] = 250;
                }
            }
        }
    }
    var_20 = (max(var_20, (~var_3)));
    var_21 = (max((!var_8), var_5));
    var_22 += (((!14096717723591113825) + (((var_4 <= ((12024022738234846997 ? var_7 : var_2)))))));
    #pragma endscop
}
