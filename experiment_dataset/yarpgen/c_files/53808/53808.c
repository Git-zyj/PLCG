/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((((max((((33002 ? (arr_2 [i_0]) : 255))), (max(var_6, 461022384418927633))))) ? var_13 : var_2));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_18 = ((!(arr_7 [i_1 - 1])));
        var_19 = ((!(arr_6 [i_1])));
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] = (max((arr_13 [i_3 + 1] [i_2 - 1]), (max((arr_16 [i_3 - 1] [i_2] [i_4] [i_2]), (arr_16 [i_3 - 1] [i_2] [i_2] [i_3 - 1])))));
                        arr_18 [i_4] |= (((((arr_7 [i_2]) ? (arr_15 [1] [1]) : 1))) ? (((((((arr_6 [i_2]) ? var_10 : var_2))) ? -461022384418927608 : (arr_16 [i_3 + 1] [i_4] [i_3 + 1] [i_3 - 1])))) : (((((60 ? 3187027242 : var_0))) ? (((((arr_12 [i_2]) == (arr_15 [i_3] [9]))))) : var_4)));
                    }
                }
            }
        }
        arr_19 [i_2] [i_2] = (((((((1 % (arr_8 [i_2])))) ? (~856240619671633160) : 32996))) ? ((56 ? (arr_14 [i_2]) : var_8)) : 33012);
        arr_20 [i_2] = (((var_14 <= -461022384418927660) ? ((max(var_10, (arr_6 [i_2 - 1])))) : (arr_8 [i_2 - 1])));
        arr_21 [0] [i_2] = 255;
    }
    var_20 = (var_4 == 3800252732);
    #pragma endscop
}
