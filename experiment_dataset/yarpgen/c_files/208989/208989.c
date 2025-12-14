/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = ((~((var_10 ? (arr_5 [i_2] [i_0]) : -25653))));
                    var_13 = (((arr_4 [i_0]) >> (-125530975068420714 + 125530975068420744)));
                    var_14 += (((~(~var_6))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_15 = (((~var_4) >= (max((arr_17 [i_5] [i_5] [i_4] [i_6]), (arr_9 [i_4] [i_6])))));
                        var_16 = ((((((var_5 ? -1 : (arr_17 [1] [i_4] [i_4] [6]))))) ? (((((0 ? (arr_9 [i_3] [i_3]) : (arr_8 [i_5])))) ? ((1 ? 10672689592729581426 : (arr_17 [i_5] [11] [i_5] [i_6]))) : (((var_0 ? (arr_16 [i_5] [i_6] [i_3] [i_6]) : var_10))))) : ((((arr_14 [i_3] [i_4] [i_3]) ? ((((arr_13 [i_6] [i_5] [i_3]) < var_6))) : (arr_10 [i_6] [i_5]))))));
                    }
                    var_17 = (arr_10 [i_3] [i_4]);
                    var_18 = ((((((0 ? var_4 : (arr_12 [i_4] [16] [9]))))) ? ((((((arr_9 [i_3] [i_3]) ? 18446744073709551615 : 8823))) ? 12619884760881567053 : var_0)) : ((((((5826859312827984562 << (((arr_14 [2] [2] [i_5]) - 1018800473930790382))))) ? ((((arr_14 [i_3] [i_3] [i_5]) == (arr_15 [1] [i_4])))) : var_0)))));
                    arr_18 [i_5] [i_5] = (((~(((arr_10 [i_3] [i_4]) ? (arr_13 [i_5] [i_5] [i_5]) : 39930)))));
                }
            }
        }
    }
    #pragma endscop
}
