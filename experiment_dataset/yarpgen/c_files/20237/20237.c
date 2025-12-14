/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 -= (((((((((arr_1 [16]) && 88)))) + 18446744073709551615))) && (arr_6 [i_0 - 1] [4]));
                    var_16 = (min(var_16, var_8));
                    var_17 = (max(var_17, var_14));
                    var_18 = (min((min(7680085259796173357, 1)), ((((~var_10) != (~var_10))))));
                }
            }
        }
    }
    var_19 = (max(var_19, var_4));
    var_20 = (var_4 | var_7);
    #pragma endscop
}
