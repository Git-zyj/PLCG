/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (max(var_14, 1));
        var_15 = (max(var_2, (arr_3 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = (min(var_4, ((-(arr_2 [i_0])))));
        var_16 = (max(var_16, var_9));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {
                        var_17 ^= (arr_8 [i_4 - 2] [i_4 + 1] [i_2 - 1]);
                        arr_14 [i_1] = (min(((((arr_6 [i_1] [i_2 + 2]) != (arr_6 [i_1] [i_2 - 3])))), var_11));
                        arr_15 [i_1] [i_1] [i_3] [i_1] [i_4] [i_1] = ((((var_6 ? 0 : (arr_5 [i_2 - 1] [i_4 - 1]))) & var_0));
                    }
                }
            }
        }
        var_18 += (max((arr_12 [i_1] [i_1]), ((((((((arr_12 [i_1] [i_1]) + 2147483647)) >> (65535 - 65517)))) ? -7412839624550166431 : (((max(-122, 53520))))))));
    }
    var_19 = ((106 ? -110460868 : (((!((max(118, -73))))))));
    var_20 -= (66 || (((var_3 & (!-2)))));
    var_21 = var_13;
    #pragma endscop
}
