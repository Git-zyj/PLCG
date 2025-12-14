/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((((min((arr_0 [i_0] [i_0]), (arr_3 [i_0])))) ? (arr_1 [i_0]) : (min(((var_2 ? (arr_1 [i_0]) : var_1)), 31))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (((((((min(4092, 4092))) >= ((4092 >> (1374186265112797527 - 1374186265112797507)))))) == ((((min((arr_5 [i_2] [i_2]), 32))) * (3968 || 3968)))));
                        var_17 = (min(var_17, ((max(((-(var_8 % -3956))), 7970)))));
                        var_18 = (((((!(~4086)))) | (min(61444, (((arr_0 [i_1] [i_1]) << (-3969 + 3986)))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_19 = ((-(arr_6 [4] [4])));
        var_20 = arr_2 [0];
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_20 [i_5] = ((!(arr_12 [i_6] [i_6])));
                        var_21 = (min(var_21, (((var_2 - (arr_17 [i_7] [i_4] [i_4]))))));
                        var_22 = (min(var_22, (((!(arr_15 [2] [i_5]))))));
                    }
                }
            }
        }
        var_23 = (min(var_23, var_10));
        var_24 = (min(var_24, -62));
    }
    var_25 ^= var_10;
    var_26 = ((var_1 | (~var_10)));
    #pragma endscop
}
