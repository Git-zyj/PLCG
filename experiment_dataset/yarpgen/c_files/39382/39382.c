/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((~((0 ? 59847 : -32760)))) - (~11604)));
        arr_4 [i_0] = (max((((((max(var_4, 206))) || ((max(1, -605366758)))))), (43 < var_1)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (min(((+((max((arr_6 [i_1]), 11648))))), (max(var_10, ((0 ? 0 : -15301))))));
        arr_8 [i_1] = (max((min(((var_2 ? (arr_1 [i_1] [i_1]) : 85)), (-32760 | 127))), ((max(((((arr_0 [i_1]) <= var_2))), (214 * 1))))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_15 [i_2] [i_3 + 4] = var_7;
            arr_16 [i_3] = (min((((169 ? 111362980 : -86))), ((((((-86 ^ (arr_13 [i_2])))) ? ((min((arr_2 [i_2 - 3]), var_11))) : ((0 ? 128 : 59847)))))));
            arr_17 [i_2] = 1638170790;
        }
        arr_18 [i_2] = (max(24, ((max(var_15, 47)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_30 [i_6] = 206;
                                arr_31 [i_2 - 3] [i_6] [i_5] [i_5] [i_5] = var_16;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_36 [i_4] [i_4] [i_5] [i_8 + 3] [i_2] [i_4] = ((-((max(((max(-123, 1))), var_14)))));
                                arr_37 [i_8] [i_4] [i_8] = 9044999735849628925;
                                arr_38 [i_8] = (max(((min(((128 ? -616653867 : (arr_24 [i_4] [i_5] [i_9]))), (arr_26 [i_2 + 2] [i_2] [i_2 + 2] [i_9] [i_9])))), (min((min(43713, 9044999735849628910)), (arr_24 [i_2 - 3] [i_8] [i_8])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_6;
    var_18 = (min(255, 13676));
    #pragma endscop
}
