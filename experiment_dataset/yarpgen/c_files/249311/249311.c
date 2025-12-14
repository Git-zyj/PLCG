/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((~(arr_4 [i_2] [i_1] [i_0])));
                    arr_9 [i_1] = ((((((!(arr_4 [i_0] [i_0] [i_0]))) || ((max(-5884219243416398393, (arr_0 [i_0])))))) ? (((arr_5 [i_1] [i_1] [i_1]) ? (arr_3 [i_1] [i_1] [i_1]) : (arr_7 [10] [i_1] [4] [i_1]))) : ((((arr_7 [i_0] [i_0] [i_0] [i_1]) ? (arr_7 [i_0] [i_1] [i_2] [i_1]) : (arr_7 [1] [i_1] [i_2] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_10 *= (((((var_3 ? ((~(arr_10 [i_4]))) : ((~(arr_13 [i_3])))))) ? (!var_5) : 0));
                var_11 = (min(var_11, ((~(((((2264030488069126105 ? (arr_2 [1] [i_4]) : -8259754992508073178))) ? (min((arr_12 [i_3] [i_3]), 2264030488069126105)) : ((((!(arr_7 [i_3] [i_3] [i_3] [i_3])))))))))));
                arr_14 [i_3] [i_4] [i_3] = (arr_2 [i_3] [14]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            {
                var_12 = (max(var_12, (((((arr_19 [i_6 + 1] [i_6 + 2] [i_6 + 1]) ? (arr_19 [i_6 + 1] [i_6 - 2] [i_6 + 2]) : (arr_17 [i_6 + 1] [i_6 + 1] [i_6 - 2])))))));
                var_13 = (min(var_13, (((((~(((arr_6 [i_5] [i_5] [i_6 + 2] [10]) ? 25 : 18346)))) == (((max(14933, (arr_15 [i_6 - 1] [i_6]))))))))));
                arr_21 [i_5] = 18346;
            }
        }
    }
    var_14 = ((var_4 <= ((max(var_9, var_4)))));
    var_15 = var_4;
    #pragma endscop
}
