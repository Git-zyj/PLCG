/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (((((arr_3 [i_0]) ? ((((arr_0 [2]) || (arr_0 [i_1])))) : ((((arr_0 [i_1]) && 28538)))))) ? (~var_9) : (((arr_5 [i_0] [i_1]) / (((min(-8719, 53688)))))));
                var_18 = ((((max(8709, var_12))) % ((max(var_12, var_13)))));
                var_19 = (((((arr_1 [i_0]) ? (arr_2 [i_0]) : var_6)) >> ((((var_3 ? (arr_1 [i_0]) : (arr_2 [i_0]))) + 128))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_20 = 1;
                    var_21 = 8719;
                }
            }
        }
    }
    var_22 = (28538 >= -8712);
    var_23 = (min(var_23, ((((((var_13 ^ 8719) ^ var_1)) & var_5)))));
    var_24 ^= (var_10 & var_1);
    #pragma endscop
}
