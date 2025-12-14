/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(((var_8 ? var_18 : var_3))))) ? var_6 : var_0));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(((((min(var_15, var_13))) ? (min((arr_1 [i_0]), var_3)) : (arr_0 [i_0] [i_0]))), ((((arr_1 [i_0 + 1]) && (arr_0 [i_0] [i_0]))))));
        var_21 = arr_0 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 += ((14193 ? 14211 : 536613507));
        var_23 += 1288180698;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_24 = ((((min(97, 51343))) ? (((((arr_1 [i_2]) >= var_0)))) : (((!var_9) ? var_5 : (arr_5 [i_2])))));
        var_25 -= (var_1 - 51343);
        arr_6 [i_2] = 24832;
        var_26 *= (arr_0 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_9 [i_3] [i_3] = ((4825097054568978052 >> (((arr_1 [i_3]) - 1405576832129833291))));
        var_27 *= ((0 ? 63488 : -125));

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_28 = ((16774684182692209991 ? 5691955411335624691 : 2029));
            arr_13 [i_3] [i_3] [i_3] = 13794;
            var_29 = (((arr_8 [i_3] [i_4]) ? (arr_8 [i_3] [i_3]) : 51342));
        }
    }
    var_30 ^= (min((((var_13 < (-26871 < var_14)))), var_9));
    var_31 = ((((var_0 <= (~var_6))) ? ((var_1 ? (var_15 > var_6) : -var_8)) : (((max(((((-32767 - 1) && var_8))), (min(1, var_15))))))));
    #pragma endscop
}
