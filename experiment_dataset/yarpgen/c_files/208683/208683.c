/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_7));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [8] |= min((min((min(var_3, var_5)), ((7412701018917707609 ? (arr_10 [i_3] [i_3] [i_3] [i_3]) : -7412701018917707610)))), (~var_1));
                            var_15 += -7412701018917707590;
                        }
                    }
                }
            }
            arr_13 [i_0] [i_1 + 1] = max((arr_3 [i_0] [i_0]), (arr_2 [i_1] [i_1 + 2]));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1 + 3] [i_0] [i_0] [i_7] |= 255;
                            var_16 += (0 < 2626780276);
                        }
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] |= (((((((!(arr_8 [i_0] [i_0] [2] [i_0] [i_0])))) % (arr_10 [i_0] [12] [i_0] [i_0]))) == (arr_7 [6] [6] [i_0] [i_0] [i_0] [i_0])));
        arr_23 [13] = (arr_3 [i_0] [i_0]);
        var_17 = (max(var_17, (((((((-63 / 5016323964184909145) * (var_8 / var_0)))) ? ((min(2626780276, 134217728))) : ((max(var_13, -1))))))));
        arr_24 [i_0] = var_3;
    }
    var_18 = (!var_6);
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                {
                    var_19 = (max(var_19, (((((min(((min(var_9, 4294967279))), (arr_2 [i_8 + 1] [i_8 - 1])))) ? (arr_20 [i_8 + 1] [i_10] [i_9] [4] [i_9] [12] [i_10]) : var_2)))));
                    arr_33 [0] [i_9] [i_9] [0] = ((!(arr_18 [i_8 - 1] [i_8 + 1] [10] [i_9] [i_10])));
                }
            }
        }
    }
    #pragma endscop
}
