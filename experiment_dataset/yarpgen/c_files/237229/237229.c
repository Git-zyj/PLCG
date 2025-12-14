/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((min(var_4, 0))) && 6149)), ((((32314 ? 65531 : 13650)) > (53024 % 33233)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 |= (((arr_0 [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((12387 ? var_6 : 65241))));
        var_13 = (max(var_13, (((!((((arr_0 [i_0]) & (arr_0 [i_0])))))))));
        arr_2 [i_0] [0] = ((((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((65535 ? 15 : 22443)))) * (((((arr_1 [3]) ? (arr_1 [i_0]) : (arr_0 [i_0])))))));
    }

    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1 - 1] = ((1 ? 39050 : (24576 != 49845)));
        var_14 = (min(((max((arr_6 [i_1]), (arr_4 [i_1 - 1])))), (max(((44395 ? 48776 : 24576)), (1418 * 0)))));
    }
    #pragma endscop
}
