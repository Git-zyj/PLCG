/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((-((575210732 ? -1 : 3719756574)))), ((max((min(var_8, var_11)), 30932)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 = (((!6) ? (min(562987093, 575210702)) : 511));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2 + 2] = var_13;
                    var_18 = ((16 ? 145 : -1735748218));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_19 = ((~(((arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 + 2]) ? (!106060731) : 1721590773))));
                        var_20 = (max((((arr_7 [i_2 - 1] [i_2 + 1]) ? 248 : (arr_7 [i_2 - 1] [i_2 + 3]))), 234));
                        var_21 = (max((max((((-6658 ? 122 : 6657))), (max(145, 575210737)))), (arr_0 [i_0 + 1] [i_1 + 2])));
                        var_22 = (!-31298);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_1 - 2] [i_2] [i_1] [i_1 - 2] [i_1] = ((18446744073709551615 ? 341610549 : -1646890537));
                        var_23 *= ((((var_2 ? 115 : 3719756564)) <= 3953356756));
                    }
                }
            }
        }
        var_24 ^= ((~(max((max(-30932, var_3)), 3248950614))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_18 [i_5] = (arr_16 [i_5]);
        var_25 = (max(var_25, var_3));
        var_26 = ((!(arr_14 [i_5])));
    }
    var_27 = var_10;
    var_28 = ((var_7 ? (~var_12) : ((var_14 ? (200 * 129) : var_11))));
    var_29 = var_5;
    #pragma endscop
}
