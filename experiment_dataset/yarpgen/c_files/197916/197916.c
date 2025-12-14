/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (1801479856 ^ 2215);
        arr_3 [4] = (max(1801479857, (((arr_0 [i_0]) / (arr_0 [i_0])))));
        var_20 -= ((~(arr_1 [i_0])));
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (max(var_21, (((57 ? 5553722050129940880 : 1)))));
        var_22 = (((~((2150711170 >> (61677 - 61675))))));
        var_23 = (min(var_23, (arr_5 [i_1])));
        arr_6 [i_1] [i_1] |= (max(((817174229 ? 2131480468 : 4294967295)), 3801926280));
    }
    var_24 = -1801479871;
    #pragma endscop
}
