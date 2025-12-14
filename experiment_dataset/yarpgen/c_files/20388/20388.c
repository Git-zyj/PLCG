/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (max(((0 ? var_8 : var_0)), var_10));
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [0] = ((((-(arr_5 [i_0] [2]))) < (((max(var_10, (arr_1 [i_0] [5])))))));
                arr_8 [i_0] = ((17444777315246292222 && ((max(2557123088788134587, (arr_2 [i_0]))))));
            }
        }
    }
    var_15 = max(((max(((var_6 ? var_7 : 1)), (~var_8)))), (((16 != 2557123088788134572) ^ (max(7100754140163432604, var_12)))));
    var_16 = (((((-107 ? (963082119 ^ var_2) : var_7))) ? var_11 : var_1));
    #pragma endscop
}
