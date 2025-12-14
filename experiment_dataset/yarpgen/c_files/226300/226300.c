/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [11] [0] [i_1] [i_1] = (max(7580490684958993809, 7580490684958993809));
                    var_21 ^= (min(((((((var_13 ? var_5 : var_12))) != (min(var_12, 4207568316))))), (((87398966 * (arr_5 [8] [i_1 - 1] [8]))))));
                    arr_9 [i_0] [i_1] [i_1] = ((((max((arr_1 [i_1 - 2] [i_1 - 1]), 87398966))) && ((max(-1, (arr_1 [i_1 - 2] [i_1 - 1]))))));
                    var_22 = 87398966;
                }
            }
        }
    }
    var_23 -= ((((~(-7580490684958993809 % var_1))) != var_14));
    var_24 &= (~(max(430417103, 18446744073709551590)));
    #pragma endscop
}
