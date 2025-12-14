/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((min((arr_2 [i_0] [i_0] [i_1]), (~3937403240)))) ? ((((arr_5 [i_1 + 1] [i_1 + 1]) << var_1))) : ((~(arr_0 [i_0])))));
                arr_7 [i_0] [i_1] = (((~(3937403240 / -2306972065754454965))));
            }
        }
    }
    var_15 *= var_3;
    var_16 = (max((-2147483647 - 1), 1));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    arr_15 [i_4] [4] [i_4] = ((((((~7864320) || 1))) >> ((((~((var_1 ? 58 : 3937403240)))) - 4294967213))));
                    var_17 = max(var_1, ((-(arr_2 [i_3] [i_3 - 1] [i_3]))));
                }
            }
        }
    }
    var_18 = (max(1, 1));
    #pragma endscop
}
