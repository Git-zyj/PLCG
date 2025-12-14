/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((0 - ((max(var_16, 0)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (arr_6 [i_0] [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = ((186 ? (((((arr_10 [i_0] [i_3] [i_4]) == -42)))) : (max(1179265631, 17072833716526142053))));
                                var_21 = (max(((min((arr_11 [6] [i_2] [i_3 - 2] [i_4 + 3] [i_4 - 1] [i_4]), (min((arr_6 [i_4] [i_2] [i_1] [i_0]), var_16))))), (((arr_0 [i_2] [i_4]) ? var_12 : ((max((arr_11 [17] [i_1] [i_1] [i_3 - 2] [i_4] [i_4 - 1]), -269496810)))))));
                                var_22 = (min(var_10, ((-((max(var_11, 1)))))));
                                arr_15 [i_3] [i_3] [i_3] = (arr_7 [i_3] [i_4]);
                                arr_16 [i_0] [i_3] = (max(((min(65011712, (arr_6 [3] [i_3 - 3] [i_4] [i_3 - 2])))), (max(739946651, 4194303))));
                            }
                        }
                    }
                    var_23 = (min(var_23, ((max(((((((arr_0 [8] [i_1]) ? 0 : var_6)) != (~1)))), 1)))));
                    var_24 = ((((((arr_2 [i_0] [i_1]) ? 32758 : (arr_2 [i_0] [i_1])))) >= (~var_0)));
                    var_25 += arr_6 [i_0] [i_0] [i_1] [i_0];
                }
            }
        }
        var_26 *= (max((max(24, (max(var_14, var_1)))), ((max(14, (!75))))));
    }
    var_27 *= ((((min((16376 * 101), var_2))) ? var_0 : 43));
    var_28 = (min((((var_0 ? ((var_10 ? -14 : var_6)) : var_11))), (((((min(-28, var_5)))) / (max(var_10, var_3))))));
    #pragma endscop
}
