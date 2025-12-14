/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((1 ? (248855723528843072 ^ 18446744073709551615) : var_7)) + ((((var_10 == var_2) ? var_0 : -4057631126)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (-var_2 - var_12);
                arr_5 [i_0] [i_0] = (((~((1992247293 >> (236 - 235))))));
                arr_6 [i_0] = ((((max((~var_7), (var_16 ^ 18446744073709551615)))) ? (18197888350180708525 - 8897) : (1018262296292238308 && 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [19] [i_0] [i_0] [i_1 - 1] [i_2] [i_3 - 1] = ((1 ? var_1 : ((-9223372036854775781 ? 0 : ((248855723528843071 ? -8904581062499218361 : 16384))))));
                            arr_15 [i_0] [i_0] [12] [12] = (~var_9);
                            arr_16 [i_0] [i_0] = var_11;
                            var_19 = (((var_2 ? 1 : var_7)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    arr_20 [i_0] [1] [i_0] = 18197888350180708525;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 = (((var_6 ^ -1) ? -32749 : var_4));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [19] = 2282599989;
                                arr_28 [i_0] [i_0] [i_1] [i_4] [i_4] [i_6] = ((((255 ? var_15 : 9))) || (((200522169 ? var_5 : var_1))));
                                var_21 = (((!56638) | (var_15 == 4294967295)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
