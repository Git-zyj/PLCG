/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((1539 ? var_16 : var_1))) ? var_3 : (((min(((max(var_1, -1540))), var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] = (min(1539, (((var_8 + var_12) ? ((var_12 ? 65535 : (arr_3 [i_0 - 2]))) : (arr_2 [i_0 + 1])))));
                arr_5 [i_0] [i_0 + 1] = (min((((3143353583 ? var_14 : (arr_1 [i_0])))), (((var_6 <= (((arr_0 [i_0] [i_1]) + var_5)))))));
            }
        }
    }
    var_18 = (((((min(63, var_7)))) ? (((4362978392508291435 ? (max(1151613712, 54)) : (((max(1, 65535))))))) : ((var_3 ? (max(var_13, var_3)) : (var_14 >= 1)))));
    #pragma endscop
}
