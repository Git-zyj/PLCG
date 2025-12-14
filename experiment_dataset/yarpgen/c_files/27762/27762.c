/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] = ((12937 | (((9223372036854775807 >= 9223372036854775807) * (!39246)))));
                            var_19 = (25443 | 1);
                            arr_11 [i_0] [i_1] [i_0] [i_2] [i_3] = (!25443);
                        }
                    }
                }
                var_20 = 32767;
                arr_12 [i_0] = (max(((((~var_16) <= var_0))), -25444));
            }
        }
    }
    var_21 = (min(var_21, (255 != 25444)));
    var_22 = (min(var_22, ((max(5008782009585564784, 3670299304577828222)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_23 = var_16;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 = ((!((((((-32767 - 1) ? 4 : -30729)) ^ (!3670299304577828222))))));
                                var_25 = var_5;
                                arr_23 [i_4] [i_5] [i_4] [10] [i_4] [12] [1] = ((var_7 ? var_14 : (((!(!6096898673606320049))))));
                            }
                        }
                    }
                }
                var_26 = (max(var_26, ((min(var_12, 75)))));
            }
        }
    }
    var_27 = ((2772875825368443607 >> (!var_9)));
    #pragma endscop
}
