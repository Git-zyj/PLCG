/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 10835024676711219410;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = 63876;
                    arr_8 [i_0 + 1] [i_0] = (min((min(7042747348844769580, 63854)), 63869));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 -= (((arr_1 [10]) == ((-var_2 ? ((min(var_14, (arr_5 [12])))) : ((max((arr_9 [4] [i_4 - 1]), var_13)))))));
                                var_21 |= ((((arr_0 [i_4 - 2] [6]) ^ (max((arr_6 [i_1] [4]), 1651)))) | ((-(arr_13 [10] [i_4 - 1] [i_2] [i_1] [i_0 + 2] [i_4 + 1] [i_3]))));
                            }
                        }
                    }
                    var_22 ^= min(63893, var_1);
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (((((646463463 ? ((-(arr_15 [i_5] [i_5]))) : ((242 ? 63861 : -1672442537)))) == (!var_9))))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_27 [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6] = ((((max(63876, 1656))) ? (-31834 + var_6) : -5225117299663116826));
                        var_24 ^= ((((max(63846, (((arr_10 [2] [i_6]) ? var_10 : var_8))))) ? ((((12 ? 63862 : var_2)) - 65534)) : (min((max(var_9, 1)), (max((arr_12 [0] [i_6]), (arr_15 [i_6 - 1] [i_7])))))));
                        var_25 ^= (max((((((max(var_13, (arr_5 [4])))) || var_2))), (max((((-7 ? 12 : -15620))), (((arr_26 [i_6] [i_6 + 1] [i_6] [8]) / var_7))))));
                    }
                }
            }
        }
        var_26 = (min((arr_12 [6] [i_5 + 1]), (arr_12 [0] [i_5])));
    }
    var_27 += (((var_4 ? ((var_9 ? 17 : var_0) : var_17))));
    #pragma endscop
}
