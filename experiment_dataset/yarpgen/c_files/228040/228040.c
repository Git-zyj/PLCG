/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1649457034;

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0]) / (arr_0 [i_0 - 3]))) >= (((arr_0 [11]) ? (arr_0 [i_0 - 2]) : var_4))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (arr_4 [i_0 - 1]);
                    arr_9 [i_0] [i_1] = (arr_3 [i_0]);
                    var_12 -= ((((!((((arr_7 [i_0] [i_1] [i_0] [i_2]) ? (arr_3 [i_0]) : var_1))))) ? (arr_7 [i_0] [12] [i_0] [i_0]) : (arr_8 [i_1 + 2] [i_0] [i_1 + 2] [i_0])));
                }
            }
        }
        arr_10 [i_0] = (arr_5 [i_0 - 1] [i_0]);
        var_13 += -320963374;
        arr_11 [i_0 + 1] [i_0 + 1] = 0;
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_14 = ((!((((arr_6 [i_3 + 1]) | (arr_6 [i_3 - 2]))))));
        var_15 = (max(var_15, ((max(var_6, var_0)))));
        var_16 = var_1;
        arr_15 [i_3] = (((!1649457042) && ((((arr_3 [i_3 - 2]) ^ (arr_3 [i_3 - 2]))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [4] = (9671 && -1961433788);
        var_17 = (min(var_17, (arr_8 [i_4] [i_4] [1] [i_4])));
        var_18 = ((max((arr_12 [i_4]), (arr_12 [i_4]))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_22 [2] = (((((((max(-34, 1506855393146669401))) ? (!-1649457016) : (arr_5 [i_5] [i_5])))) ? (((!((var_8 != (arr_4 [i_5])))))) : (max(-123, 1649457033))));
        arr_23 [i_5] = 63;
    }
    #pragma endscop
}
