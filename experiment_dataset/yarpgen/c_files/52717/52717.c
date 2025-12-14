/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((-(((!((min(2758024587217259167, (arr_0 [i_1] [i_2])))))))))));
                    arr_6 [i_1] = (min((arr_2 [i_1 + 3] [13]), ((((3928488278 & 3143587686) >= ((((var_1 != (arr_1 [19]))))))))));
                }
            }
        }
    }
    var_19 = (((((max(var_15, var_7)) >> (var_14 - 14733))) >= var_14));
    var_20 = var_0;
    var_21 = var_4;
    #pragma endscop
}
