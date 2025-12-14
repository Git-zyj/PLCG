/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_12, (max(var_7, (((var_5 + 2147483647) >> (2147483627 - 2147483621)))))));
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_20 = (max(((208 - (arr_1 [i_0] [i_0]))), (((arr_0 [i_0]) & (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = (min((arr_1 [i_0] [i_0]), (((1 > ((11615 ? 199 : 11615)))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((29107 ? 0 : 1))) & ((-3636598424801263687 * ((-5320877874111591352 ? -60 : 3458339050129247170))))));
        var_21 = (((((((max((arr_5 [i_1]), (arr_0 [i_1])))) && 960))) - ((max(((max((arr_0 [i_1]), (arr_0 [i_1])))), var_4)))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((((((arr_3 [i_2] [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_5 [i_2]))) <= (arr_9 [i_2]))));
        var_22 ^= ((3458339050129247183 ? 14185 : 641785129));
        var_23 ^= (((((arr_7 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_7 [i_2]))) + ((((91 >= (arr_5 [i_2])))))));
        var_24 = ((min((max((arr_5 [i_2]), var_6)), (arr_0 [i_2]))));
    }
    #pragma endscop
}
