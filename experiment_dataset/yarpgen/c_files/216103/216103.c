/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 *= 28880;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_20 = 2688758747;
                        arr_13 [i_3] [i_2] [i_3] [i_1] [i_0] [i_1] = var_9;
                        arr_14 [i_2] [i_1] [i_2] [i_1] [i_3] [i_1] = var_14;
                        arr_15 [i_1] [i_0] [i_2] = (((max((arr_4 [i_1] [12]), (arr_4 [i_1] [i_1]))) - -var_15));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_21 = (((((54586 == ((3679097181 >> (65527 - 65496)))))) | var_5));
                        var_22 = (min(var_22, ((+(((arr_1 [i_4 - 2]) + ((((6680 >= (arr_11 [3] [i_1])))))))))));
                        var_23 = (max(var_23, (((~((4 - (arr_12 [i_4] [i_4] [i_4 + 1] [i_0]))))))));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_24 = ((14448 & (((((615870117 ? 18876 : 18876)) != ((min(28672, 7925))))))));
                        var_25 = (max(var_25, (((9223372036854775798 ? ((var_12 ? (arr_1 [i_1]) : (arr_12 [i_0] [i_5] [i_5] [i_0]))) : (((((0 ? var_4 : (arr_10 [i_0] [i_0] [i_2]))) - ((54586 - (arr_16 [i_2] [i_2] [i_0])))))))))));
                        var_26 = ((((max((!615870106), (min(-54, var_17))))) ? 8463492468014777613 : (arr_3 [i_5])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
