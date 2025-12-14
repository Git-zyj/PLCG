/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_11 ? 29231 : 18202211363188085936))) ? ((var_8 ? 2275 : var_9)) : var_7))) ? var_14 : 6108348092325642196));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_2] = ((((((arr_1 [i_1 - 2]) ? (arr_1 [i_1 + 1]) : var_1))) ? ((29231 ? (arr_1 [i_1 + 2]) : var_5)) : (arr_1 [i_1 - 1])));
                    var_16 -= ((1 ? (arr_4 [i_2 - 2]) : (((arr_7 [i_0] [i_1 - 1]) ? (arr_7 [i_0] [i_1 + 2]) : (arr_7 [i_1] [i_1 + 1])))));
                }
            }
        }
    }
    var_17 = 42579;
    #pragma endscop
}
