/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 ? 14193314693943681257 : (4253429379765870358 & 41)));
    var_17 ^= (max((((((max(var_10, var_4))) ? (var_13 | var_13) : 10912))), (max(-4253429379765870355, (0 | -1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((min(10912, (arr_1 [i_0]))));
                var_19 += (min(((2886923672 ? -103 : 15)), -168733464));
                arr_4 [i_0] [i_1] = (max((((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_0]))), ((-(min(var_7, var_6))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                arr_13 [0] [i_2 + 2] [i_2] = (arr_8 [i_2]);
                var_20 = (max(var_20, ((((((54623 == 24802) ? (arr_2 [i_3 - 2] [i_2 + 2]) : (min(2387988743340012238, 55933)))) >> (((arr_0 [4]) - 61213)))))));
            }
        }
    }
    var_21 = ((-(max(var_3, var_15))));
    #pragma endscop
}
