/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (min((((var_9 ? var_4 : var_0))), (((var_5 & var_6) / -1149251833))));
    var_11 = (min(-var_1, (((-523264 ? (var_6 & var_2) : ((698205944629129555 ? var_2 : var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (min(var_12, var_5));
                arr_4 [i_0] [0] [1] = var_0;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_13 = (min(var_13, ((min(123, 17748538129080422061)))));
                    var_14 = min(var_4, (min(-64479197, var_5)));
                    var_15 ^= (((min((min(17748538129080422060, (arr_0 [i_0]))), var_9))) ? (min((((10808407483514992194 ? 2684770883 : var_0))), ((-967815506204499763 ? var_8 : var_0)))) : (((var_3 >> (-967815506204499763 + 967815506204499764)))));
                    var_16 = (min(var_16, var_8));
                }
            }
        }
    }
    #pragma endscop
}
