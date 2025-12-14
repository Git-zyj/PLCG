/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (-1 <= 2140315945)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 += max(((min(((((arr_5 [i_0]) >= (arr_5 [i_0])))), (arr_0 [i_0 + 1] [i_1])))), (((((((arr_4 [i_1] [19]) > 1515706351947148501)))) + (max(3247676420, 560515784)))));
                var_13 = (min(var_13, (((((((~(max((arr_5 [i_0]), (arr_6 [i_0 + 1] [i_1]))))) + 9223372036854775807)) << ((((~(arr_6 [i_0 - 2] [i_0 + 1]))) - 55905626)))))));
                var_14 = ((((max((arr_5 [i_0 - 1]), (!0)))) && ((((((arr_5 [i_0 - 1]) + 9223372036854775807)) << (((max((arr_0 [i_0] [5]), 33)) - 1307501907)))))));
                var_15 = ((((!1767877676) << ((((15 ? 1048575 : 714810424)) - 1048558)))));
                arr_7 [i_0 - 1] = arr_0 [i_0 - 2] [i_1];
            }
        }
    }
    var_16 += ((!(((min(var_3, var_3))))));
    #pragma endscop
}
