/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 |= (max((~56), (((max(-59, 65))))));
        var_16 += ((((30931 % (arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (((max(((!(arr_3 [i_1]))), (!251))) && (((max(1369703014, 64))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_17 = ((-(min((arr_2 [i_0]), ((-(arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                            var_18 = (max(var_18, ((max((((!var_13) | (max(var_0, var_4)))), (((~(arr_7 [i_4] [i_4] [i_4] [i_4])))))))));
                            var_19 = (((((min((arr_3 [i_0]), (arr_14 [i_1] [i_1] [i_2] [i_2] [i_4] [i_1 - 1]))))) | (((!(1404648834085255007 ^ var_3))))));
                            var_20 = (max(var_20, (((((max((-38 || var_6), (max(-1404648834085255003, 1404648834085255007))))) || (((min(251, 124667443)))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((max((min((max(var_0, var_10)), ((min(var_2, 2925264268))))), ((((max(1369703027, var_1))) - (var_4 % 1))))))));

    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                {
                    var_22 |= (max((((37 % var_12) == (!var_5))), ((!((max(var_2, (arr_3 [i_5 - 1]))))))));
                    var_23 = (min(var_23, ((min((max((max(-3785256147986468596, -26742)), (arr_3 [i_6]))), (((((max((arr_9 [i_5] [i_5] [i_6] [i_7] [i_7]), 58))) == ((max(var_13, (arr_19 [i_6]))))))))))));
                }
            }
        }
        var_24 |= (max((18013848753668096 > var_14), (((!(arr_1 [i_5 - 1]))))));
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_25 = ((-(max((arr_6 [i_8] [i_8] [i_8]), (~1369703000)))));
        var_26 = ((max((min(4093532523, var_3)), ((max((arr_0 [i_8]), var_0))))));
        var_27 *= ((max(var_6, ((min(var_12, var_3))))));
    }
    #pragma endscop
}
