/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (max(var_2, (((!(arr_0 [i_1 - 2] [i_1]))))));
                    arr_10 [i_0 + 1] [i_1] [i_2] = ((!((min(((var_0 >> (18446744073709551615 - 18446744073709551615))), (arr_4 [i_1 + 1] [i_0 - 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
