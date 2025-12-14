/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((!234) << (((!(12 - var_8))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((var_4 | (((arr_14 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [1]) ? 5314131223585437886 : var_1))));
                                var_15 = (min(var_15, ((((((137 * var_3) >= (137 || 13132612850124113720))) || ((((var_12 <= var_1) - (13132612850124113729 || var_11)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [12] [i_6] [11] [i_2] [i_1] [i_0] = ((((max((((arr_2 [i_0]) ? 5314131223585437899 : var_6)), (((!(arr_6 [i_0] [i_1] [i_2]))))))) ? (((var_9 ? var_0 : var_2))) : 13132612850124113729));
                                var_16 = ((((106 ? (arr_20 [i_0] [5] [i_2] [i_5] [17] [14]) : var_10)) < var_0));
                                arr_22 [i_0] [12] [i_0] [12] [12] [19] [7] = (13132612850124113744 ^ 138);
                                arr_23 [1] [i_1] [i_1] [1] [i_1] [11] [i_1] = ((((((var_11 / var_9) >= (var_0 - var_0)))) ^ 141));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_28 [20] [i_7] [4] [i_1] [i_0] = 112;
                                var_17 = (max(var_17, 955514750155710801));
                                arr_29 [i_0] [i_1] [i_2] [i_7] [i_8] = var_9;
                                var_18 += (((var_10 - 5314131223585437887) + (max(((14920838806519176319 ? var_9 : 13132612850124113730)), var_3))));
                                arr_30 [i_2] [18] = ((10732800425555829950 != ((13621351418586766612 ? -823490068 : 65287))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_19 = (955514750155710803 ^ 2028905238);
                                arr_38 [i_10] [i_10] = (((((3257 ? (arr_1 [i_10]) : 232))) ? var_8 : (~var_12)));
                                var_20 = ((((var_8 ^ (1 << 12))) | ((((1 - var_6) - var_4)))));
                                arr_39 [i_10] [6] [i_10] [i_10] [i_0] [i_0] = ((var_3 ? ((max((max(3588700920, (arr_26 [i_0] [i_2] [11] [i_10]))), var_5))) : (max((-2147483647 - 1), -6876747534101304755))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = (((((-(var_8 / -707465892528292563)))) ? (max(-var_2, var_9)) : 18));
    #pragma endscop
}
