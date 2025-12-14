/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] = ((((min((arr_4 [i_1 - 2] [i_1] [i_2 - 1]), (arr_11 [i_1 - 2] [i_2] [i_2 - 1])))) || (((arr_11 [i_1 - 2] [i_1] [i_2 - 1]) || -23))));
                        arr_14 [i_0] [i_2 - 1] [i_3] = (min(var_7, ((var_2 * (arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                    }
                }
            }
        }
        var_13 = (((arr_6 [i_0 + 2] [i_0 + 2]) ? (min(21764, (arr_6 [i_0 - 1] [i_0 + 2]))) : (min((arr_6 [i_0 - 1] [i_0 - 1]), -12))));
    }
    var_14 ^= -23;
    #pragma endscop
}
