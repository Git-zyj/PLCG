/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((arr_0 [i_0]) <= -403005392);
        var_16 = ((1 ? 0 : 403005379));
        var_17 = (arr_1 [9]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = (min((4202555771 && 63), (arr_3 [i_1] [i_2])));
            var_19 *= ((1667001842 <= (((arr_4 [i_1]) - (arr_7 [i_1] [i_2])))));
            arr_8 [i_1] [20] [i_1] = -61;
        }
        var_20 = ((min(4202555768, (~524288))) < (arr_2 [8] [i_1]));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((max((92411524 <= var_14), ((var_14 ? 590229964 : 1)))) >= (((((max(var_10, (arr_7 [i_3] [i_3])))) ? -47 : ((((arr_4 [i_3]) < (arr_7 [i_3] [i_3])))))))));
        var_21 = arr_7 [i_3] [1];
    }
    var_22 = var_7;
    var_23 = (var_6 / var_10);
    #pragma endscop
}
