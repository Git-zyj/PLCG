/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (min(var_14, var_6));
        arr_2 [i_0] [i_0] = (-var_5 | var_11);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (min(var_15, (((~var_12) ? ((((var_0 ? var_7 : -8480)) << (((arr_3 [i_1] [i_1]) - 2883341265)))) : (arr_3 [i_1] [i_1])))));
        var_16 = (var_10 & ((((((1832708840 ? (arr_4 [i_1]) : var_8))) ? (~1) : (arr_3 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = (-8480 ? 3011 : -1056);
        var_18 = ((-1207477138 ? 1207477154 : 2921785902));
        var_19 |= -11491;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_20 = (max(((min((((arr_4 [i_4]) ? (arr_11 [i_5] [i_3] [i_3]) : (arr_3 [i_4] [i_5]))), ((((arr_12 [6] [i_5]) ^ 1)))))), ((((min(2747969830, -1207477138))) ? (arr_12 [i_4] [i_3]) : var_1))));
                    var_21 = ((((-1073 % (arr_13 [i_3] [i_5] [i_5] [i_3])))) ? (max((arr_13 [i_3] [i_4] [i_5] [i_5]), (arr_3 [i_4] [i_3]))) : (arr_3 [i_4] [i_5]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                arr_21 [i_7] [i_6] [i_6] = (arr_18 [i_6]);
                var_22 = ((min(7674544337494664870, 42233)));

                /* vectorizable */
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    var_23 = (((arr_12 [i_8 + 2] [i_8 + 2]) << 1));
                    var_24 = 34594;
                    var_25 &= ((!(arr_11 [i_6] [i_8 + 1] [i_8 + 1])));
                }
            }
        }
    }
    var_26 = var_13;
    var_27 = (min(22421, 1207477137));
    #pragma endscop
}
