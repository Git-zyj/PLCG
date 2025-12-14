/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-((max(-5479, var_12)))))) | var_7));
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max((arr_4 [i_0] [i_0] [i_0]), (1697072859818637243 != -var_10)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = (max((((arr_3 [i_0 + 2] [i_0 - 1]) ? var_3 : 1876802191)), (min((arr_4 [i_2] [i_0] [i_2]), (arr_3 [i_2] [i_0 + 1])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_20 = ((237 ? (arr_8 [i_0 + 1] [i_0] [i_0] [i_0]) : 1592521273459151122));
                        var_21 = (max(var_21, (!120)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 |= (((17306871516463877288 << (var_10 - 1113145732463165079))));
                        arr_15 [i_0] = 2418530001521852712;
                        arr_16 [i_1] [i_0] = (var_15 - 0);
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        var_23 = 34355544064;
                        arr_19 [i_0 + 1] [i_1] [2] [2] |= arr_17 [4] [i_0 + 2] [i_2];
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            {
                arr_26 [i_7 + 1] = ((-(max(var_10, (arr_18 [i_7] [0] [i_7 + 1] [i_7 - 2])))));
                arr_27 [i_6] [i_6] = ((((max((max((arr_24 [i_6] [i_7] [i_7]), var_10)), (((25629 ? 0 : 0)))))) ? var_3 : var_15));
            }
        }
    }
    var_24 = (0 ^ var_13);
    #pragma endscop
}
