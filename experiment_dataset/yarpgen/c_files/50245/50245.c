/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_19 = (((36293 & 36293) > (min(-8727435378350452971, -36))));
                        var_20 = (arr_10 [1] [1] [i_2] [i_3 - 2]);
                        arr_13 [i_1] [i_3] [i_3] [i_1] [i_1 + 4] = (arr_0 [i_3 - 1]);
                        arr_14 [i_0] [i_0] [i_1 + 4] [i_3] [i_3 - 1] = (arr_1 [i_0]);
                    }
                    var_21 = ((6343 ? ((+((var_11 ? (arr_7 [i_0] [i_2] [i_0] [i_0]) : 11145)))) : (!var_11)));
                }
            }
        }
    }
    var_22 = var_16;
    var_23 *= (min(var_5, ((((min(1472831865858863685, var_6))) ? 3 : 0))));
    #pragma endscop
}
