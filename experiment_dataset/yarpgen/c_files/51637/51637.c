/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((!(((~(arr_4 [i_1]))))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] = ((max(-50524, (3447717154644691660 == 2280119309))));
                    var_19 = ((1437934478 ? 1336348091 : 1600738034));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [i_1] = ((((max((arr_14 [i_0] [i_1] [i_3]), var_0))) ? (((arr_14 [i_3] [i_1] [i_0]) & (arr_14 [i_0] [i_1] [i_3]))) : ((-(arr_14 [i_0] [i_1] [i_3])))));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_20 [19] [i_1] = (max((((!(arr_16 [i_0])))), (((~((~(arr_0 [i_1]))))))));
                        var_20 = (24 <= (((max(149, var_17)) & (~1508040367))));
                    }
                    var_21 = (((max(((((arr_0 [i_1]) || 240296495))), (~-28433))) != -24));
                    var_22 = ((5625053308677702363 ? 1 : 5625053308677702363));
                    var_23 = var_5;
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_23 [i_5] = (((~(arr_11 [i_5] [i_5] [i_5]))));
                    var_24 = 8;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_25 = (min((((-((1 ? 25 : 134))))), (max((arr_2 [i_0]), (arr_2 [i_0])))));
                                arr_29 [i_0] [i_0] [i_5] [i_1] [i_5] [i_1] [i_5] = (min((((arr_11 [i_5] [i_5] [i_5]) ^ (max(var_2, 2958619208)))), (arr_12 [i_0] [i_1] [i_5] [14])));
                                arr_30 [i_0] [i_1] [i_5] [i_6] [i_5] [i_6] [i_0] = (max((max(255, 18)), (((!(((arr_11 [i_0] [i_7] [i_5]) > var_16)))))));
                                var_26 = max(2958619214, (arr_7 [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (((((-(~var_5)))) ? (((max(694838465762246673, 399686906)))) : (((var_13 > var_14) ^ -8708236784681264601))));
    #pragma endscop
}
