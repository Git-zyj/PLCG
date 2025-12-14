/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_1] [15] [i_0] [i_3] = ((~(min(((max(7938, var_3))), (~1568488198563108663)))));
                        var_19 = ((!((!(arr_1 [i_0])))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 = ((~(~1)));
                            var_21 = (min(var_21, (max(((min((!74), 1))), ((~(max(1396020540, -3069054248196318187))))))));
                            var_22 = (max(var_22, ((!(((~(min(var_0, var_16)))))))));
                        }
                        var_23 += (min((max(((min(182, 192))), (min(var_18, (arr_3 [i_3] [i_2]))))), 56));
                        var_24 = (min(var_24, (((!((((max(-23761, 110))))))))));
                    }
                }
            }
        }
        var_25 *= (min((((!(~2268810030)))), (min((arr_1 [21]), var_10))));
    }
    var_26 = (max(var_26, -var_5));
    var_27 = ((!((min(((min(1, 126))), (min(110, var_10)))))));
    #pragma endscop
}
