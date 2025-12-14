/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_10));
    var_14 = (min(var_14, (min(43, 2238093099941679011))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(var_15, 2238093099941679013));
        arr_2 [i_0] = (((110 ? 255 : -71272735)));
        arr_3 [i_0] [8] = (arr_0 [i_0]);
        var_16 = (max((((((min(-4203675293486901110, 16208650973767872621))) || 9705299759719700844))), 36));
    }
    var_17 = (max(var_17, (((~((~(min(var_12, 4391411551510293840)))))))));
    #pragma endscop
}
