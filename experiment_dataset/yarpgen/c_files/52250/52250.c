/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((-(arr_1 [i_0]))) > ((((1 > (arr_0 [i_0])))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (min((((((1 ? var_5 : var_10))) | -712643287858932091)), (~-712643287858932081)));
            var_14 = (~712643287858932094);
            var_15 = 6332182967842841963;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_16 = (((~var_7) ? (((arr_0 [i_0]) ? var_11 : -7)) : (~1)));
            var_17 = 4294967295;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_18 = (min((((var_12 << (var_3 + 18720)))), ((((min(2644129792, 4254945017))) ? (~var_6) : (6 / var_8)))));
                var_19 ^= ((((min((~var_12), 127))) ? ((-((var_7 ? var_10 : 54609)))) : (arr_5 [i_0] [i_0] [i_0])));
                var_20 = var_5;
                arr_13 [i_3] [i_3] [i_3] [i_3] = ((((((var_2 ? 26 : 16))) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_4 [i_4]))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_21 = (arr_18 [i_0] [i_3] [i_4] [i_3] [i_6]);
                            arr_19 [i_0] [i_3] [16] [i_5] [i_3] = -var_7;
                            var_22 &= 1;
                        }
                    }
                }
            }
            arr_20 [i_3] = (((arr_14 [i_0]) ? var_7 : ((min(-var_2, (arr_5 [i_0] [i_0] [i_3]))))));
            var_23 = (7699460589713430855 & var_12);
            var_24 = (min(var_24, ((min(((min(-1, 220))), (arr_11 [i_0] [i_0] [i_0] [i_3]))))));
            var_25 = (((480950191 ? 221 : 1)));
        }
    }
    var_26 = var_2;
    var_27 -= ((~(~var_8)));
    var_28 = ((((var_8 ? (min(var_3, 3)) : var_6)) >= (var_5 && var_12)));
    #pragma endscop
}
