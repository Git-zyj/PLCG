/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_8));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_13 &= var_4;
                        arr_12 [i_2] [i_1] [i_1 - 2] [i_1] [i_0] = (min((arr_3 [i_0 - 3]), ((874365123 ? 39 : (arr_3 [i_0 - 2])))));
                        var_14 = (((((!(arr_7 [i_0])))) << ((((var_2 ? var_3 : (arr_5 [i_0] [i_1 - 2]))) - 13201))));
                        var_15 = var_5;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_2] [i_1] = (!1);
                        var_16 += ((var_7 >= (arr_2 [i_1 - 2])));
                    }
                    arr_16 [0] [i_1] = ((((min(var_0, (arr_9 [i_0 - 2] [i_0 + 1] [i_1 + 1])))) ? var_5 : (arr_4 [i_1] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_25 [i_1] [i_1] [i_2] [i_5] [i_1] [i_2] = (((arr_2 [i_0 + 3]) ? var_8 : ((((arr_0 [i_0 - 1]) ? var_2 : var_1)))));
                                arr_26 [i_1] [i_1 - 1] [i_1] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_8;
    var_18 = (max(var_18, var_9));
    var_19 = (-874365133 % var_4);
    #pragma endscop
}
