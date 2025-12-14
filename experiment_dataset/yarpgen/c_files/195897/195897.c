/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min((arr_1 [1]), (max((arr_0 [i_0]), 32767))));
        arr_2 [i_0] = (!((var_9 != ((-(arr_0 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [4] = ((((max(7067842606849782960, 1))) ? var_12 : (1884650040 + var_13)));
        arr_6 [i_1 + 1] = (max(((min((((arr_0 [i_1 + 1]) ? 1884650019 : var_2)), ((min(var_9, var_1)))))), (arr_4 [i_1 - 1])));
        var_16 = (min(((~(max(var_12, (arr_1 [3]))))), (((-(max(var_11, -1)))))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2 + 1] = -var_6;
        arr_11 [i_2] [1] = (min(((max((arr_3 [i_2 + 1]), ((1884650019 ? 1884650019 : var_2))))), (((arr_1 [i_2 - 1]) ? (arr_1 [i_2 - 1]) : 1))));
        arr_12 [i_2] = 0;
        arr_13 [i_2] = (max((min((arr_1 [i_2 - 1]), (arr_1 [i_2 + 1]))), (((-var_2 * (47 > 3476767495578558214))))));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_17 = (min(var_7, ((((arr_15 [i_3 - 1]) >= 209)))));
        var_18 = (arr_3 [i_3 - 1]);
        arr_17 [i_3] [i_3 - 1] = (min(10151325598507414552, ((((arr_7 [i_3 - 1] [i_3 - 1]) / var_14)))));
        arr_18 [i_3] = ((~(min(14, ((min((arr_7 [i_3] [i_3 + 1]), 1884650024)))))));
        arr_19 [i_3] [4] = ((((((((var_4 ? -2076436778 : var_10))) ? -13550 : (min((arr_9 [i_3 - 1]), var_7))))) == (((((-27 ? var_9 : (arr_7 [i_3] [4])))) ? (((arr_9 [i_3]) ? 1 : 3476767495578558214)) : 9223372036854775807))));
    }
    var_19 = var_7;
    #pragma endscop
}
