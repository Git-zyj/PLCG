/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_12 = ((((min((var_7 || 18446744073709551605), (arr_3 [i_0])))) ? ((((arr_3 [i_1]) || 0))) : (((((((arr_3 [i_0]) || (arr_2 [i_1]))) || var_5))))));
            var_13 = (min(var_13, ((min((~-104), (min((arr_2 [i_0]), (arr_1 [i_0]))))))));
            var_14 = (min(var_14, (((+((min((arr_1 [i_0]), var_6))))))));
        }
        var_15 = (max(var_15, (((((max((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [3]) : var_8)), (arr_1 [8])))) ? ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) : (((((3197112097 ? (arr_3 [i_0]) : (arr_2 [i_0])))) ? (arr_4 [i_0] [i_0] [i_0]) : var_3)))))));
    }
    var_16 = var_10;
    #pragma endscop
}
