/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_13 -= (arr_7 [15] [15]);

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_14 = (((((~(arr_8 [i_3] [i_3] [i_3] [i_3] [6] [i_3])))) ? ((((!((!(arr_8 [i_3] [i_1] [i_3] [12] [i_1] [i_3]))))))) : 0));
                            arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((arr_6 [i_0]) ? ((((((~(arr_6 [i_0])))) ? (arr_5 [i_1 + 3] [i_2 + 1] [i_4 + 3]) : (~var_11)))) : var_0);
                            arr_14 [i_3] [2] [i_1] = var_9;
                            var_15 = 0;
                            arr_15 [i_3] [i_2] [i_2] [i_3] [10] [4] = (((arr_11 [i_4 - 1] [i_4 + 3] [i_4] [i_4 + 3] [i_4 + 3]) / (arr_6 [i_0])));
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            var_16 += (max(((((min((arr_9 [i_0] [i_1] [i_0] [i_3]), (arr_8 [i_1] [i_1] [i_1] [i_3] [i_5 - 1] [i_5]))) < (((65535 ? 0 : (-127 - 1))))))), ((var_1 ? 0 : (arr_3 [18] [11])))));
                            var_17 = (min(var_17, 4294967276));
                        }
                        var_18 = (max((((((arr_16 [i_1] [i_1] [15] [17] [i_3] [i_0] [i_2 - 3]) ? (arr_7 [i_0] [15]) : 175)) * ((25 ? (arr_16 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2] [14]) : var_4)))), ((((((min((arr_6 [i_0]), (arr_6 [i_0]))))) == (min((arr_8 [i_3] [i_1 - 1] [i_2 + 2] [i_3] [i_1] [i_3]), (arr_1 [i_0] [i_0]))))))));
                    }
                    var_19 = (min(var_19, (((((arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_2 - 1] [i_2] [i_2]) | (arr_19 [i_0] [i_1 - 1] [i_2] [i_2 + 1] [i_2 - 1] [1] [i_2])))))));
                    var_20 = var_1;
                }
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}
