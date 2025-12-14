/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((max(4294967287, (((arr_0 [5] [i_1]) & (arr_1 [i_1]))))) + (((((arr_0 [11] [i_1]) <= (max(54765, 7623074781347310864))))))));
                    arr_10 [i_1] [i_0] = (max((max((((4294967287 / (arr_8 [i_0])))), (min((arr_0 [6] [i_1]), (arr_1 [i_0]))))), ((max(8, (~8))))));
                }
            }
        }
    }
    var_13 = 31737;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                var_14 = (max((max((arr_14 [i_4] [i_4 + 1] [i_4 + 1]), (arr_14 [i_4] [i_4 - 1] [i_4 + 1]))), (max((arr_14 [16] [i_4 - 1] [i_4 - 1]), (arr_14 [i_4] [i_4 + 1] [i_4 - 1])))));
                arr_17 [i_4] = (arr_12 [i_3] [i_4]);

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_20 [i_4] [i_4] [i_4 + 1] [14] = ((~((max(163, ((((arr_14 [i_3] [i_4] [i_4]) && -31737))))))));
                    var_15 = (((1 > (min((arr_16 [i_4] [i_4] [i_4]), (arr_11 [19] [i_5]))))));
                    var_16 += 1152921435887370240;
                }

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_17 = (min(2699942491, (105553116266496 <= 2425812067370359990)));

                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        arr_25 [i_3] [i_4 + 1] [i_4] [i_6] [i_6] [i_4] = (arr_11 [i_6] [i_6]);
                        arr_26 [i_4] [i_4] [i_6] [6] [i_3] [i_6] = (((arr_24 [i_3] [i_4] [i_4] [i_7]) - (min(1, 2018140341))));
                    }
                    var_18 = 13857;
                }
            }
        }
    }
    var_19 = (min(var_19, var_10));
    var_20 = (((((-(2119 - 27166)))) || (63 == 1379623610)));
    #pragma endscop
}
