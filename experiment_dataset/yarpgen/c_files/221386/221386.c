/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [1] [6] [8] = ((14638656071095388580 << (((max(var_7, var_7)) - 65453))));
                var_16 = (min(var_16, (var_13 * var_6)));
                arr_6 [i_1] = ((((-(((var_12 == (arr_1 [i_0])))))) / (arr_4 [13] [i_1])));
                arr_7 [i_1] [13] = ((-(~401612283084508077)));
            }
        }
    }
    var_17 = (((((max(5011485193942793432, 0)))) ? var_4 : (((((var_0 ? 1 : var_1))) ? var_5 : var_12))));
    #pragma endscop
}
