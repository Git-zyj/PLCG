/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [15] = (((max((arr_1 [i_0] [i_0]), (max(3153483080, var_9))))) && (~1141484227));
        var_14 = (var_10 % (((((-45 ? var_11 : -66))) ? 7735989466643002981 : (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 -= (max((arr_5 [i_1]), -32266));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_2] = 8527775980049936550;
            arr_11 [i_1] [i_1] [i_2] = -668421908;
            var_16 = (((((var_3 ? 65535 : 87563355562761421))) * ((var_4 ? (arr_8 [i_1] [i_1] [i_2]) : 3153483082))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_17 = ((-var_4 ? 252218054659684675 : 2066865711484581984));
                var_18 = (((((arr_4 [i_1]) | (arr_16 [i_4] [i_1] [i_1]))) + 1));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_25 [i_1] [i_3] [i_3] [i_3] = (var_7 ? (var_1 - 8908444972043872682) : 92);
                            arr_26 [i_1] [i_6] [i_1] [i_5 - 1] = min(((((max(3153483074, 3153483083)) ^ 1141484212))), (3153483074 + var_0));
                            arr_27 [i_1] [i_1] [i_4] [i_5] [i_6] [i_1] = ((((arr_5 [i_6]) ? (arr_15 [i_5 - 1] [i_1] [i_4] [i_5 - 1]) : (arr_21 [i_1] [i_3] [i_1] [i_1] [i_1] [i_3]))));
                            var_19 = ((!((17026387671305791089 > (17084 == 3153483080)))));
                            var_20 = (min(var_20, (16672208437815107790 * var_0)));
                        }
                    }
                }
                var_21 -= (max(((((arr_5 [i_1]) >> 0))), 2161896515));
            }
            /* vectorizable */
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((arr_15 [i_7 - 2] [16] [16] [i_7 - 1]) - (arr_4 [i_7 - 2]))))));
                            arr_34 [i_1] [i_3] [i_7] [i_8] [i_1] = (((var_9 ? var_6 : 7599749776338519754)));
                            var_23 = (max(var_23, (105 & -68)));
                            var_24 = (max(var_24, (((2823481083 % (((arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [1]) ? var_8 : var_6)))))));
                        }
                    }
                }
                arr_35 [i_1] [i_1] [i_1] [i_1] = (0 ^ var_5);
            }
            var_25 &= ((!(-12026 != 1)));
            var_26 = (max(var_26, ((((max(var_11, ((1420356402403760521 ? 8442339862064228793 : (arr_18 [i_3] [6] [i_3] [i_3]))))) & (((~(min(0, 1281480173))))))))));

            /* vectorizable */
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                arr_40 [i_1] [i_1] = ((((2133070763 ? 0 : -1089047613)) | (1281480172 <= 7527)));
                arr_41 [i_1] [i_3] [i_1] [i_1] = -4294967283;
                var_27 ^= (arr_23 [i_1] [i_3] [14] [i_10 - 3]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_28 = var_12;
                            arr_47 [i_1] [1] [i_1] [i_1] [i_1] = ((arr_29 [i_1]) <= -2);
                            var_29 = (49 == 1944720708);
                        }
                    }
                }
            }
        }
        var_30 = var_11;
    }
    var_31 = ((((((min(-9223372036854775794, var_6)) + 32762))) && (((var_11 / ((127 ? 5112124126465391498 : 169)))))));
    var_32 = (min(var_32, ((-((-(!66)))))));
    #pragma endscop
}
