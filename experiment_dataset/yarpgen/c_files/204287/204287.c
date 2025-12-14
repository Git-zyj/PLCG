/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(1, (~233));
    var_13 &= (((!((min(239, -17928))))));
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 -= (188 <= 939524096);
                var_16 = (max(((~(max(233, 18446744073709551608)))), (~-5213)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_17 = (max(((((min(29, 100))) + 1)), (-1645486880 >= 63)));
        var_18 |= ((!(min((1 || 13), (min(1, 1))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 = ((((26 << (220 - 207))) <= ((-1683861142 & (1 * 237)))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    {
                        var_20 = (min(var_20, (((23307 == ((-(-8730659576723448100 + -19287))))))));
                        var_21 = (((max(5974256671540059456, 32687))));
                    }
                }
            }

            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                var_22 = (max(var_22, ((((min(((min(65516, 24576))), 4950450140559608947)) > 8633742335671967270)))));
                arr_24 [i_3] = (~1);
                arr_25 [i_3] [i_4] [3] [i_7] = (max(3, (max(82, 16206611897113365794))));
            }
            /* vectorizable */
            for (int i_8 = 4; i_8 < 14;i_8 += 1)
            {
                var_23 = 32759;
                var_24 -= -65509;
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_31 [i_9] = (!(1 == 121));
        var_25 = (40420 || 7570);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_26 ^= (~(!45433));
        var_27 = 25;
        var_28 = (max(var_28, ((((~75) * (!3998208809))))));
    }
    #pragma endscop
}
