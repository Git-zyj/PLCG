/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((((((var_0 ? var_12 : var_7))) ? (max(72381303586963035, var_10)) : ((var_1 ? var_2 : var_9)))), var_7);
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (var_8 ? ((((max(9223372036854775807, (arr_4 [10])))) ? ((var_12 ? (arr_2 [i_0]) : 274877906943)) : (max(var_7, var_7)))) : (-9223372036854775807 - 1));
                var_15 = arr_4 [10];
                arr_6 [i_0] [i_1] [i_1 + 1] = ((~-274877906951) ? ((3749397610234834762 ? (arr_4 [i_1 - 1]) : (arr_4 [i_0 + 2]))) : ((var_3 ? 2997499966807993653 : (arr_3 [i_1 - 1]))));
                arr_7 [i_1] = ((((arr_2 [i_0 - 3]) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 2]))) >> (((!(((var_11 ? var_6 : (-9223372036854775807 - 1))))))));
            }
        }
    }
    var_16 = max((((var_6 >= var_3) ? var_1 : var_12)), ((((min(var_4, var_4))) ? -274877906943 : (var_2 / var_12))));
    #pragma endscop
}
