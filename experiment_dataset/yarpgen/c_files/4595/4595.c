/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min((~9223372036854775776), var_4)))));
    var_17 &= (!var_6);
    var_18 = (min(var_18, ((max((((~var_7) ? (var_1 ^ var_9) : (~-12939831))), ((((min(8962679770705574856, 9223372036854775767)) < (min(-9223372036854775776, var_12))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1])))) ? var_12 : ((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))))));
                    var_19 = -12939834;
                }
            }
        }
    }
    #pragma endscop
}
