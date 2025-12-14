/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 -= (((!var_13) ? (((var_7 > (arr_3 [i_0] [i_0] [i_0])))) : 107));
                var_18 = (min((!107), (min(8387584, 22176))));
            }
        }
    }
    var_19 = (min(var_19, (((-((((113 ? 107 : 107)))))))));
    var_20 = (var_6 + var_8);

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_21 = (max(var_21, ((min((((arr_4 [i_2]) ? (arr_1 [i_2] [i_2]) : (arr_8 [i_2]))), var_7)))));
        arr_9 [i_2] = (((arr_2 [7] [7]) ? 248 : ((-(arr_8 [i_2])))));
    }
    #pragma endscop
}
