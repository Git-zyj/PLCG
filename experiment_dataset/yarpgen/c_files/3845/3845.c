/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 &= ((((((((arr_3 [i_0] [i_3] [2]) | (arr_3 [i_1] [i_2] [i_3]))) | (arr_4 [i_0] [i_2])))) || ((((((max((arr_6 [1] [i_1] [i_1] [1]), (arr_1 [i_3]))))) & (min((arr_8 [i_3] [i_1] [i_2]), (arr_8 [i_2] [i_2] [i_3]))))))));
                            arr_12 [i_0] [i_1] [i_1] = 106;
                            var_21 = (((((((max((arr_5 [i_0]), (arr_5 [10])))) ? ((max((arr_4 [i_2] [i_0]), (arr_9 [i_0] [i_1] [i_2] [i_3])))) : (min(150, -6226673431795158139))))) ? (((((((arr_9 [i_0] [12] [3] [i_1]) ? 1 : (arr_9 [i_3] [i_2] [i_1] [i_0])))) || ((max(1903156075, 106)))))) : (arr_7 [i_0] [i_1] [i_2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = (((min(((min((arr_17 [7] [i_1] [5] [i_5]), (arr_13 [i_0] [i_0])))), (max((arr_14 [9] [i_4] [i_1]), (arr_3 [0] [i_0] [6]))))) > (max(((min((arr_9 [5] [i_1] [i_4] [i_5]), (arr_6 [4] [i_1] [i_4] [i_5])))), (((arr_4 [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_4]) : (arr_11 [i_0] [i_1] [i_4] [i_5])))))));
                            var_22 &= -7573431828521485299;
                        }
                    }
                }
            }
        }
    }
    var_23 = min(var_19, ((((min(var_10, var_9))) ? ((var_9 ? var_19 : -70)) : ((var_2 ? 1 : 1)))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_24 = (max(var_24, (max((min(((min((arr_19 [i_6]), (arr_22 [i_6] [i_7] [i_8])))), (((arr_21 [i_6] [i_6] [i_6]) & 5313003662430273379)))), ((((arr_25 [i_6] [i_7] [i_8] [i_6]) ? 54 : ((max((arr_25 [i_8] [i_8] [8] [i_6]), (arr_22 [i_6] [0] [14])))))))))));
                    arr_26 [9] [i_7] [i_8] [i_8] = (min(((((arr_23 [i_6] [i_7] [i_8]) ? (arr_23 [i_8] [i_7] [13]) : (arr_23 [i_7] [i_6] [i_8])))), (((((arr_23 [i_8] [i_7] [i_6]) <= 1)) ? 6226673431795158139 : (arr_20 [i_7])))));
                    var_25 += (min((((arr_20 [i_6]) ? ((((arr_22 [i_7] [i_7] [i_7]) ? (arr_20 [i_6]) : 631372939))) : (((arr_24 [i_6]) * 1999192975921555310)))), ((min((((arr_20 [i_7]) ? (arr_19 [i_8]) : (arr_24 [11]))), (((arr_25 [11] [i_7] [5] [8]) ? (arr_23 [i_6] [i_7] [i_8]) : (arr_24 [i_8]))))))));
                }
            }
        }
    }
    #pragma endscop
}
