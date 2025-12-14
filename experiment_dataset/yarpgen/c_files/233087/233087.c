/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (~9007199254609920);
        var_11 = (((var_2 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))));
        arr_3 [1] = ((~(max((((arr_1 [i_0]) ? 34357641216 : var_8)), 34357641199))));
    }
    var_12 = var_0;
    var_13 = (~-var_8);
    var_14 = ((((((~var_7) ? var_3 : var_9))) | var_6));
    var_15 *= var_10;
    #pragma endscop
}
