/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((0 != 1493039657321345491) == (max((var_16 & var_0), (1553041999 == 1493039657321345498)))));
    var_21 = (((min((min(78, var_5)), 189)) != (16953704416388206118 || 254)));
    var_22 = ((!(((var_19 ? (!var_14) : 41)))));
    var_23 = (((((((16953704416388206147 >> (var_17 + 20411)))) ? 78 : (max(var_18, var_19)))) != ((var_5 ? (var_13 != var_8) : (1493039657321345498 != var_6)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_24 = ((((min(((max(67, 67))), (((arr_0 [i_0]) << (arr_0 [i_0])))))) ? (arr_0 [i_0]) : (min(((0 & (arr_1 [i_0]))), (~-60)))));
        arr_2 [i_0] = (max((((!((max((arr_1 [i_0]), (arr_0 [i_0]))))))), 1493039657321345491));
        arr_3 [i_0] = min((max(-60, (((arr_0 [i_0]) ? -60 : (arr_0 [i_0]))))), (max((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), -255)));
    }
    #pragma endscop
}
