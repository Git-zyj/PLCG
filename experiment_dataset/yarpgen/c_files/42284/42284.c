/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = 3145471655;
                var_19 = ((1149495622 ? -662210839 : (((((1149495640 ? 237 : 1149495640))) ? 3145471674 : 123))));
                arr_4 [i_0 - 2] [i_0 - 2] [i_0] &= ((((max(var_17, 6323171702335027091)) >= 48)));
                arr_5 [i_1] = ((((min(var_15, (((var_17 == (arr_0 [i_1] [i_0 - 2]))))))) + (max(1149495629, 3145471636))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_20 = (((((((min(-6323171702335027091, var_17))) ? (~6323171702335027091) : (arr_8 [i_2])))) ? var_10 : (((max(35205, var_13)) ^ (~var_9)))));
                arr_13 [i_2] = (((((((max((arr_11 [i_2]), (arr_12 [i_2] [i_2]))))) - ((-6323171702335027065 ? var_14 : (arr_11 [i_2])))))) ? (arr_8 [i_2]) : (-32767 - 1));
                var_21 = (~((~(1 ^ 65535))));
                arr_14 [4] [i_3] [i_2 + 1] |= (((((18 ? (((arr_12 [i_2] [1]) ? (arr_12 [i_2] [i_2]) : (arr_10 [i_3]))) : (var_3 + -2147483636)))) - (((arr_10 [i_3]) ? -6323171702335027093 : -var_0))));
                var_22 = (min(var_22, ((((var_17 <= var_12) ? 63024 : (min(0, var_10)))))));
            }
        }
    }
    #pragma endscop
}
