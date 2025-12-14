/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = (min(((((arr_0 [i_0]) && (((-(arr_1 [16]))))))), ((var_2 ? 50580 : (arr_1 [i_0])))));
        arr_2 [i_0] = max(0, 3419825908);
        arr_3 [i_0] [i_0] = ((((min((((!(arr_1 [i_0])))), ((65535 ? (arr_0 [i_0]) : var_0))))) & (max(3419825912, (arr_1 [i_0])))));
    }
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_13 += (max(((61220 ? 3622876129865157121 : 8930202315473611615)), (((!(arr_6 [i_1 + 3] [3]))))));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2] [i_1] = var_6;
                            arr_19 [i_1] [i_1] [i_3] [i_1] [i_5] = ((arr_11 [i_1]) / (((min((arr_6 [i_5] [i_2]), 15760338350275451752)) - (min(var_7, (arr_8 [i_1] [i_2] [6] [i_5]))))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_22 [1] [i_2] [i_2] [i_1] [i_4] [i_6] = 18446744073709551604;
                            var_14 = (((((((min(var_7, 14823867943844394490))) ? 536870911 : ((var_1 ? 536870911 : (arr_0 [i_3])))))) || (((3419825909 ? 65522 : 15760338350275451752)))));
                            arr_23 [i_1] [i_1] = (((arr_13 [i_1] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 2] [i_1 + 3]) ? (max((((arr_10 [i_1] [i_2] [i_4] [i_6]) ^ var_7)), (((!(arr_21 [i_1] [1])))))) : (((~(arr_1 [i_1]))))));
                            arr_24 [2] [i_1] [i_1 - 1] [i_1] [i_1 - 1] = (max(((max(var_5, var_5))), (min(18, 65514))));
                        }
                        var_15 = ((+((~(((arr_4 [i_1] [i_2]) ? (arr_7 [i_1 + 3] [i_2] [i_3]) : (arr_5 [i_2])))))));
                    }
                    arr_25 [i_1] [i_1] [i_1] [i_1] = ((-536870911 || ((max((arr_17 [i_1]), 875141387)))));
                }
            }
        }
    }
    #pragma endscop
}
