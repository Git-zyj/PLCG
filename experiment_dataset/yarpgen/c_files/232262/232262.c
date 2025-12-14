/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3] = (+(((arr_0 [i_1]) / (((arr_11 [i_3]) ? 255 : (arr_13 [i_0] [i_1] [i_2] [i_1] [i_1]))))));
                                var_14 = -24645;
                                arr_16 [i_3] [i_4] = (((!-626857778) ? 24645 : ((3606385393 ? ((((arr_10 [i_1] [i_1] [i_3] [i_4]) == (arr_10 [i_0] [i_2] [i_2] [i_4])))) : (arr_8 [i_3 - 1] [i_3 - 1] [i_3])))));
                                var_15 = (min(var_15, ((((((5505736083692034004 ? 98 : 2507916076))) ? 24623 : (max(688581902, 169998381)))))));
                            }
                        }
                    }
                    arr_17 [i_1] [3] = (max((((arr_10 [i_0] [i_0] [i_0] [i_0]) || -98)), (arr_1 [i_0])));
                    var_16 = (arr_10 [i_0] [i_1] [i_2] [i_0]);
                    arr_18 [i_0] [i_0] [i_0] = ((((((arr_3 [i_2] [i_2] [i_2]) | 645235381))) ? ((3649731899 ? (((arr_4 [i_2]) ? 3682578438 : (arr_7 [i_0] [i_1] [i_2]))) : (((min(-25, 1117)))))) : (arr_3 [i_0] [i_0] [i_2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    arr_26 [i_5] = ((612388858 ? 24957 : -59));
                    arr_27 [i_5] [i_5] [i_7] [i_7] = (((((688581928 ? ((~(arr_21 [i_5 + 3]))) : ((((arr_22 [i_5 - 1] [i_5]) <= 221751132)))))) ? ((max(75, (arr_24 [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 1])))) : 1));
                    arr_28 [i_5] [1] [i_6] [i_5] = (1246936975 * 0);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (((1248 >> (((((arr_34 [i_5 + 2] [i_5] [i_7] [i_8] [i_9]) ? (arr_20 [i_5]) : -908913614)) - 3015967795106829964))))) : 509627087369730547));
                                arr_36 [i_5 + 1] [i_6] [i_7 - 1] [i_5] = 1;
                                var_17 = (((((min(3649731915, (arr_31 [i_5] [i_8] [i_7] [i_5] [i_5]))) - (arr_34 [i_5 + 1] [i_5] [i_7 + 2] [i_7 + 2] [i_9 + 1]))) - ((((arr_34 [i_5 + 2] [i_5] [i_7 + 1] [i_5] [i_8]) ? -255 : (arr_22 [i_5] [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 *= 1324083304;
    #pragma endscop
}
