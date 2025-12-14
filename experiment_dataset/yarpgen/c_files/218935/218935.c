/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            var_13 = (~-12);
            arr_5 [i_1 - 2] &= ((!(!50450)));
        }
        arr_6 [i_0] = ((~((var_8 ? var_8 : -var_12))));
        var_14 += ((~((var_12 ? (-1479619592 && 10598) : var_9))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 = (((var_2 * ((4095 ? var_12 : var_2)))));
        var_16 = (max(var_16, ((((var_1 ? var_3 : ((var_2 ? -753799779 : var_8))))))));
        arr_9 [3] [i_2] = (((((var_5 ? var_2 : (!101)))) ? (1 || -51177) : -var_12));
        var_17 = -14118;
        var_18 = ((-(((((-26778 ? 1 : -9))) ? (1 >= var_4) : 1))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_19 = (max(var_19, 1));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_20 = -10;
                    var_21 = 41448;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_29 [i_7] [i_9] [i_7 + 1] = ((~(~1)));
                        var_22 = 766400367;
                    }
                }
            }
        }
        arr_30 [i_6 - 1] [i_6 + 1] = var_6;
    }
    var_23 = var_3;
    #pragma endscop
}
