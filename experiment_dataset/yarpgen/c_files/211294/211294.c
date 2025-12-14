/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 &= (var_11 <= -2837524175618368899);
        var_18 = (!(var_11 || 5943));
        arr_2 [i_0] [i_0] = arr_1 [8] [8];
        var_19 = ((-(((arr_1 [9] [i_0]) ? 16670220935942660858 : var_10))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 |= ((~(max(827341722, (arr_1 [3] [i_1])))));
        arr_5 [i_1] = 37;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 = ((var_3 != ((((min(var_10, var_10))) ? ((-(arr_3 [i_4]))) : var_2))));
                    var_22 = (min(var_22, ((max(((-(var_6 <= 9223372036854775807))), var_11)))));
                }
            }
        }
        arr_13 [i_2] = ((((min((((arr_9 [i_2] [i_2] [i_2]) ? 1776523137766890765 : 8539780001927474137)), (arr_8 [i_2])))) ? (((1 ? var_3 : -9223372036854775807))) : ((((arr_1 [i_2] [i_2]) >> var_3)))));
    }
    var_23 = var_9;
    var_24 = (min(var_24, (((var_6 | (((((1682473754796044812 ? var_5 : var_3)) == ((1 ? var_7 : var_3))))))))));
    #pragma endscop
}
