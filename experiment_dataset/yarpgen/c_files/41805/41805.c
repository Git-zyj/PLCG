/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 3136301503541679856;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = ((min(((17134890898288103820 ? 786432 : 15310442570167871736)), (((arr_1 [i_0]) ? (arr_0 [7]) : (arr_1 [i_0]))))) == 3136301503541679865);
        arr_2 [i_0] = max(3136301503541679886, (min((min((arr_1 [i_0]), (arr_0 [i_0]))), (((10491742479554898022 == (arr_0 [i_0])))))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = 1;
            arr_6 [i_0] = (min(85, 10491742479554898001));
            var_15 = (max(var_15, (((-(arr_4 [i_0] [18] [18]))))));
        }
    }
    var_16 = var_3;
    var_17 = (max(var_17, (((1 ? (((((11196120296881043659 >> (68 - 14)))))) : ((((max((-9223372036854775807 - 1), 77))) ? 4503599625273344 : (((1 ? -1 : -1))))))))));
    var_18 = 18442240474084278265;
    #pragma endscop
}
