/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_7 > 10553667853102130356);
    var_21 = ((((var_5 == (129 / var_5)))) != var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_2 - 1] = var_3;
                    var_22 = 25277;
                    arr_7 [i_2] = (((((arr_2 [i_2 - 1] [i_2 + 1]) ? (min((arr_4 [i_1]), var_2)) : (~var_18)))) ? ((128 ? var_17 : (arr_2 [i_1] [i_2 - 1]))) : var_7);
                }
            }
        }
    }
    #pragma endscop
}
