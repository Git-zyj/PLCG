/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = ((var_4 ^ (((((var_15 - (arr_5 [i_0] [i_0] [i_1]))) > (arr_1 [i_0]))))));
                var_19 = ((~(~13154082503274720655)));
                var_20 = (min(var_20, (0 ^ var_13)));
            }
        }
    }
    var_21 = ((!((max(var_2, var_12)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_3] = (~(min(((-1507165283 ? var_15 : var_16)), ((max(var_10, var_12))))));
                var_22 = (((((var_12 ? (arr_0 [i_3]) : var_10)) | var_5)));
                arr_13 [i_3] = (((((((var_11 ? (arr_9 [i_3] [i_3] [i_2]) : var_13))) ? var_7 : (~var_5))) << (!var_12)));
            }
        }
    }
    #pragma endscop
}
