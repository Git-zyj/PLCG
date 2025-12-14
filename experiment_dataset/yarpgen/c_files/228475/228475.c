/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 || (-2147483647 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [5] = ((((arr_7 [i_1 + 1] [i_1 + 1] [i_0]) ? var_13 : (((~(arr_6 [18] [18] [i_2])))))));
                    arr_9 [i_0] [i_0] [i_1] &= ((!(((248 ? var_7 : 3844162686)))));
                    var_19 ^= -var_13;
                }
            }
        }
    }
    var_20 = ((~(((-29326 && (~40))))));
    #pragma endscop
}
