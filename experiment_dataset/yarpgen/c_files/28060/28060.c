/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -83681295;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = ((min((arr_1 [i_0]), 83681289)));
        arr_3 [i_0] |= ((((min((arr_2 [i_0] [i_0]), ((min(-42, -20)))))) ? ((min((arr_2 [i_0] [i_0]), 59))) : ((((((arr_0 [i_0]) && 2049077517270984761))) | ((min(121, 1)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (min(18450, 119));
                    var_23 = (min((max(3342, (arr_4 [i_0] [i_1] [i_2]))), ((((arr_4 [i_0] [i_0] [i_0]) || (arr_1 [i_1]))))));
                }
            }
        }
        var_24 = ((8821910461872016197 ? (((((arr_5 [i_0] [i_0] [i_0]) == (min((arr_1 [i_0]), 4294967295)))))) : ((1 ? (arr_6 [i_0] [i_0]) : 0))));
    }
    var_25 = var_14;
    #pragma endscop
}
