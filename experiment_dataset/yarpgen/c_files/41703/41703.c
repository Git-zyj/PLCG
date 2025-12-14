/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (((!(arr_1 [i_0] [i_0]))));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_16 = (max(var_16, (((~((2633505959 ? ((max(var_6, 119))) : (arr_0 [i_0]))))))));
            var_17 -= ((!((max((~var_11), -var_10)))));
            var_18 |= 59211;
            arr_6 [i_0] = (((arr_0 [i_0]) && ((118 || (arr_5 [i_0] [i_1])))));
            var_19 = ((((35417 ? 1233572020 : (arr_1 [i_1 - 3] [i_1 + 1]))) - (~35390)));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 += 108;
            var_21 = ((~(~18387780067643452425)));
        }
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_22 = (min(var_22, ((((((((var_9 ? (arr_3 [i_3 - 1] [i_3] [i_3]) : 8223684835509402804))) ? (arr_1 [i_3 + 2] [i_3]) : var_8)) >> ((-(!42))))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_23 = ((max(((64 ? var_14 : (arr_19 [i_6]))), 244)));
                        var_24 = ((35417 + (((arr_1 [i_3 + 1] [i_3 + 1]) - (arr_1 [i_3 + 1] [i_3 + 1])))));
                    }
                }
            }
        }
        var_25 = ((((((30697 || 113) ? ((((arr_2 [i_3] [i_3] [i_3]) || (arr_21 [i_3] [i_3] [i_3] [i_3])))) : (arr_2 [i_3] [i_3] [i_3])))) ? (arr_10 [i_3] [i_3]) : ((-(-127 - 1)))));
    }
    var_26 = (max(var_26, ((max((max((2351562519 + var_8), (!244))), (((62 ? (!var_0) : ((max(var_11, var_13)))))))))));
    #pragma endscop
}
