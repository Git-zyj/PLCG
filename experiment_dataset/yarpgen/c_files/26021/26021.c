/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [11] [i_0] [i_1] = (min((max((arr_1 [i_2]), (arr_1 [i_0]))), ((~(((arr_2 [i_3]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0])))))));
                        var_11 = (((arr_7 [i_0]) ? (((arr_10 [i_3] [i_3] [i_1] [i_1] [i_0]) | var_6)) : (((arr_7 [i_0]) ? (arr_6 [i_0] [i_3] [i_2] [i_2]) : (arr_10 [i_3] [i_2] [i_1] [i_1] [i_0])))));
                        arr_12 [i_0] [18] [i_1] [i_2] [i_1] = 105;
                        arr_13 [i_1] [16] [i_3] = ((~(((((-10 ? var_3 : var_1))) ? ((max((arr_4 [13] [i_2] [13]), (arr_8 [i_0] [10] [i_0])))) : (min(-7126536478988239827, var_10))))));
                        arr_14 [i_1] [i_1] [i_1] = ((((((arr_10 [i_1] [9] [i_1] [i_2] [i_3]) ? ((-1421136152 ? 103 : 838845149307778741)) : (~var_1)))) ? ((min((arr_6 [i_2] [14] [14] [i_2]), -106))) : (((arr_9 [i_1] [i_2]) ? (-838845149307778742 != 25) : 1328648930))));
                    }
                    var_12 = (((var_0 && 838845149307778740) ? (arr_2 [i_2]) : 127));
                    var_13 = (((((((((arr_10 [i_0] [17] [i_1] [i_2] [i_2]) | (arr_5 [0])))) ? ((((var_2 == (arr_3 [i_0] [13] [i_0]))))) : (((arr_0 [i_0] [i_0]) << (((arr_5 [i_0]) - 638512227))))))) ? (min((((arr_6 [i_0] [i_1] [i_1] [5]) ? -93 : (arr_0 [i_1] [i_1]))), (min(var_10, (arr_9 [4] [4]))))) : ((~(arr_0 [i_0] [i_0])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_14 = ((((((arr_20 [i_0] [i_4] [i_5]) ? (min(var_6, var_10)) : var_4))) ? (arr_2 [i_6]) : (arr_6 [i_0] [i_4] [i_5 - 2] [11])));
                        var_15 = var_2;
                        var_16 = (~-1);
                    }
                }
            }
        }
    }
    var_17 = (max(((838845149307778741 ? var_8 : var_7)), ((1180057158 ? -838845149307778722 : 838845149307778741))));
    var_18 = var_7;

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_19 += ((((((arr_15 [i_7]) ? (arr_15 [i_7]) : var_3))) ? ((var_7 ? (arr_15 [i_7]) : (arr_15 [i_7]))) : ((~(arr_15 [i_7])))));
        var_20 *= ((-((((min(var_6, (arr_18 [i_7] [i_7] [i_7])))) ? ((max(var_0, var_8))) : ((var_6 ? 63 : var_6))))));
        arr_25 [i_7] = ((!(arr_19 [i_7] [i_7] [i_7])));
    }
    #pragma endscop
}
