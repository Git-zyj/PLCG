/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((!var_11), var_11))) ? var_11 : (((var_6 != (6799678309864556856 | var_0))))));
    var_16 = (min(var_7, ((((var_5 % var_4) + (var_4 == var_6))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_7 || ((((min((arr_0 [i_0]), (arr_1 [i_0]))) / (((max(var_6, 32762)))))))));
        var_17 = (-2147483647 - 1);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_18 = (((-2147483647 - 1) != (max((((arr_4 [i_1]) + 9609681549749263918)), (arr_4 [i_1])))));
        arr_5 [i_1] = (min(-120, var_10));
        arr_6 [i_1] = (((arr_0 [6]) - (arr_0 [22])));
    }
    var_19 += ((!((((-2147483647 - 1) ? (-2147483647 - 1) : 255)))));
    #pragma endscop
}
