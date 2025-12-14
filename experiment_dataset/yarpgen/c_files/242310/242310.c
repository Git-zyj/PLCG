/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (arr_3 [i_0] [i_0] [i_1]);

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_15 = (max((((143 <= (arr_0 [i_0])))), (arr_6 [i_0 - 2] [i_0] [i_2])));
                    var_16 += (((1 * (max(-2322268292961854263, (arr_4 [0] [i_2]))))));
                    arr_7 [i_0] [4] [i_2 + 1] [i_0] = ((var_2 % (((arr_3 [i_1 - 1] [i_1] [i_2 - 1]) ? (arr_3 [i_1 + 1] [i_1 + 1] [i_2]) : -5318786528861425105))));
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    var_17 = (arr_2 [i_3]);
                    var_18 = -5318786528861425126;
                }
            }
        }
    }
    var_19 = max(((var_11 * ((max(var_9, var_8))))), var_6);
    var_20 += (min(-var_5, (max((max(-303459063762153593, -5318786528861425126)), var_7))));
    #pragma endscop
}
