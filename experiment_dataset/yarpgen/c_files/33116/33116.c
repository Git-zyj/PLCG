/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_0 + 2] [i_4] [i_0 + 2] [i_0 + 2] [i_1] = ((-((~(arr_6 [i_1] [i_0 + 2] [i_0 - 2])))));
                                var_11 -= (min(var_10, var_8));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                arr_18 [i_1] [i_1] [i_1] = (-((((arr_14 [i_0 - 1] [3]) ? var_0 : 926739346))));
                                arr_19 [i_1] = (((((65535 / 3368227951) ? (var_0 - 4294967290) : (max(var_2, var_9)))) - var_7));
                                var_12 = (((arr_7 [i_0 + 2] [i_0 + 1]) ? (((arr_7 [i_0 + 2] [i_0 - 1]) / (arr_7 [i_0 - 2] [i_0 + 1]))) : ((min((arr_7 [i_0 + 1] [i_0 - 2]), var_10)))));
                            }

                            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                            {
                                var_13 = 1;
                                arr_22 [i_1] [i_0] [i_1] [i_1] [1] [i_3 - 1] [i_6] = var_1;
                                arr_23 [i_1] [i_1] [5] [1] [i_6] = -377381153;
                            }
                            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                            {
                                arr_27 [i_0 - 1] [i_1] = (((var_3 - var_4) == 8276967431652251354));
                                var_14 = ((((((-398003762405281025 ^ var_5) ? var_1 : (min((arr_4 [i_1] [i_2] [i_1]), var_7))))) && (((58987 ? 4294967290 : 3368227945)))));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                            {
                                arr_30 [i_0] [i_1] [i_0] [i_0] [i_0 + 1] [1] [i_0] = (-26862 && 7107588778771454619);
                                arr_31 [i_0] [i_0] [1] [i_0] [i_1] [i_0] = (arr_1 [i_3 + 2]);
                            }
                            for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                            {
                                var_15 -= (max(var_0, var_1));
                                arr_35 [1] [i_2] [i_1] [i_2] [i_2] = (((((!(~11239)))) << (arr_24 [i_0] [i_0 - 1] [i_1] [i_1] [i_3] [i_3] [17])));
                                arr_36 [i_0] [i_1] [i_1] [i_9] = (max(((((!(arr_8 [1] [i_2] [i_1] [i_0]))))), ((((min(var_10, (arr_20 [i_0] [i_1] [14] [i_2] [15] [i_1] [i_0])))) ? var_9 : var_9))));
                                arr_37 [i_0] [i_1] [i_1] [i_1] [i_9] = var_6;
                            }
                            var_16 ^= (!4294967286);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] = (max((!var_0), (max(38938, ((1 ? 3368227970 : 1))))));
                            var_17 &= 2852311077886639375;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            {
                var_18 = var_10;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_19 = (max((((2111062325329920 ? -1950064711 : var_5))), 4294967281));
                            var_20 ^= var_2;
                            arr_55 [16] [6] [i_14] = 1950064710;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 4; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 15;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            {
                                var_21 = (min((max(var_0, var_2)), -1));
                                var_22 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
