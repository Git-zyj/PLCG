/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_14 = 10;
            var_15 = min((((((~(arr_5 [i_0 - 1] [5])))) ? ((-(arr_2 [i_0] [i_0]))) : (((!(arr_4 [i_0] [i_0] [1])))))), (arr_2 [i_1] [i_0]));
            arr_6 [i_0] [i_1] = (~16848918903623271246);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_16 = ((((max(((1486120265 ? 30281 : (arr_3 [i_0] [i_0]))), ((-(arr_7 [i_0])))))) ? (min((arr_1 [i_0]), (((arr_7 [i_0]) ? (arr_4 [i_2] [i_2] [i_0]) : (arr_2 [i_0 + 1] [i_2]))))) : (((-((min((arr_0 [i_0] [i_0]), (arr_3 [i_0] [i_0])))))))));
            arr_9 [i_2] |= (arr_4 [i_0] [i_0 + 2] [6]);
        }
        var_17 |= ((((arr_3 [16] [16]) ? (arr_3 [0] [0]) : (arr_8 [i_0 - 1] [i_0 - 1]))));
    }
    var_18 = 1847425375;
    #pragma endscop
}
