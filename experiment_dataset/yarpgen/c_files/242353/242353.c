/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((var_2 ? ((((arr_6 [i_1] [19]) ? (arr_7 [0] [i_1] [20]) : (arr_3 [i_0] [i_0] [i_2])))) : (!var_9)));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((!(arr_3 [i_0] [i_1] [i_2])))));
                    arr_9 [i_2] [i_2] = (min((min((arr_6 [i_2] [i_1]), -462347851803203332)), (((~(arr_1 [i_1]))))));
                }
            }
        }
    }
    var_18 = 18446744073709551615;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_19 = 3492834039;
                            arr_23 [i_3] [i_3] [i_3] = (((arr_13 [i_5]) ? ((+(((arr_21 [i_3] [i_4] [i_5] [i_3]) ? 0 : var_5)))) : var_14));
                            arr_24 [i_3] [i_4] [i_4] [i_3] = (((((min((arr_12 [i_3] [i_3]), var_4)))) < (arr_15 [i_4])));
                            arr_25 [i_3] [i_5] = ((+((((arr_6 [i_4] [i_4 + 2]) >= (arr_6 [i_3] [i_4 - 1]))))));
                        }
                    }
                }
                arr_26 [i_3] = ((~(((arr_16 [i_4 + 3]) ? ((0 ? 18446744073709551615 : 3659160340774547495)) : (arr_22 [1] [i_3] [i_4] [i_4 + 3] [i_4])))));
                arr_27 [i_3] = ((~((~(arr_22 [2] [i_3] [i_4 - 1] [i_3] [16])))));
                var_20 ^= ((((min(4294967273, ((((arr_3 [i_4] [i_4] [i_4]) || var_5)))))) ? (((((((arr_14 [i_4]) % (arr_11 [1])))) != -var_16))) : 110));
            }
        }
    }
    #pragma endscop
}
