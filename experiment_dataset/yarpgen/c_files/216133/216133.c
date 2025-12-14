/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65535;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_21 = -26989;
                        var_22 -= (((((arr_2 [i_3 + 1] [i_0]) ? -1 : (((var_2 ? 65507 : 20))))) < (arr_5 [i_0] [i_1] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_23 = (max(var_23, (arr_1 [i_1] [i_2 + 1])));
                        var_24 = 65532;
                    }
                    arr_10 [i_1] [i_1] [i_1] = arr_5 [i_0] [i_2 + 1] [i_1];
                    var_25 = var_17;
                }
            }
        }
    }
    #pragma endscop
}
