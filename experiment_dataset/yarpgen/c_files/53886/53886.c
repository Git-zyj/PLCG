/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (32767 | 1)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_19 = (min((-32767 - 1), 888952868));
        var_20 = (-32767 ^ 0);
        var_21 = (-1 * 10);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 &= ((2437485985372318646 ? (arr_4 [i_1]) : 12));
                        var_23 |= min((12 >= 1688050885), (-2147483647 - 1));
                        var_24 = (((min(-10, 0))) || 10);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_25 &= (((18150012387845219611 < -958129260) ? -201171240 : (-958129292 + 3674278578)));
            arr_13 [6] &= (-32767 - 1);
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_26 = var_13;
                        arr_27 [i_6] |= ((-30441 ? -958129240 : -1812777432));
                        arr_28 [i_8] = ((((max(0, 44))) ? -32767 : ((243 ? 1 : 14454))));
                    }
                }
            }
        }
        var_27 = (arr_12 [i_5] [i_5] [i_5]);
    }
    var_28 -= 10;
    #pragma endscop
}
