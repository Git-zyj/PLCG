/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [i_2] [i_0] = ((~((((!87) < 4011621921)))));
                    var_20 = 673758065;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = (((((~4011621947) && 20859)) && ((max(1117527776, (min(202, 283345342)))))));
                    arr_12 [9] [i_1 + 4] [i_1] [i_1] = max(14336, 8176);
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    arr_16 [i_0] [18] [i_0] [i_0] = 17492;
                    var_21 = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_22 |= (~108);
                                arr_25 [i_0] [i_1] [i_4] [i_5 + 1] [i_6] = (var_12 & 2492359061);
                                arr_26 [i_0] [i_1 + 3] [22] [i_1 + 3] [i_6] = 4294959096;
                                arr_27 [i_0 - 1] = ((!(974792830 * 5)));
                            }
                        }
                    }
                }
                var_23 = 2913720199;
                var_24 = (min(var_24, (!-7466496405729835439)));
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
