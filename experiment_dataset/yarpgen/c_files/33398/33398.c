/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((min((!65535), (255 > -1457753104)))) >> (((((-2115752128 ? -5947224640570586996 : -65526))) + 5947224640570587012))));
    var_18 -= ((((-5947224640570587025 ? 2047 : (max(0, 7285185909613469432)))) + (((-(max(var_7, 12)))))));
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (arr_0 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 = ((((arr_7 [i_3 + 1] [i_2] [8] [i_0]) ? 0 : 4294967286)) | 0);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_22 = ((((0 & (arr_0 [i_1])))) ? (~1) : ((-(arr_9 [i_0] [i_3] [i_0] [i_0] [i_0]))));
                                var_23 = (~0);
                                var_24 = 2906033467;
                            }
                            var_25 = ((((((~4) ? (max(906158655, 21655)) : (!2730110722)))) ? 9 : (15 ^ -87)));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_6;
    #pragma endscop
}
