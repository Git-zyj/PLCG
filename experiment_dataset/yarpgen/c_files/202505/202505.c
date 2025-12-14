/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (max(var_1, ((max(var_16, 13)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (((((arr_5 [i_0] [i_0] [i_0 + 1]) || (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) ? (arr_5 [i_0 - 1] [i_0] [i_0 - 1]) : (arr_5 [7] [i_1] [i_0 - 1])));
                var_21 = ((!(((-(max(15084839998587229435, 3361904075122322198)))))));
                var_22 *= (min(((((max(18446744073709551607, var_7))) ? ((15084839998587229417 ? var_12 : 3361904075122322198)) : (((min((arr_0 [i_0]), (arr_0 [8]))))))), 3361904075122322178));
                arr_7 [i_0] [i_1] = var_14;
            }
        }
    }
    #pragma endscop
}
