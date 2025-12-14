/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    arr_9 [2] [i_2] [i_0] = ((-var_0 ? var_10 : ((-(((arr_5 [1] [i_0]) ^ -1))))));
                    var_20 = ((-70 ? 3547818509 : 51934));
                }
                var_21 = (max((arr_2 [i_0]), (arr_6 [2] [i_1] [i_1])));
            }
        }
    }
    var_22 = (((((var_7 ? -1 : ((var_16 ? var_17 : var_7))))) ? (((!var_11) >> ((((0 ? var_12 : var_0)) - 23088510)))) : -var_0));
    var_23 = (max(var_23, (!var_1)));
    var_24 |= (((!var_16) ? (min(var_19, var_5)) : -8935967405715874052));

    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (arr_12 [i_3])));
        var_26 = max(var_18, (min(var_2, 8191)));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_27 ^= var_19;

                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (((6343400709918565775 >> (((var_19 >> 0) - 12350)))));
                        var_28 = (max(var_28, (((!(-32767 - 1))))));
                    }
                }
            }
        }
        arr_26 [i_4] = ((!((((((var_17 ? var_10 : (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (arr_22 [i_4] [i_4] [i_4] [i_4] [11] [i_4]) : (arr_20 [i_4] [i_4] [i_4]))))));
        arr_27 [i_4] [i_4] = ((!(((-(arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
        var_29 = ((var_19 ? (min((-32767 - 1), 4294959105)) : 0));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_30 = (min((((arr_15 [i_8]) ? (arr_15 [10]) : (arr_15 [i_8]))), ((var_14 ? (arr_15 [i_8]) : var_16))));
        arr_31 [i_8] [i_8] = (arr_13 [i_8]);
        arr_32 [8] &= ((-698930734 ? 32767 : -14972));
    }
    #pragma endscop
}
