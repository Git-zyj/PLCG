/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_20 = ((~((1763853836 ? 6144 : 799914090352170776))));
            var_21 = ((((min((((arr_3 [i_1]) ? var_4 : var_16)), ((max(6144, var_18)))))) ? 6171 : (max((arr_2 [i_0]), (arr_3 [i_0])))));
            var_22 = (min(var_22, ((min(59378, (((((6155 ? 21056 : 6157))) ? var_6 : var_7)))))));
            var_23 = (max(var_23, var_6));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_24 = (max(6144, 33100));
            var_25 = 0;
        }
        var_26 ^= (-(((arr_0 [i_0 + 1]) ? 2634938424 : var_5)));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_27 = ((~(((arr_7 [i_0 - 1] [i_3]) ? (arr_7 [i_0 - 1] [i_3]) : var_13))));
            var_28 = (((4078948737166969890 != 9900350204459164699) ^ 18446744073709551615));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_29 &= ((!(((~(arr_3 [i_0 - 1]))))));
            var_30 += ((-(((arr_11 [i_0 + 2] [i_0 + 2]) * (arr_11 [i_0 + 2] [i_4])))));
            var_31 = ((!((((!2773358661806068469) ? (!var_18) : ((-14518 ? 59380 : var_6)))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_32 = (((((-(arr_0 [i_0])))) ? var_1 : (min(2913672948, (arr_0 [i_0])))));
                        arr_19 [i_0] [i_4] [i_5] [i_6] [i_5] = var_16;
                    }
                }
            }
        }
        var_33 -= (max((arr_15 [i_0]), var_9));
        var_34 = (max(var_34, (arr_14 [i_0] [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_22 [i_7] = -8566780723447946865;
        arr_23 [i_7] = var_14;
    }
    var_35 = (min(var_35, (((~(21 ^ 59374))))));
    var_36 = var_4;
    var_37 &= var_5;
    #pragma endscop
}
