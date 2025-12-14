/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = (max(-24942, (max((arr_3 [14] [i_1] [i_1]), (arr_4 [i_2 - 2] [i_1 + 1] [i_1 + 4] [10])))));
                    var_11 *= 9299692539022826222;
                    var_12 = (arr_6 [i_1] [i_1 + 4] [i_2 - 3] [i_2]);
                }
            }
        }
    }
    var_13 &= -9208131889654592343;
    var_14 = var_8;
    #pragma endscop
}
