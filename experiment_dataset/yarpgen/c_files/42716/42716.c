/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_7;
                arr_6 [i_1] [i_1] [i_1] = ((((((arr_4 [i_1 + 1] [i_0 + 2] [i_1]) >> (var_4 - 14)))) * (((4582693469622476207 + -4582693469622476207) >> ((((var_2 ? var_0 : 3534470233)) + 9150757804291130626))))));
            }
        }
    }
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                arr_20 [i_2] [i_3] = (((max((~var_7), (~9223372036854775807))) / (((-var_7 - (var_9 <= var_9))))));
                                arr_21 [i_3] [i_4 + 1] [i_5] = var_8;
                            }
                            var_12 = (((((!(arr_11 [i_3])))) / ((max(var_5, ((max((arr_14 [i_5] [i_4] [i_3] [i_2]), var_1))))))));
                            var_13 = -var_9;
                            var_14 = ((var_1 || (((2269814212194729984 ? (3998286025100763468 && 18446744073709551615) : -4582693469622476202)))));
                            arr_22 [i_3] = (max(6396415538413389865, -597129954));
                        }
                    }
                }
                var_15 *= (max((var_3 || var_7), (((arr_14 [i_3] [i_3] [i_2] [i_2]) >= var_5))));
            }
        }
    }
    var_16 = ((15157414259032981240 ? -3998286025100763472 : -145));
    #pragma endscop
}
