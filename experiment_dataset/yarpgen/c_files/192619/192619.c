/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        var_14 = (min(var_14, ((max(-8095674319523664035, ((((arr_0 [10]) ? var_11 : (arr_0 [1])))))))));
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        var_15 = (max(0, (arr_2 [i_1 + 2] [i_1 + 3])));
        var_16 = (max((arr_6 [i_1]), var_4));
        arr_7 [i_1] = 8095674319523664035;
        var_17 = min((((((((arr_6 [i_1]) && (arr_5 [i_1])))) == 1))), ((-var_6 ? (22 == var_10) : (arr_6 [i_1]))));
    }
    var_18 = (max(((((max(var_9, var_11))) * var_2)), 24019));
    var_19 = (((65532 ? 10351069754185887596 : var_12)));
    var_20 = (min(var_20, (((var_4 ? var_7 : ((max(((var_3 ? var_6 : var_9)), (~var_11)))))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_21 = ((((((arr_10 [i_2 - 1]) > 93))) > ((min((arr_10 [i_2 + 1]), (max((arr_11 [i_2]), (arr_9 [i_2]))))))));
                var_22 = (max(var_22, ((min((((arr_9 [i_2 - 1]) > (arr_10 [i_3]))), 1)))));
            }
        }
    }
    #pragma endscop
}
