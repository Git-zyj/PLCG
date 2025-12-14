/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-9223372036854775807 - 1) * (!126));
    var_14 = ((((9071437810929683082 ? (var_8 && -109) : -40803)) / -var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = ((-(((arr_0 [i_0]) ? ((108 / (arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])))));
        arr_3 [i_0] = var_1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = var_3;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                {
                    var_17 = var_2;
                    var_18 -= (arr_2 [i_1] [i_1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = ((!(arr_7 [i_6])));
                                var_19 = (arr_17 [i_1] [12] [i_5] [i_6] [11] [i_5]);
                                var_20 = (1 + 2251799813423104);
                                var_21 = -3837500692996714407;
                                var_22 -= var_10;
                            }
                        }
                    }
                    arr_25 [i_1] [i_1] = (((!var_0) ? ((min((!-3887527960438827678), ((!(arr_10 [i_1])))))) : (((arr_2 [1] [i_4]) >> (4784625701481751778 - 4784625701481751765)))));
                    arr_26 [i_5] [i_1] [i_1] = -8228358755199073683;
                    var_23 = (-108 <= -9331);
                }
            }
        }
        arr_27 [i_1] |= var_12;
    }
    #pragma endscop
}
