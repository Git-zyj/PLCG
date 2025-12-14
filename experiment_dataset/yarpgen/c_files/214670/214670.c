/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min((~4294967289), 65518))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 ^= (!4862024750994584186);
        arr_2 [i_0] = (-((3 ? 1223618002 : 0)));
        arr_3 [i_0] = 65513;
        arr_4 [i_0] [i_0] = (60735 / 9450661156302397151);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_16 [i_3 - 1] [i_2] [i_1] [i_0] |= 68169720922112;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_20 [i_0] [i_2] [i_2] &= 0;
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = -0;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_25 [i_5] = 40501;
        arr_26 [i_5] = -0;
        var_19 = ((60725 ? ((60733 ? 4294967279 : 60725)) : 17));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_31 [i_6] [i_6] = ((4789 ? (((4810 ? 27217 : 4811))) : 4294967267));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_20 = (max((min((~39510), 0)), 3048360765));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_43 [i_10] [i_9] [i_8] [i_7] [i_6] [i_6] [i_6] = (4789 ? 64 : ((0 ? 18446744073709551609 : 2891287597)));
                            arr_44 [i_6] [i_7] [i_8] = 3;
                            arr_45 [i_7] [i_9] [i_10] = 25101;
                            arr_46 [i_6] [i_7] [i_8] [i_8] [i_9] [i_9] [i_10] = (2998001272 >> 17);
                        }
                        arr_47 [i_9] = 4294967280;
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 7;i_11 += 1)
    {
        var_21 = 38319;
        arr_52 [i_11] = (!2);
        var_22 = (max(var_22, ((((0 == 60722) % (max(25096, 50612)))))));
    }
    #pragma endscop
}
