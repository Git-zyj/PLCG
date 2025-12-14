/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_12 = min(((max(var_1, (arr_3 [i_1 + 1] [i_0 - 2])))), (((arr_5 [i_1]) ^ (arr_5 [i_0 + 1]))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_13 -= (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (7520729199938693325 - 7520729199938693321)));
                    var_14 = (arr_2 [i_1 + 1]);
                    var_15 = 47;
                    var_16 = (min((arr_5 [i_1 + 1]), (62 / -var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_2));
                                arr_14 [i_3] [i_3] [i_2] [i_1] [i_3] = var_4;
                            }
                        }
                    }
                }
                var_18 = (max(var_18, (((-(((arr_4 [1] [1] [i_1]) ? (arr_0 [i_1 + 1] [i_0 - 1]) : (87 > 79))))))));
                var_19 -= var_7;
            }
        }
    }
    #pragma endscop
}
