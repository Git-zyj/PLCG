/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = -3499629994;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = -17917;
                    var_17 = 1997790948;
                }
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    var_18 += (!65514);
                    arr_10 [i_0] [i_1] [i_0] = -0;
                    var_19 += (!2780752888139901633);
                    var_20 = 24;
                    arr_11 [i_0] [i_1] = 0;
                }
                arr_12 [i_0] [i_0] = (-9223372036854775807 - 1);
                var_21 = 651348648;
            }
        }
    }
    var_22 = 3539944481;
    var_23 = (max(var_23, var_10));
    #pragma endscop
}
