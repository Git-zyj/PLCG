/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_20 -= -1627136547;
            var_21 = ((!((31 && (arr_1 [i_1 - 2])))));
        }
        var_22 = ((((arr_2 [i_0] [i_0] [i_0]) && ((((-1627136537 + 2147483647) >> (arr_0 [i_0])))))));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_23 *= ((((max(17181, ((max((arr_2 [i_2] [i_2] [i_2]), 8192)))))) ? var_15 : (~243)));
        arr_6 [i_2] = ((((min(94, -1293789151))) && ((max((arr_5 [i_2]), (var_10 && 585998271))))));
    }
    var_24 = (max((!1627136547), var_11));
    #pragma endscop
}
