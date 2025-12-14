/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (arr_5 [i_1 - 1] [i_1 + 1]);
                arr_7 [i_0] [i_1 - 1] &= 7418171104195759846;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_0] [i_1 + 1] [i_2] = (((min(65280, ((75 << (var_0 - 125))))) ^ ((~(arr_2 [i_1 + 2])))));
                    var_15 -= 64;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_16 = var_1;
                    arr_14 [i_0] = -1571858316;
                    var_17 += ((!(((((-1571858316 && (arr_4 [i_0]))) ? ((((arr_4 [i_1 + 1]) && 89))) : var_0)))));
                }
            }
        }
    }
    var_18 = -var_2;

    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        var_19 = 1571858316;
                        var_20 = (max((((!-16384) % (((arr_18 [i_4 + 1]) ? (arr_19 [i_4 - 2] [i_4 - 2]) : (arr_24 [i_4 - 2] [i_5] [i_6 + 1]))))), var_10));
                        var_21 += (arr_4 [i_4]);
                        var_22 = (max(var_22, -90));
                    }
                }
            }
        }
        var_23 = (((arr_1 [i_4 - 1] [i_4 - 2]) ? var_4 : (((~(arr_12 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 1]))))));
        var_24 ^= var_0;

        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        arr_35 [i_4 - 1] [i_4 - 1] [i_9] [i_8] = ((-(((arr_21 [i_9]) ? -5419131679950132310 : (arr_30 [i_4 - 2] [i_4 - 2] [i_4 + 1])))));
                        var_25 |= (min(84, ((~(arr_29 [i_8 - 1] [i_4 + 1] [i_8 - 1] [i_8 - 1])))));
                    }
                }
            }
            arr_36 [i_4] &= (arr_13 [i_8 - 1] [i_8 - 1] [i_8 - 1]);
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
        {
            arr_40 [i_4 + 1] = -89;
            var_26 = ((var_7 ? var_4 : (var_1 | -90)));
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_27 = (((1981781732 / -var_4) * -276959974));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            var_28 = (1845797810960161710 + 2354467727);
                            arr_53 [i_4 - 1] [i_4 - 1] [i_12 - 1] [i_12 - 1] [i_14] [i_14] [i_15] = (max(((~(arr_50 [i_4 - 2] [i_12 - 1] [i_13 + 1] [i_14] [i_15]))), (arr_48 [i_4 - 1] [i_12 - 1] [i_12 - 1] [i_14])));
                            var_29 = var_0;
                            var_30 *= (min((((1 && var_10) && (arr_37 [i_14] [i_12 - 1]))), (max((arr_19 [i_4] [i_15]), (!var_4)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
