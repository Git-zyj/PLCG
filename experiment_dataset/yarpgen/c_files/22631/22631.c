/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (((~(!var_2))))));
                            var_15 = ((!((max((!-606781160), (arr_6 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] = (((((arr_1 [i_0]) + -27873))));
                            arr_11 [i_2] [i_3] [i_0] = (((1 || 18014398509481984) - (((arr_7 [i_2 + 1] [i_1] [i_0]) ^ var_3))));
                        }
                    }
                }
                arr_12 [i_0] = (min(((min((arr_5 [i_0] [i_0] [i_0] [i_1]), (((arr_8 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))))), (((arr_1 [i_0]) + (((max(57, (arr_5 [i_0] [i_0] [11] [i_1])))))))));
                var_16 = ((var_3 != (min(((max(var_12, (arr_0 [i_1])))), (~4558740938671404106)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            {
                var_17 *= ((((min((((arr_14 [i_4]) ? 6676654370769590551 : (arr_17 [i_4] [i_4] [1]))), (((var_10 ? (arr_15 [8] [i_5]) : (arr_15 [20] [i_5]))))))) ? (((arr_15 [6] [6]) ? (((~(arr_15 [16] [i_5])))) : (((arr_17 [4] [4] [2]) ? (arr_13 [i_4] [i_5]) : (arr_15 [1] [1]))))) : (((((min((arr_13 [i_5 + 3] [i_4]), (arr_14 [i_4 - 1])))) ? (arr_17 [2] [i_5] [2]) : ((1 ? (arr_16 [i_5] [7]) : (arr_15 [14] [i_5]))))))));
                arr_18 [i_5] = min(var_9, (((((min(var_10, (arr_16 [i_4] [i_5]))))) / ((4167047827419199738 ? (arr_13 [i_5] [i_5]) : (arr_16 [i_5] [10]))))));
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
