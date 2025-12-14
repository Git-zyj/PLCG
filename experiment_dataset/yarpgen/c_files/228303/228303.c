/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = 827098412181974765;
        var_16 = (((((~(arr_2 [i_0])))) ? ((((!(32512 | 184))))) : ((205 ? (arr_2 [i_0]) : -62))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((!(71 == 185)));
        var_17 = (~var_8);
    }
    var_18 = ((!536870784) ? ((max(-112, 8))) : (~var_12));
    var_19 = ((-32768 ? 1 : 1));
    var_20 = ((-(127 || var_10)));
    var_21 |= ((((min(-56, (!3758096512)))) && (22 | 549688705024)));
    #pragma endscop
}
