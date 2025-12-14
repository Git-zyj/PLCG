/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((+(max((((-127 - 1) * 215)), 29530))));
                var_18 = -102;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 *= (max(49714, 248));
                            var_20 = (min((max((((arr_7 [i_1] [i_1] [i_2] [i_0] [i_3] [i_2]) - var_4)), ((max(6367, 3062053981))))), 0));
                            arr_8 [i_1] [i_1] [i_1] [i_3] = 15827;
                            arr_9 [i_1] [i_1] [i_1] [1] [i_0] = ((-(15822 + 0)));
                            var_21 = (-6367 ? ((49709 - (arr_2 [i_0] [i_1] [i_3]))) : ((min(var_5, 81))));
                        }
                    }
                }
            }
        }
    }
    var_22 -= ((max(var_3, ((2576002366 ? 1718964922 : -6368)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_23 [i_4] [i_4] [i_6] [i_4] [i_6] = 49727;
                                var_23 = (max((((18 > (arr_13 [i_5] [i_5] [i_8])))), (((arr_12 [i_4] [i_6] [i_7]) + 41))));
                                arr_24 [i_4] [i_4] [i_4] [i_7] [i_4] [i_4] [i_5] = (((((!(!168)))) > (((((max(166, 166))) > -2934)))));
                            }
                        }
                    }
                    var_24 = (((15827 / 49709) || ((min(198, (arr_21 [i_4] [i_5] [i_5] [i_6] [i_6]))))));
                    arr_25 [i_4] [i_4] = -1868439528;
                }
            }
        }
    }
    var_25 += var_15;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    var_26 = (((10795258213750970065 ? 77 : 127)));
                    arr_34 [i_9] [i_11] = (((max((((arr_27 [i_9]) ? 3 : (arr_30 [i_10]))), 15809))) ? (((arr_26 [i_9]) ? (arr_26 [i_9]) : 163)) : (((533862702 ? var_3 : (var_11 <= 268031569)))));
                    var_27 = (min(32767, (((!(arr_14 [i_9] [i_10]))))));
                }
            }
        }
    }
    #pragma endscop
}
