/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((var_15 || (((576460752303390720 << ((min(250, 3))))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_18 ^= max((((249 ? 3 : 253))), (min(-13, 0)));
        arr_3 [i_0] [i_0] = -var_0;
        arr_4 [11] = ((((~((~(arr_0 [i_0 + 4]))))) == (7 >= 534773760)));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1 - 1] [i_1 - 1] = 0;
        var_19 = (min(var_19, var_9));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_3] = (min((arr_11 [17]), (max((((var_13 | (-2147483647 - 1)))), 4294967280))));
                    var_20 = (min(2147483647, 0));

                    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_21 = 2;
                        var_22 = (max(var_22, ((((arr_14 [i_2] [i_3]) ? ((-(max((-127 - 1), 4294967291)))) : (arr_13 [i_2] [i_2]))))));
                        var_23 = (~-19);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_3] = (((0 + 253) || (arr_14 [i_3] [i_3])));
                        var_24 = (~4294967295);
                        var_25 += (+-6);

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_26 &= 6;
                            arr_28 [i_3] = ((!var_0) ? 18446744073709551611 : -2147483638);
                        }
                    }
                    arr_29 [i_2] [i_3] [i_3] [i_3] = (((4294967289 - -5) / (((arr_14 [2] [i_3]) + (var_8 + 0)))));
                }
            }
        }
        arr_30 [i_2] [i_2] = (max(2147483647, 9));
        arr_31 [i_2] [i_2] = var_4;
    }
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        var_27 = (!1);
        arr_34 [i_8] [i_8 - 2] = ((var_11 > (((min(var_15, (var_3 > var_13)))))));
    }
    #pragma endscop
}
