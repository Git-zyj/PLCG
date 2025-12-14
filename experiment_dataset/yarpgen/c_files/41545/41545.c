/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [15] = var_5;

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_3] [i_1] = ((-((~((max(-9679, 56)))))));
                        var_18 = (18446744073709551615 && ((max((min((arr_2 [i_0] [i_1]), var_6)), (arr_8 [17] [17] [i_1 - 1] [i_3 - 4])))));
                        var_19 = ((((((!((max(-6465554806402474436, 56))))))) == ((var_4 ? var_12 : (arr_4 [i_3 + 1] [i_3 - 2])))));
                        var_20 -= ((1455495977 ? ((-(64599532 || var_6))) : (((7 != 9675860462144913056) << (16693 - 16690)))));
                        var_21 -= ((!(var_2 | 0)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_13 [i_0] = (!var_5);
                        arr_14 [i_0] [i_2] [i_4] = (((arr_12 [i_4] [i_4] [i_4] [i_4]) ? (arr_8 [i_4] [i_4] [i_4] [i_4]) : 1));
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_3));
    #pragma endscop
}
