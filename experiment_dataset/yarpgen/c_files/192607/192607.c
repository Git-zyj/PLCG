/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((399319335 ? 48 : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = min(((((((arr_2 [i_2 - 3]) ? var_2 : (arr_3 [i_0] [i_0] [i_0]))) <= 1))), ((~((max(var_10, var_8))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((((min((arr_3 [i_2 + 2] [i_2 - 1] [i_2 - 1]), (arr_3 [i_2 + 2] [i_2 - 2] [i_2 + 2])))) ? (max((arr_3 [i_2] [i_2] [i_2 + 3]), (arr_7 [i_2 + 1] [i_1] [i_1] [i_2 + 1]))) : (min((arr_7 [i_2 + 3] [i_1] [i_1] [i_2 + 3]), (arr_3 [i_2 + 3] [i_2 + 3] [i_2 + 3])))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((((min(1, 1))) > ((var_8 | (arr_3 [i_0] [i_1] [i_2 - 2])))));
                }
            }
        }
    }
    var_16 = ((((((((1307 << (var_6 - 228408532)))) && var_8))) <= var_14));
    var_17 = var_13;
    #pragma endscop
}
