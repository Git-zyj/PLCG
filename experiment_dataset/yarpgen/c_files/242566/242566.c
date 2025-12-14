/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((min((arr_0 [i_1]), 7533401665524555534)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_10 [0] [13] [i_3] [i_3 + 2] [19] [i_2] [1] = ((arr_9 [i_4 - 2] [i_3] [17] [i_3] [i_3]) | ((1 % (arr_8 [i_4 - 1] [i_4 + 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1]))));
                                var_18 = (((((arr_7 [i_3] [i_3] [i_3] [i_3 - 1]) / (arr_7 [1] [i_3] [i_3] [i_3 - 1]))) & (max((arr_7 [i_3] [i_3] [i_3] [i_3 - 2]), 8438886977796173016))));
                            }
                        }
                    }
                    var_19 = ((-(min((arr_2 [i_0]), (((arr_9 [14] [i_0] [14] [i_0] [i_0]) ? -8858147641577747383 : -1724196116748294587))))));
                    arr_11 [i_2] = (arr_9 [i_2] [i_0] [i_1] [i_0] [i_0]);
                    var_20 = 512;
                }
            }
        }
    }
    var_21 = (var_3 >= -7348470382400282318);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_22 = (!((max(1, 1724196116748294586))));
                var_23 = max((((!(((66967861 + (arr_17 [i_5] [i_5]))))))), (min(285985004, (~60669))));
                arr_19 [i_5] [10] [i_5] = ((-((~(arr_16 [i_5 + 1] [i_5])))));
            }
        }
    }
    #pragma endscop
}
