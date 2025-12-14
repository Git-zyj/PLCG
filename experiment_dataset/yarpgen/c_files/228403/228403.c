/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 >> ((((var_1 << (var_6 % var_5))) - 2644214321522933736))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_3] [i_1] [i_3] = (~var_1);
                        arr_10 [i_0] [i_1] [i_3] [i_2] = (max((~146), (min(43092288, (arr_4 [i_0])))));
                        arr_11 [i_3] [0] [i_1] [i_3] = 65535;
                        arr_12 [i_3] [i_2] [i_1] [i_3] = ((var_1 < (var_7 & var_7)));
                    }
                    var_12 = 9518116158059606907;
                }
            }
        }
    }
    #pragma endscop
}
