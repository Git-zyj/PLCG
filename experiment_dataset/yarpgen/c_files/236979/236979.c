/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 123;
    var_11 = (max((max((min(var_8, var_7)), ((min(var_5, var_3))))), ((((-11 + 2147483647) << (133 - 133))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = 185;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 = (~var_6);
            arr_5 [i_0] = var_9;
            arr_6 [i_1] = ((!((133 && (arr_2 [i_0])))));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_14 = ((-82 ? (arr_7 [i_2]) : var_9));
            var_15 = ((3437351239063740884 / (arr_8 [i_2 + 2] [i_2])));
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_16 = (arr_0 [i_3]);
        arr_13 [i_3] = (((((((arr_0 [i_3]) * 3225)) >= ((var_4 ? 96 : var_3)))) ? (max(var_4, (max(19539, 2101846825337772713)))) : ((max((((12050 ? -4546 : -24))), var_7)))));
    }
    var_17 = ((var_5 >= (((var_5 && (var_4 <= 1))))));
    #pragma endscop
}
