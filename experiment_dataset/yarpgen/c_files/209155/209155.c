/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [19] = ((max((arr_5 [19] [i_1 + 2]), var_12)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_13 [i_0] [i_3] [i_3] = (162 < var_3);
                        var_14 = ((28559 ? (!504) : -272237906));
                        var_15 -= -114;
                        var_16 = 285045225;
                    }
                    var_17 = ((((min(65512, -32749))) ? (!var_4) : (arr_1 [i_0])));
                    arr_14 [i_0] [i_0] [i_2] = ((var_7 ? (((arr_5 [i_1 - 3] [18]) ^ -13)) : 51931));
                }
                arr_15 [6] = var_8;
            }
        }
    }
    var_18 = 29;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_19 = (-5962045342777824466 & 808101918);
                var_20 = (arr_8 [i_4] [i_5] [i_5] [i_4]);
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
