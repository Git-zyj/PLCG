/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? ((min((!11719325498315257897), 14398963427723389999))) : (!var_1)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = (min(((((arr_0 [i_0]) ? (arr_0 [i_0]) : 51217))), 1244081091));
        arr_2 [i_0] = (max((((-(min(var_9, (arr_1 [i_0])))))), (max((arr_1 [i_0]), -4047780645986161606))));
        var_12 = ((+((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_13 = (max((((!(((-18 ? 17 : 65527)))))), (max(((8650032350207580531 | (arr_5 [i_1]))), ((min((arr_4 [i_1]), var_5)))))));
        var_14 = ((((max((arr_1 [i_1]), var_8))) ? (((((-2147483647 - 1) ? (arr_1 [i_1]) : -2)) << (((arr_0 [i_1]) - 14599)))) : (((-2 >> (((~65535) + 65564)))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_15 = (((arr_5 [i_2]) - (min((arr_4 [i_3]), (max(var_2, 2305843009213693952))))));
                var_16 *= (((((~(arr_5 [i_3])))) ? -1099590894 : ((((arr_5 [i_3]) ? 5857 : 43443)))));
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
