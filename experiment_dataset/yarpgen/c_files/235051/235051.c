/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] = (((arr_7 [11]) ? (arr_0 [i_2]) : (((!(((-27 ? 32767 : 2147483647))))))));
                                var_18 = var_13;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_17 [i_6] = (max(20020, 1279351298));
                            arr_18 [i_6] [i_6] [i_6] [i_6] = ((((-((29 ? (arr_13 [i_5] [i_1] [2] [i_6]) : -2147483643)))) / -var_10));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_19 = ((((0 - 21207) ? -27 : 0)));
                            arr_33 [i_7] [i_8 - 1] [i_9] [i_10] &= (~1264173233);
                            var_20 &= (min(((1 ? 1 : -1)), -60));
                        }
                    }
                }
                var_21 = (((((-0 ? (~-1570254599) : ((115 ? var_5 : (arr_30 [i_7] [i_7] [i_7] [i_7] [6])))))) ? ((((max(1871292839897292283, -1821822451))) ? 1264173228 : ((var_13 ? 1264173235 : 1)))) : ((-(((arr_24 [i_7] [i_8] [i_8]) ^ (arr_29 [i_7] [i_7] [i_8] [i_8])))))));
                var_22 = (((((((var_2 ? var_16 : (arr_29 [i_8] [i_8 - 2] [i_7] [19])))) || ((((arr_20 [i_7] [10]) ? (arr_23 [16] [i_8] [16]) : 1))))) ? (max((min(1982596316184847472, -35)), var_8)) : (((~(var_10 & 2517035848))))));
                arr_34 [11] [i_7] = (!(arr_32 [1] [i_8] [4] [i_7]));
                arr_35 [i_8] [i_7] = (((((8 <= (arr_22 [i_7])))) / (max(-1264173236, ((-13 ? -395061554 : 1))))));
            }
        }
    }
    #pragma endscop
}
