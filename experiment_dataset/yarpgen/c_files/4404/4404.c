/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((0 > (min(var_2, (((var_3 > (arr_1 [11]))))))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_16 += ((!((max((max((arr_1 [i_0]), (arr_4 [9] [4]))), (!182))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_17 = (((((~(arr_6 [i_1 - 1] [i_3] [i_4])) >= (min((arr_9 [i_0]), (arr_6 [i_1] [i_3] [i_4])))))));
                            var_18 *= (((((arr_13 [16] [i_1 - 1] [i_2] [16] [i_1]) || var_8)) ? (1605316394 && -61) : var_1));
                            var_19 = (((arr_11 [i_0] [i_2] [4] [i_3]) ^ (arr_7 [i_0] [i_0] [i_3] [i_3])));
                        }
                    }
                }
            }
            arr_14 [i_1] [i_1] [i_0] = (~((-(max((arr_3 [1] [3]), var_4)))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_20 -= ((!(~1605316394)));
            var_21 = (min(((~((~(arr_3 [12] [13]))))), (!186)));
            arr_18 [i_0] [i_5] = (((arr_7 [i_5] [16] [i_0] [4]) % (min(182, var_10))));
            var_22 = 182;
            var_23 = (min(var_23, (((~(max(((73 ? (arr_8 [14] [i_5] [i_0] [i_0]) : 1)), (!-21))))))));
        }
        var_24 = (min(var_24, 94));
    }
    #pragma endscop
}
