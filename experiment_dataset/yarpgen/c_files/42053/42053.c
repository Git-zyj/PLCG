/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 += ((max(((-25 ? -18420 : 89732392)), (arr_6 [i_2]))));
                            var_15 = var_11;
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_0]);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -18420;
                            var_16 = (((((+((max((arr_5 [i_0] [i_0] [i_0]), var_0)))))) - (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (((166 ? -25 : 28))) : (max(2482576119, (arr_5 [i_0] [i_0] [i_0])))))));
                        }
                    }
                }
                var_17 = (min((max(83, ((99 % (arr_6 [i_0]))))), -1));
            }
        }
    }
    var_18 = ((var_8 ? ((((min(0, 36028797018963967))) ? (min(var_11, var_1)) : var_3)) : var_4));
    var_19 = 24;
    var_20 ^= (!var_3);
    #pragma endscop
}
