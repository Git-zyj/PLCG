/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 65535;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_3] [i_3] [i_2] [i_3 - 1] = 64191;
                        arr_12 [i_1] [i_3] [i_3] [i_1 - 1] = 124;
                        var_14 = (min(var_14, 9367));
                        arr_13 [i_0] [i_3] [i_0] [i_3] = -648488421;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_15 += 0;
                                var_16 = (min(var_16, 5556461303196437431));
                            }
                        }
                    }
                    var_17 &= 1;
                    var_18 = (min(var_18, 5556461303196437422));
                    var_19 = 12890282770513114204;
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_20 = (-32767 - 1);
                                var_21 = 32767;
                            }
                        }
                    }
                    arr_43 [i_8 - 2] [i_8] = 5556461303196437431;
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_22 = 12890282770513114193;
                                var_23 = (min(var_23, 3711573626867165062));
                                var_24 = 239;
                                var_25 = 5556461303196437422;
                            }
                        }
                    }
                }
            }
        }
        arr_50 [i_8] = 15887605087003157683;
        var_26 = 1;
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 19;i_17 += 1)
                {
                    {
                        var_27 = (max(var_27, 12890282770513114184));
                        arr_59 [i_16] [i_16] [i_16] [i_16] = 30452;
                        arr_60 [i_8 + 1] [i_8 + 1] [i_16] [i_8 + 1] = 1347;
                        var_28 = (min(var_28, 4294901747));
                        var_29 = (min(var_29, 1158249023));
                    }
                }
            }
        }
    }
    var_30 += 1;
    var_31 = 0;
    #pragma endscop
}
