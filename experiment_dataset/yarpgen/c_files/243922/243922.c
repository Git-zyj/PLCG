/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_6));

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_15 -= (max((max(7, var_9)), ((max(var_0, 16)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((max(-1, (max(-1317182637, var_6)))))));
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_3] [9] [i_4] [i_0] = ((!(!96)));
                                var_17 = (max(var_17, (min(var_10, (var_7 + 1)))));
                                arr_15 [i_0] = (min((!0), 1));
                            }
                        }
                    }
                }
                var_18 ^= -1697322587;

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] = 753310280;
                    var_19 = (((~-1604279820) != ((~(~var_6)))));
                    var_20 = (-96 || -1883873111);
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    arr_24 [i_0] [i_0] [i_6] = (~1);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_21 = 1;
                                arr_30 [i_0] [i_0] = 6;
                                arr_31 [i_0] [i_1] [i_6 + 1] [i_7] [i_8] = (2330613455 > 119);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
