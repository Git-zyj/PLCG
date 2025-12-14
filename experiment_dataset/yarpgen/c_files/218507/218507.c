/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = (min((min(-3994, var_15)), -3974));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((((min(3991, var_9))) || var_16)));
                arr_4 [i_0] [i_1] = ((((min(((~(-9223372036854775807 - 1))), (max((-9223372036854775807 - 1), var_9))))) ? (((((var_15 ? -3973 : (arr_2 [i_0] [i_0])))) ? (var_5 >= -3993) : var_4)) : -3994));
                var_21 = ((!((max(((-(arr_3 [i_0] [i_0]))), ((max(3992, var_16))))))));
            }
        }
    }
    var_22 = (((max((3973 & var_14), (-3993 > var_13))) > ((-4016 ? -4016 : 3992))));
    var_23 = (~var_12);
    #pragma endscop
}
