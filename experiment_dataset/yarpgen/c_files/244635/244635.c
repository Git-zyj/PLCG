/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_0 + 1] = (((((arr_4 [i_0 + 1] [1] [i_1 - 3] [i_2]) ^ (arr_1 [i_0 + 1] [i_1 - 2]))) + ((((arr_1 [i_0 + 1] [i_1 - 2]) != (arr_1 [i_0 + 1] [i_1 - 3]))))));
                    var_18 = (max((min(455049792, 2993187842)), (455049800 < 455049795)));
                    var_19 = (min(var_19, ((((((-15302 ? 174153617 : ((~(arr_1 [i_0] [1])))))) ? (arr_3 [i_2] [4] [i_2]) : (((max(var_7, (arr_0 [6]))))))))));
                }
            }
        }
    }
    var_20 = ((min(var_0, (var_1 | 91))));
    #pragma endscop
}
