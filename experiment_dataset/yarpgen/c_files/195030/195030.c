/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((+(max(((6569351073755731394 ? (arr_1 [i_0]) : var_6)), (arr_0 [i_0] [i_0])))));
        var_10 = (max(var_10, var_9));
        arr_5 [i_0] [i_0] = ((((arr_0 [i_0 + 1] [i_0 + 1]) ? 4016692026 : (arr_0 [i_0 + 1] [i_0]))));
        var_11 += ((!((min((max(11877392999953820221, var_9)), (((11877392999953820222 ? 1 : (arr_0 [i_0] [i_0])))))))));
    }
    var_12 = var_4;
    var_13 = (min(var_13, (((((max(var_9, var_3))) ? (((~var_6) ? 10206469712676831576 : var_8)) : ((-((-1 ? 18446744073709551615 : var_3)))))))));
    var_14 = ((((max(11877392999953820221, 13442562715238112581))) ? var_7 : ((((min(var_1, 0))) ? 16 : ((-16931 ? 1 : 6569351073755731397))))));
    #pragma endscop
}
