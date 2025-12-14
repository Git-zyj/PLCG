/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 253;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((((var_4 ? 5 : (47 - var_4)))) ? ((((21 ^ var_3) || (var_0 / var_8)))) : (max(((max(-243, var_9))), var_1))));
                    var_11 = (~-23095);
                    arr_10 [i_0] = -var_6;
                    var_12 = -6592531220245910674;
                }
            }
        }
    }
    #pragma endscop
}
