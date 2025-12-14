/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_5, var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((var_7 ? 1 : (arr_1 [i_0])))) ? ((max((~-117), 1))) : (arr_1 [i_0])));
        var_16 *= ((((85 || (arr_1 [8]))) ? (((!((((arr_0 [i_0]) ? 1 : (arr_1 [0]))))))) : (((arr_0 [7]) ? (arr_0 [i_0]) : var_7))));
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) ? ((((max(62, (arr_2 [i_0] [i_0])))))) : (max((arr_1 [i_0]), (((!(arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_5 [i_1] [i_1]) & (((max(1, -1))))));
        arr_9 [i_1] [i_1] = (8290209559021719623 ? (((arr_5 [i_1] [16]) / -1011140406477487920)) : (!var_10));
        arr_10 [i_1] [i_1] = (arr_7 [i_1]);
        arr_11 [i_1] [i_1] = ((1378820041 ? 1243968202 : ((((arr_6 [i_1]) + (~1))))));
    }
    var_17 = var_14;
    var_18 = var_9;
    #pragma endscop
}
