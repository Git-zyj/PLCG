/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 33;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0 - 1] |= ((13204691006509947573 == (((~(((arr_4 [i_1]) ? 8474210183161640948 : 170)))))));
                var_17 = max(((1916214051 ? 1916214054 : 1916214054)), var_11);

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((-((var_5 ? (arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_10 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
                                arr_17 [i_3] [i_3] [i_2] [i_2] [i_4] = ((((1916214054 != (((((arr_5 [i_0]) > (arr_12 [i_0] [i_0] [i_0] [i_0]))))))) ? (min((arr_3 [i_0 + 1] [i_0 + 1] [i_2]), (arr_1 [i_0 - 1]))) : 5109503943775885358));
                                arr_18 [i_0] [i_1] [i_0] [i_4] [i_0] = var_12;
                            }
                        }
                    }
                    var_18 *= ((~(((((~(arr_15 [i_0] [i_1] [i_1])))) ? 1889804345 : (((var_13 ? 28 : 11720)))))));

                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        var_19 = var_2;
                        var_20 = var_4;
                    }
                    var_21 = 2388498778;
                }
            }
        }
    }
    #pragma endscop
}
