/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(15, 0));
    var_17 &= (((((-((min(var_13, var_9)))))) || ((min(var_11, (~var_6))))));
    var_18 = ((-1950021992861945775 >= var_2) ? (-32758 | 248) : (((((var_6 ? var_11 : 22))) ? var_11 : (((max(var_7, var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_1 [1] [i_0]);
                var_19 = (min(((((var_14 || (arr_0 [i_0 + 2] [3]))) ? (((min((arr_4 [1]), 0)))) : (max((arr_5 [i_0] [21] [i_0 - 2]), (arr_0 [15] [8]))))), (arr_5 [i_0] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
