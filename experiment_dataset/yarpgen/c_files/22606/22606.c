/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_15 = (var_3 + -15485675484745357987);
        var_16 += 209454824;

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_17 *= 4085512459;
            var_18 = ((~((~(var_9 & 209454868)))));
            var_19 *= var_7;
            var_20 = (max(8019766375058011676, ((max(var_4, (((4085512459 << (((arr_0 [i_0]) - 25165))))))))));
        }
        var_21 = 21423;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = ((((209454816 > (arr_7 [i_2])))));
            var_23 = (max(var_23, (((~(arr_5 [i_2] [i_2 - 2] [9]))))));
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                var_24 = (var_5 & 209454823);
                var_25 = var_5;
            }
            var_26 -= ((var_3 ? var_7 : var_0));
            arr_14 [1] [1] |= ((+((var_8 ? (arr_11 [5] [i_4] [i_2]) : (arr_5 [i_2] [i_2 + 1] [i_4])))));
        }
        var_27 = (min(var_27, (((var_4 < (arr_5 [i_2 - 1] [i_2] [i_2]))))));
    }
    var_28 -= (((((4085512468 ? var_12 : 2038710154))) ? var_5 : var_11));
    var_29 = ((4085512479 + ((((~-2038710153) & ((var_7 ? var_9 : var_3)))))));
    #pragma endscop
}
