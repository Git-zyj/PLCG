/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_3] [i_2] [i_1] [3] [i_0 + 1] = ((-var_3 ? (((((arr_10 [12] [i_0 - 1] [i_1 + 2] [i_2] [i_2]) && var_8)))) : (min((((arr_2 [9] [i_0]) ? (arr_10 [11] [i_2 - 1] [1] [i_0] [i_0]) : var_7)), ((max(43126, (arr_2 [i_1] [i_1]))))))));
                            var_10 = ((~((-((((arr_0 [8]) < (arr_6 [i_0]))))))));
                            var_11 = (min(var_11, (min((arr_8 [i_2 + 1] [9] [9] [2] [i_2]), (min((arr_8 [i_2 + 1] [i_3] [13] [i_2 + 1] [i_3]), var_2))))));
                            var_12 &= 3579132166179836594;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                var_13 -= var_4;
                                var_14 = (arr_14 [i_0 - 1] [i_1] [i_4]);
                                var_15 = ((+(min((0 / 1), (arr_14 [i_1 - 1] [4] [i_0 + 1])))));
                            }
                            for (int i_7 = 0; i_7 < 14;i_7 += 1)
                            {
                                var_16 &= (min(((~(((arr_15 [i_0] [9] [i_4] [i_5]) + (arr_14 [i_7] [i_1] [i_4]))))), ((0 ? (((arr_15 [i_1] [i_4] [i_1] [i_0 - 1]) ? 20 : (arr_5 [i_0] [8] [i_7]))) : var_5))));
                                var_17 = (arr_10 [i_0] [i_5] [10] [i_7] [i_7]);
                                arr_22 [i_0] [12] [12] [i_0] [i_0] = ((max(1298238547, (6380107424729559636 || var_1))));
                            }
                            var_18 = (0 + 1335260779);
                        }
                    }
                }
                arr_23 [12] = (((((((arr_3 [i_0 - 1] [6]) && (arr_18 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1 - 1]))) || 16563)) ? (!var_4) : ((((arr_10 [i_0] [i_0] [i_1] [11] [i_0 + 1]) && ((!(arr_20 [i_0] [i_1 + 1] [i_1]))))))));
            }
        }
    }
    var_19 += (((((var_6 ? var_9 : (var_7 <= var_0)))) ? ((((max(14532117547989586658, var_0))) ? var_2 : (var_1 ^ var_2))) : var_4));
    #pragma endscop
}
