/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_10, var_5))) ? var_15 : (max(var_15, ((var_0 ? 104 : 464))))));
    var_18 = (min((max((~110), 61523)), 61523));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((4026 ? 27 : 45958)))));
                    var_20 = ((+(((((arr_4 [i_0]) != (arr_0 [i_1] [2]))) ? (arr_0 [i_2 - 1] [i_0 + 1]) : (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 1])))));
                    var_21 = ((45939 + ((~((150 ? 26 : (arr_7 [i_0 + 2] [i_1] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_22 = var_0;
    #pragma endscop
}
