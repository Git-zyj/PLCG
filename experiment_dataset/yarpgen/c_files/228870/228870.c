/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = (!((min((arr_4 [i_1 + 1] [i_1 + 3] [i_2 - 1]), (arr_6 [i_1 + 1] [i_1 + 3] [i_2 - 1])))));
                    arr_8 [i_2] [i_1] [i_1 + 1] [i_2] = 87;
                    var_11 = (max(var_11, ((((((~(arr_4 [i_2 - 1] [i_1 + 1] [i_1])))) ? -19004 : (((((min(-6040, -6029)))) % -6920381854815848326)))))));
                    var_12 = -6055;
                }
            }
        }
    }
    var_13 ^= ((((28129 ? var_9 : var_1)) < var_0));
    #pragma endscop
}
