/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 24;
        var_20 = 240;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = ((~((((arr_1 [i_0] [i_1]) > 180)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 -= (((((232 & (min(-1503, 5130197590751691651))))) ? (!227) : (189 - 215)));
                        var_22 += 0;
                        arr_11 [i_1] [i_1] [20] [i_3] = (max((min((arr_2 [22] [22] [i_1]), (((5069165518915845136 ? 180 : -1))))), ((min(((7566720930742968117 ? 13 : -1)), 262143)))));
                    }
                }
            }
        }
        arr_12 [i_0] = ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [22]) - (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
        var_23 = ((-13 & (~13762)));
    }
    var_24 = var_15;
    var_25 = -1;
    var_26 = ((min((max(var_6, 48)), var_8)));
    #pragma endscop
}
