/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 &= (((397777885 || -15356) + (2317662509 * 520093696)));
        var_14 -= -99;
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1] [i_1 + 3] = 397777885;

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_1 - 1] [i_2] [1] = 3897189411;

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_15 += ((((((23 >> (2288944702 - 2288944672))) & 1)) * (-30943 & 248)));
                        var_16 = (((1 >= 33552384) >> (((23 + 99) - 101))));
                    }

                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_17 = 0;
                        var_18 = 2267693163401113116;
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_19 = 13305;
                        var_20 = ((((0 || 1) & 1)) != 5775);
                        var_21 = 600157079;
                    }
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    var_22 = ((1 % ((1 << (-23730 + 23748)))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_28 [i_9] [i_8 - 1] [i_3] [i_2] [i_2] [i_9] = (-15972 == 248);
                        var_23 = 0;
                        var_24 = (max(var_24, ((((0 - 233) % (1572546578 * -95))))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_32 [i_3] = (((9 % -45) <= -1022335358));
                        arr_33 [8] [8] [4] [10] = (1 * 0);
                    }
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        var_25 = 233;
                        arr_37 [i_11] [i_2] [i_3] [i_2] [i_11 + 3] = ((233 << (4294967295 - 4294967280)));
                        var_26 = 45;
                    }
                }
                var_27 ^= 127;
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                var_28 *= (((1 % 3694810216) << ((((228 * (-728553537 > 8749494727340580054))) - 204))));
                var_29 ^= 1;
            }
        }
        var_30 = (max(var_30, 111145625));
        var_31 += (65535 / 47732);
    }
    var_32 = ((1 >> (10862020372349826297 - 10862020372349826297)));
    var_33 = (((3196861180714748461 <= 17803) & 8295981908153114255));
    var_34 = -926438362;
    #pragma endscop
}
