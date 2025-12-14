/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (2282223161412379784 ? 183 : 20283);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_2] [i_2] [i_0] = (+(((((var_0 ? (arr_3 [i_2]) : -20282))) ? 16164520912297171831 : 2282223161412379784)));
                    arr_8 [i_0] [i_2] = ((((var_9 < (arr_6 [i_0 + 3] [i_2 - 2] [i_2 - 1])))));
                }
            }
        }
    }
    var_11 |= 23;
    #pragma endscop
}
