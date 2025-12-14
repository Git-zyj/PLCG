/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(((-(var_14 - 2834525990))), ((min(((var_2 ? -183547154 : 61618)), -3913))))))));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_4 [21] [i_0] = ((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : 3924)));
        arr_5 [i_0] = (min(((~(arr_2 [i_0 + 1] [i_0 - 1]))), (min((arr_1 [i_0 - 3]), (arr_0 [i_0 - 3] [i_0 - 1])))));
        arr_6 [i_0] |= (-((((max((arr_0 [i_0] [i_0]), (arr_1 [i_0 - 3])))) ? -974389601 : (~1460441292))));
        var_16 = (max(((max((arr_1 [i_0]), (arr_1 [i_0 - 2])))), ((~(arr_1 [i_0])))));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, 1460441305));
        arr_10 [i_1] [i_1] = (max((((!(arr_3 [13])))), ((min((arr_9 [i_1]), (arr_0 [i_1] [i_1]))))));
    }
    for (int i_2 = 4; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = (max(28, (arr_8 [i_2] [i_2 + 4])));
        arr_15 [i_2] [i_2] = arr_2 [i_2] [i_2];
        var_18 = (min((max((arr_0 [i_2] [i_2 - 2]), (arr_2 [i_2 - 4] [i_2 - 4]))), -217));
    }
    for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] = -31914;
        var_19 = (((~((max(22349, (-32767 - 1)))))));
        arr_19 [i_3] = ((((arr_3 [12]) ? (!var_13) : (max(0, (arr_16 [i_3]))))));
        var_20 -= -6;
        arr_20 [i_3 - 3] = 43186;
    }
    var_21 = (!var_8);
    #pragma endscop
}
