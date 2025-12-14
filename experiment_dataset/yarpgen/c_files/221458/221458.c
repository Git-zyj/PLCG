/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(((((-9223372036854775807 - 1) / (-32767 - 1)))), (max(var_15, 9398684781028121769)))) ^ (((~(var_15 < 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_21 = ((-((var_15 / (arr_4 [20] [i_1])))));
                    arr_7 [i_2] = (-(var_15 <= var_14));
                    var_22 = (((((var_19 > (arr_3 [3] [i_1] [i_1])))) >= (var_19 || var_11)));
                    var_23 ^= (((~19162) ? ((~(arr_0 [i_1]))) : ((27502 ? 64440 : var_9))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_24 += ((~(!26)));
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((var_19 ? 3540 : 0)) < ((((arr_1 [i_0]) <= var_7)))));
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_25 ^= ((((7474997041837615598 ? ((max(1, 1))) : ((min(var_1, 6734))))) * (max(-0, (((!(arr_6 [i_4]))))))));
                            var_26 = ((+(min((((-2147483647 - 1) ? var_17 : (arr_14 [i_0] [i_4] [i_1] [i_5]))), ((~(arr_14 [i_0] [i_4] [i_0] [i_0])))))));
                            arr_15 [i_0] [i_1] [i_0] [i_4] = ((-(--59)));
                        }
                    }
                }
            }
        }
    }
    var_27 = ((~(min(var_9, (~var_3)))));
    var_28 = (min((((var_15 / var_6) ? (1091062232 / var_7) : (min(var_10, 8471484399074370147)))), ((((((0 ? var_12 : var_15))) ? (-1091062229 / var_7) : (((var_15 + 2147483647) << (var_1 - 90))))))));
    #pragma endscop
}
