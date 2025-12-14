/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_14 = (7213437058807127058 ? -var_2 : (16929 / 9846356789975820043));
                    arr_10 [i_0] [i_1] [i_2] = (!-1036048424);
                }
                var_15 = 16945;
                var_16 *= (max(16929, (0 & 255)));
                var_17 = (min(var_17, ((((max((arr_7 [i_1] [i_1] [i_1]), (arr_1 [i_1])))) ? 0 : (arr_9 [i_0])))));
                var_18 = (((~(arr_6 [i_0] [i_1] [i_1] [i_1]))));
            }
        }
    }
    var_19 = var_3;
    var_20 = 8485200611536890999;
    #pragma endscop
}
