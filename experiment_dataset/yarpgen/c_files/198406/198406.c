/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= max((((!(((var_12 ? -1936558959472422971 : var_15)))))), ((((min(var_15, 992))) ? ((min(var_11, var_14))) : (!var_7))));
    var_21 = (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                var_22 = (max(var_22, (((239 ? 1787659135 : 15)))));
                                arr_12 [i_4] [i_3] [i_2] = arr_4 [i_1] [i_2] [i_3] [3];
                            }
                            arr_13 [i_3] [i_2] [i_1] [8] [i_0] |= ((((!(arr_2 [i_1 - 4] [i_1 + 1]))) ? (max(((((arr_0 [i_1]) > var_10))), (((arr_8 [i_0] [i_1] [i_2] [i_2] [i_1]) ? -996 : var_12)))) : 5));
                        }
                    }
                }
                var_23 = (min(var_23, (((var_12 >> (((max((arr_3 [i_1 - 3] [i_1] [i_0]), var_3)) - 1077816230)))))));
            }
        }
    }
    #pragma endscop
}
