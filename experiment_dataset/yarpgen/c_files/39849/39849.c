/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (min((arr_4 [i_2] [i_2] [i_1 - 1]), (arr_4 [i_0] [i_0] [i_1 - 1])));
                    var_17 = (((((~(arr_4 [i_1 - 2] [i_1 - 2] [i_1 + 1])))) | ((64343 ? 18446744073709551606 : 32767))));
                    arr_9 [i_0] [i_0] = (!-var_13);
                }
            }
        }
    }
    var_18 = (!var_7);
    #pragma endscop
}
