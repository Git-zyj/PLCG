/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_2 ? var_8 : (var_0 > var_2)))) ? (((max(var_2, var_9)) + (max(var_11, var_2)))) : (((2305843009213693951 ? var_8 : var_0)))));
    var_14 = ((((((1236733876380874950 ? var_6 : var_5))) == ((7750992064607622582 ? 1617 : 2305843009213693940)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((((var_9 ? var_0 : (max(157, -1236733876380874950)))) <= (((((min(var_12, var_4)))) / (max(var_7, var_7)))))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] = (((min((min(var_12, 3146250468)), 0)) << 0));
            var_16 *= ((-(~11918035744412408958)));
            var_17 = (max(var_17, (12706816915443145969 & var_6)));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_18 = 2266955927;
            var_19 = var_10;
            arr_12 [i_0] [i_2] [i_2] = 45087;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_20 = ((((var_0 ? var_0 : ((30713 ? var_8 : 3146250480)))) != (((((13530517645920928327 ? 2670258643 : var_12))) ? var_3 : var_0))));
                arr_18 [i_0] [i_3] [11] [i_0] = ((~(((min(20449, 0))))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_21 [i_0] [i_0] [i_5] [5] = ((((var_7 ? ((144106391982833664 ? var_10 : var_1)) : var_3))) ? (max(1595, (!45067))) : (var_7 > var_12));
                arr_22 [i_3] [i_3] |= ((var_9 ? ((max(((max(var_4, 3190))), ((var_3 ? var_7 : var_5))))) : ((-4385478392225004786 ? var_3 : (min(var_10, var_3))))));
                arr_23 [i_0] = (min(-1618, (min(-27400, (max(7750992064607622588, var_0))))));
            }
            arr_24 [i_0] [i_0] = (min((~var_4), var_5));
            arr_25 [i_0] = max(var_12, (max(((1393258055 ? 2364584195098562764 : -52)), ((max(var_3, var_0))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    {
                        var_21 ^= (-9223372036854775807 - 1);
                        var_22 = (var_2 > 229);
                    }
                }
            }
        }
        var_23 = -3094795486068890123;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_34 [i_8] = (((((~var_4) ? 13123 : -var_11))) ? 32396 : 1500926568);
        arr_35 [i_8] = ((((max((min(-4475590561896104562, var_11)), (((11859 ? var_12 : 1)))))) ? ((3404060635 ? -1386197196111252280 : 15340154955965197010)) : (((((max(var_0, var_2))) ? var_1 : var_4)))));
        arr_36 [i_8] [i_8] = ((34 ? 2147483647 : var_5));
        var_24 = 2305843009213693941;
        arr_37 [i_8] = max((2359431243 >= 1), ((((8444249301319680 ? 127 : var_5)) << ((((0 ? 1214891038 : 9615)) - 9600)))));
    }
    #pragma endscop
}
