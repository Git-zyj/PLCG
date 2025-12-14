/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, -1));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 += ((~(~6)));
        var_17 = ((!(~var_8)));
        arr_2 [i_0] = ((((((212 ? -127 : 0)))) ? 0 : var_9));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 -= (!var_11);
            arr_5 [i_0] [i_0] [i_1] = ((-((1 ? 10 : (((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_0])))))));
            var_19 |= (((arr_3 [i_0]) ? ((var_12 ? var_3 : 1630621706022574187)) : ((~(arr_0 [i_1])))));
            var_20 = var_4;
            var_21 = ((-(arr_4 [i_0] [i_0])));
        }
    }
    var_22 = (((1 ? 105 : (~var_5))));
    #pragma endscop
}
