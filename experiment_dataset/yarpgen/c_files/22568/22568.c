/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_10 ? var_14 : var_5))) ? var_2 : (min(var_10, ((var_2 >> (var_0 - 15627600753779689664))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((var_2 ? (((arr_1 [i_0]) ^ 2393378208295952965)) : (((~(arr_2 [i_0])))))) >> (96 - 35)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_1 [i_3]);
                        var_17 += ((~(max((arr_5 [i_1] [i_2] [i_3]), (arr_5 [i_0] [i_0] [i_3])))));
                        var_18 = (min(var_18, var_7));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_15 [i_4] [i_4] = (arr_13 [8]);
                    arr_16 [i_0] [i_4] [i_5] = (((147 ? 99 : 15298354484944865807)));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_19 = (((((((((arr_11 [i_0]) ? (arr_7 [i_0] [i_4] [i_5] [i_0]) : var_13))) ? (arr_5 [i_4] [i_5] [i_6]) : var_7))) < ((-7225214684993450199 ? var_13 : ((~(arr_7 [i_0] [i_0] [i_5] [i_7])))))));
                                var_20 = (max(var_20, ((((min(0, var_9)))))));
                                var_21 = (((var_8 & var_11) ? (84 <= 172) : -var_7));
                                var_22 = (max(var_22, ((min(((min((arr_19 [i_6 + 2] [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 2]), 150))), 6067404899406461635)))));
                            }
                        }
                    }
                    var_23 += (arr_3 [i_0]);
                    var_24 = (max(var_24, var_0));
                }
            }
        }
    }
    var_25 = ((((((((var_8 ? var_9 : var_12))) ? var_2 : ((max(var_11, var_12)))))) | ((var_13 ? var_4 : ((min(var_1, var_1)))))));
    var_26 = (min(var_26, var_2));
    var_27 = var_11;
    #pragma endscop
}
