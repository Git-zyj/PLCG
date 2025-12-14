/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = ((max(var_12, var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [10] [i_0] = (arr_2 [12]);
                    arr_11 [i_2] [i_1] = (min((((((min((arr_6 [i_0] [i_1 + 4]), (arr_8 [i_1] [i_0])))) ? (((-1 == (arr_0 [i_0] [9])))) : 23784))), (arr_6 [i_2] [i_0])));
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    var_19 = ((((min((arr_6 [i_1 + 2] [17]), (arr_6 [i_1 + 2] [i_1])))) ? (((((arr_7 [i_1 + 2] [i_3 - 3]) >= (arr_7 [i_1 + 4] [i_3 - 3]))))) : ((((((arr_4 [i_0]) ? (arr_8 [i_3] [i_0]) : 3544967342))) ? (((((arr_5 [i_0]) && (arr_7 [16] [i_1]))))) : (((arr_14 [i_1] [i_1] [19]) ? 4418317136689429508 : var_14))))));
                    var_20 -= (min(-18014398509481984, -11));
                    var_21 = (((((arr_5 [i_3 - 2]) && 251)) ? ((((((arr_2 [i_3]) && (arr_1 [i_1]))) && (!var_12)))) : (((((max((arr_2 [i_3 - 2]), 6291456))) && ((((arr_0 [i_0] [i_0]) ? (arr_12 [i_0] [i_1 + 4] [i_3]) : (arr_4 [i_3])))))))));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_17 [i_4] [i_1] = (arr_12 [i_4] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_22 *= (arr_12 [i_0] [i_0] [i_0]);
                                arr_23 [19] [19] [19] [i_4] [i_4] [19] [i_6 - 2] = (((arr_12 [i_1] [i_1 + 2] [i_1 + 2]) < (min((arr_6 [i_1] [i_4]), (arr_13 [i_4])))));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, ((((arr_5 [i_1 + 1]) ? (arr_21 [2] [i_0] [i_0] [i_0] [i_0]) : (arr_19 [i_1 + 4]))))));
                var_24 = (((((((arr_8 [i_0] [i_1]) ? 1891934174 : (arr_6 [i_0] [i_0]))) <= (arr_14 [i_0] [i_1] [i_0]))) ? (max(-1918829652, (arr_15 [i_0] [i_0] [i_1] [i_1]))) : 9390485606756569653));
                var_25 = (max(var_25, (arr_15 [i_1 + 4] [i_0] [i_0] [i_0])));
                arr_24 [i_0] [i_0] = ((!(((~(arr_20 [i_0] [16] [i_1 + 2] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
