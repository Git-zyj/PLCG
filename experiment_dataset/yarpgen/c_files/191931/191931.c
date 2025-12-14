/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 894430127;
    var_11 = (max(var_11, (223 <= 29)));
    var_12 -= 224;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = (arr_0 [i_0 - 1]);
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 &= (arr_7 [i_0 + 3]);
                    var_15 = (max(var_15, ((((((((arr_7 [i_1]) - (arr_6 [i_0] [i_1] [8]))) % 44)) | (39 >= 1013798651))))));
                }
            }
        }
        arr_9 [i_0] = (min((!869051043), (max((((var_2 == (arr_4 [i_0])))), (((arr_8 [i_0] [i_0] [i_0 + 2]) ^ (arr_7 [i_0])))))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_16 = ((562949945032704 / (arr_11 [i_3] [i_3 + 2])));
        var_17 = (min(var_17, (~88728396)));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] [i_4 + 1] = (arr_16 [0] [i_4 - 1]);
        var_18 = (max(((((arr_13 [i_4 - 1]) < 18446181123764518912))), (((arr_13 [i_4 + 1]) - (arr_13 [i_4 - 1])))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_19 = (min(var_19, var_4));
                                arr_30 [i_4] [i_5] [i_5 - 1] [i_5 + 1] [i_6] [i_7 + 2] [i_4] = ((!(5797 % 3281168657)));
                            }
                        }
                    }
                    var_20 = 17857403256731845934;
                }
            }
        }
        arr_31 [i_4 - 1] = ((~(arr_28 [4] [i_4])));

        for (int i_9 = 4; i_9 < 12;i_9 += 1)
        {
            var_21 ^= (max(((589340816977705692 ? -78 : 16029300143714883265)), (min((max(var_4, (arr_22 [12] [8] [i_9]))), (arr_26 [i_9 - 3])))));
            arr_35 [0] &= (((-96 || -107) ? 127 : -25376));
            var_22 |= (arr_16 [0] [i_4 - 1]);
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_23 = ((-(arr_27 [i_12] [i_11] [8] [i_9 + 1])));
                            arr_44 [10] [i_12 + 1] [i_11] [i_10 - 1] [i_9] [10] |= (((((arr_28 [4] [i_10]) ? (((-383690667 + 2147483647) >> 1)) : (arr_32 [13]))) - (140179319 / 2635)));
                        }
                    }
                }
            }
            arr_45 [i_9] = ((((arr_26 [i_4 + 1]) & (arr_33 [i_4 + 1] [i_4 + 1]))) * (!2630));
        }
        /* vectorizable */
        for (int i_13 = 4; i_13 < 13;i_13 += 1)
        {
            var_24 ^= (((arr_29 [i_4 - 1] [0] [i_13 - 2] [i_4 - 1] [i_4 - 1]) % (arr_29 [i_13 - 3] [i_4 + 1] [i_4 + 1] [i_13 - 4] [i_13])));
            var_25 = (min(var_25, (((13344092453388209427 ^ 17857403256731845930) + (arr_34 [i_4 - 1] [i_4 - 1] [i_13])))));
            var_26 = (min(var_26, (((var_1 ^ (arr_37 [i_4 - 1] [i_13 - 2] [0] [0]))))));
            var_27 *= (((arr_43 [i_4] [i_4 + 1] [i_4 + 1] [i_13] [i_4]) ? (arr_43 [i_4 + 1] [0] [i_4 + 1] [i_13] [2]) : (arr_43 [i_4] [i_4] [i_4] [i_13] [8])));
        }
    }
    #pragma endscop
}
