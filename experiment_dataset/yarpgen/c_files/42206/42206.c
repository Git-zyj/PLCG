/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_17);
    var_20 = -94;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] &= var_6;
            arr_6 [i_0] [i_0] |= ((var_9 <= (min((max(374339077675726117, var_9)), ((min(-20242, var_18)))))));
            var_21 = (arr_0 [i_0]);
        }
        arr_7 [i_0] [i_0] = (arr_3 [5]);
        arr_8 [i_0] = (arr_0 [i_0]);
    }
    var_22 = (min(var_2, (5622953620945338466 / var_13)));
    var_23 = var_4;
    #pragma endscop
}
