/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (arr_6 [15] [i_1] [15] [17]);
                    var_22 = min((arr_1 [i_2]), (arr_3 [i_1 + 1] [i_2]));
                    arr_7 [i_0 - 2] [i_0 + 3] [i_0] [i_2] = (arr_0 [i_0 - 3]);
                }
            }
        }
    }
    var_23 = 3920613434;
    var_24 = -12700;
    var_25 = -8499066214607827181;
    #pragma endscop
}
