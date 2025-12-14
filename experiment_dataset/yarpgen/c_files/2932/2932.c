/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((var_5 ? var_0 : 96)), var_12));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 += min(((17729821928432104840 == ((max(1233159891, (arr_0 [i_0])))))), ((!((min(12099, var_19))))));
        var_22 ^= (((1873 + -1518142963) ? (((arr_0 [i_0]) / (arr_1 [i_0] [i_0]))) : (min(((1 ? -24337 : var_6)), ((1 ? -11169 : 56526))))));
        var_23 = (((-3389 >= (min(var_4, (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_24 -= 10923;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_25 -= ((110 ? ((max(((-30280 * (arr_11 [i_4] [i_3] [i_1]))), ((min(65535, 18)))))) : (max((max(-123, 17729821928432104844)), ((min(2695766172, 46840)))))));
                        arr_13 [i_1] [i_2] [i_3] [i_3] [13] = (arr_12 [i_1] [i_1] [10] [i_1]);
                        arr_14 [19] [19] [19] [i_2] [i_1] = var_1;
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((((((!(arr_3 [i_3]))))) * ((743621098 ? ((min(-10935, var_19))) : 18560))));
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_26 = ((-24337 ? (((arr_19 [i_5 + 1]) ? var_4 : 1522780480425203558)) : (((-7 ? 18560 : 7)))));
        var_27 = (max(var_27, ((min((((!19480) >> (((min(-1059945836, var_18)) + 1059945857)))), (((46480 != -1333) ? -1 : -24316)))))));
        arr_20 [i_5] = (((((-2147483647 - 1) ? ((-10 ? 18560 : 4102001485)) : -3290076302))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_25 [i_6] = 2040;
        arr_26 [i_6] [i_6] = (((((min(-28, -1655043779)))) || (((((min(-10923, 2021697918))) ? ((((arr_11 [i_6] [1] [15]) * 18545))) : ((3653023622 ? var_1 : -8033262136934887331)))))));
        var_28 = (min((min((((14663667517108596805 ? 65178 : 120))), var_0)), (min(((((arr_6 [i_6]) && 16504))), (min(-1655043779, (arr_9 [i_6])))))));
    }
    #pragma endscop
}
