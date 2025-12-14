/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 = (((((123 ? var_1 : var_2)) << (var_1 - 16879316156529142456))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_0] [i_0] = min(11500907775929876049, (arr_6 [i_0] [1] [i_1] [i_0]));
                                var_18 = ((var_1 ? (((arr_2 [i_0] [i_1]) * (arr_2 [i_0] [i_3]))) : (min(113, (arr_3 [i_0] [i_0] [i_3])))));
                            }
                        }
                    }
                }
                arr_11 [1] [i_0] = (max((107 ^ 126), ((-7358975209127091637 ? ((-7358975209127091636 ? 118 : (-127 - 1))) : 13916))));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_19 = (arr_2 [i_5] [i_5]);
                    var_20 = (max((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((-(max((arr_5 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_5] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_21 = ((!(arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6 + 2])));
                                var_22 = ((7358975209127091619 & (max(5, (arr_7 [i_5] [i_1] [i_1] [i_6] [i_7 - 1] [i_0])))));
                            }
                        }
                    }
                    arr_19 [i_1] = (~-7358975209127091651);
                    var_23 = (((((max((arr_9 [i_5] [i_5] [i_5] [i_5] [5]), (arr_0 [i_0]))))) || ((max((-7358975209127091635 / -7358975209127091661), (arr_4 [i_0] [i_1] [i_5] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
