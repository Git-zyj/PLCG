/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 -= (((arr_1 [i_0]) <= 1));
        var_16 = (min(var_16, ((((~(max((arr_0 [i_0]), var_8))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_17 = (arr_3 [i_1] [i_2]);
            var_18 = (max(var_18, var_7));
            var_19 = var_5;
            var_20 = (min(var_20, ((min((arr_8 [i_1] [i_2]), (((((-(arr_8 [i_1] [i_1])))) / (max(1, 1215860152)))))))));
        }
        var_21 = var_12;
    }
    var_22 ^= var_2;
    var_23 = (var_14 && ((max(var_14, ((13405627211736955466 ? 3079107143 : var_10))))));
    var_24 = (min(((max(var_11, (~var_13)))), (max(var_2, var_5))));
    var_25 = ((((((((var_5 ? var_10 : var_7))) ? var_2 : (min(var_9, var_13))))) ? ((((min(var_5, var_9))) ? var_3 : 1322516425)) : var_2));
    #pragma endscop
}
