/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 |= (((arr_4 [i_2 + 1]) < (var_8 <= 21912)));
                    var_16 = (max(var_16, (((!(((var_3 ? 16376554138528900916 : (arr_2 [i_1 + 1])))))))));
                }
            }
        }
    }
    var_17 *= var_1;
    #pragma endscop
}
