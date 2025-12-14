/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((max(42, 39))), (min((max(2841602299, 57)), (min(2341442340, -705811673))))));
    var_14 = (max(var_14, 42));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_15 = (max((max(1453364997, 30788)), 2841602287));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = max(30781, 2841602298);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_2] = (max(4280881293, 2841602318));
                        var_17 = (max(70, 1477089762));
                        var_18 = 1537476141;
                        arr_14 [i_0 - 1] [i_2] [i_2] [i_2] = 34754;
                        arr_15 [i_0] [i_1] [i_2] [i_2] = 2841602299;
                    }
                }
            }
        }
        var_19 = (max(var_19, ((max(((max((max(-1, 65451)), 1))), (max(34748, (max(-717492145, 67)))))))));
        arr_16 [i_0] |= (max(2841602318, 65440));
    }
    #pragma endscop
}
