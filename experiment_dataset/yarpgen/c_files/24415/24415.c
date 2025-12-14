/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max(-8194578470673000945, ((((arr_0 [i_1] [i_1]) ? ((max(var_6, (arr_3 [i_0] [i_1 - 1])))) : (arr_3 [i_0] [i_0]))))));
                var_11 = 12389950281200129655;
                var_12 = 1;
                var_13 = (((((((min(var_7, (arr_4 [i_0] [i_1])))) ? 1 : (!6056793792509421960)))) ? (~6056793792509421961) : ((min((min((arr_2 [i_1]), 0)), (((arr_2 [i_0]) - 4294967295)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 -= (max(((((min(var_7, (arr_12 [i_2] [i_2] [i_5] [22])))) ? (((var_9 & (arr_13 [i_2])))) : ((1 ? 1 : (arr_16 [i_2] [i_3] [i_4] [i_5] [i_6]))))), (((((var_7 ? var_9 : 9068790991659043782))) ? (min(var_7, 6056793792509421961)) : (((var_5 ? (arr_11 [i_6] [i_5] [i_3]) : (arr_11 [i_2] [i_3] [i_6]))))))));
                                arr_20 [i_2] [i_2] [i_2] [i_5] [i_6] [i_5] = ((((((1 + -7132735351786584168) >= (arr_12 [i_2] [i_3] [i_2] [i_6])))) * ((min(var_1, (((!(arr_18 [i_2] [i_5] [i_4] [i_2] [i_2])))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_15 = 3815335809;
                            var_16 = ((((((!(((-(arr_14 [i_2])))))))) + ((-(((arr_13 [i_2]) + 12389950281200129655))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_31 [i_2] [i_3] [i_9] [i_10] [i_10] [i_10] = var_5;
                            var_17 = (min((arr_9 [i_3] [i_9] [i_10]), ((~(~9068790991659043782)))));
                            arr_32 [i_2] [i_3] [i_2] [6] = ((!(((~(arr_25 [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((+(((var_8 - -596057263) ? (min(var_9, 7132735351786584167)) : var_7))));
    #pragma endscop
}
