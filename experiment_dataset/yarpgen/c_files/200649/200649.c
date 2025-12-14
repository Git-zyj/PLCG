/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((16 + 1) > var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (((((~(arr_3 [i_0] [i_0])))) ? (~123) : (max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
        var_13 = (max(var_13, (((var_9 + (~var_8))))));
    }
    var_14 = (min(((((max(-123, var_10))) * ((max(0, 1))))), (((!((max(190, 726602678))))))));
    var_15 = (var_9 < 839613075);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_16 = var_5;
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_17 = 1858862134;
                            var_18 = (arr_4 [i_1]);
                            var_19 ^= (arr_7 [i_2]);
                            var_20 |= 178;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
