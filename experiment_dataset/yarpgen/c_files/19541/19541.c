/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((((var_4 * 141315095) ? (min(var_3, var_1)) : (var_4 != var_13)))) ? (var_5 < 762063514) : var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((min((((arr_7 [i_0] [i_1] [i_2]) + (arr_2 [i_2] [i_1]))), -var_2)))));
                    var_16 += 6102;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [7] [7] [i_1] [i_0] [2] [i_4 + 1] = ((-6080 ? 18446744073709551615 : 64));
                                var_17 = (arr_8 [i_0] [9] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = 93;
                            }
                        }
                    }
                    var_18 = ((arr_1 [i_0]) ? (((var_3 || (arr_5 [9] [i_1] [i_0])))) : ((((!var_13) || (((var_7 - (arr_6 [i_0]))))))));
                }
            }
        }
    }
    var_19 = ((((max(var_6, (-153168936 / var_7)))) - var_9));
    #pragma endscop
}
