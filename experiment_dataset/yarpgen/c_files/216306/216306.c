/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_18 |= 8;
                    var_19 = ((~((~(~8)))));
                    arr_9 [i_0] [2] [i_2] = (!-var_16);
                    arr_10 [i_0] [i_0] [i_2] = ((~((~(!2715961776143985891)))));
                }
                var_20 *= ((!((!(!20358)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_18 [6] [i_5] [10] [i_5] = -20359;
                    arr_19 [i_5] [i_3] [i_5] [i_5] = (!1435144717);
                    arr_20 [i_5] [i_5] = ((-(~-1435144718)));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 += ((!(((-(((!(arr_8 [i_4] [4] [i_7])))))))));
                                var_22 = ((-((-(arr_8 [i_5] [i_6] [i_7])))));
                                arr_27 [i_5] [i_5] = ((~(+-1)));
                            }
                        }
                    }
                    arr_28 [i_5] [i_4 - 2] [12] = (+-1070855372);
                }
            }
        }
    }
    var_23 *= (!var_10);

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_24 *= ((!(((-(~20367))))));
        var_25 = (~169);
        arr_32 [i_8] = -var_1;
    }
    var_26 |= (!-20359);
    #pragma endscop
}
