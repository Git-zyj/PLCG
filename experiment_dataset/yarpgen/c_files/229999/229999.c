/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = var_5;
                    arr_9 [i_0] [i_1] [i_2] = (min((((!(arr_5 [i_0] [i_1] [i_2])))), 2040));
                    arr_10 [i_0] [i_0] [i_0] [i_2] |= (min((((min(2040, 3265998324256802960)) >> 0)), (((!((min(3265998324256802944, 58426))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 |= max(63495, (((!(~3265998324256802960)))));
                                var_16 -= ((((!((min(var_7, 743329023))))) || -var_12));
                                var_17 -= (min((((!(((3265998324256802960 * (arr_4 [19] [i_2] [i_3]))))))), ((32113 ? ((((arr_13 [i_0] [21] [i_0]) <= var_6))) : (63471 << 0)))));
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] [i_0] = (min(118, -119));
                                arr_16 [i_1] [i_1] [i_1] [i_3] = -126;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((min(var_12, ((15424702487946659948 ? var_13 : -101))))) ? (((15424702487946659964 == (-9223372036854775807 - 1)))) : var_12));
    #pragma endscop
}
