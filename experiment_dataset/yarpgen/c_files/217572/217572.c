/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((((max(7286477241314958442, var_7)))));
                    var_13 = (min(var_13, 2134402178));
                    var_14 = ((-1756070518 + (arr_1 [i_0] [i_2])));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] = var_0;
                        var_15 = ((((var_5 ? ((2157445443115912801 ? 7286477241314958463 : -1266)) : (arr_8 [i_3 - 2] [i_1] [i_1 - 1] [i_1] [1]))) == (((-((var_4 >> (19971 - 19942))))))));
                        var_16 &= 6;
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [19] [i_0] [i_1] = (arr_4 [i_2 + 1] [3] [i_2]);
                        var_17 = -11160266832394593174;
                        arr_15 [i_1] [i_1] [i_1 + 1] [i_4] = 288230376151711743;
                    }
                }
            }
        }
    }
    #pragma endscop
}
