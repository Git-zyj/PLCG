/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 35));
    var_15 += var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (arr_1 [i_1 + 3]);
                    var_17 = (min(var_17, (((((((-(arr_0 [21]))))) && ((min((89 ^ 1156287412), (arr_8 [4])))))))));
                    var_18 = (min(var_18, (((99 ? -1156287413 : var_8)))));
                    var_19 = ((var_13 >= (!-1156287390)));
                    var_20 = (arr_7 [i_0]);
                }
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}
