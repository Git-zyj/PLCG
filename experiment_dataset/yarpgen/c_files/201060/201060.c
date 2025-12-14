/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((max(var_5, 4503324749463552)), (~var_10)))) ? ((-((var_6 ? var_4 : 31)))) : ((var_1 ? 20256 : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_3 [i_1] [i_0] [i_0]);
                arr_6 [i_0] [i_0] [i_0] = (((arr_2 [i_0] [i_0] [8]) ? (min((min(var_4, (arr_0 [i_0] [i_1]))), ((min((arr_0 [i_0] [i_0]), var_6))))) : (((var_16 ? 3223186289 : (arr_3 [i_1] [i_1] [i_1]))))));
                arr_7 [i_0] [i_1] [i_0] = 3223186289;
                var_19 = arr_3 [i_0] [i_1] [i_0];
            }
        }
    }
    var_20 = ((~(max(((694374989131810518 ? var_9 : 1878809461571287594)), var_5))));
    #pragma endscop
}
