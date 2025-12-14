/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((var_9 ? 4294967276 : var_4))) ? 8 : 2499322634))) ? var_12 : ((((179 <= 2499322634) * var_1)))));
    var_19 = (min(var_19, ((max(2499322626, -67)))));
    var_20 &= (max(((((max(var_17, 58))) ? (max(1795644663, var_16)) : 2499322633)), var_10));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_21 *= ((((((arr_1 [i_0] [i_0 - 1]) ^ var_17))) ? 2499322639 : (((max(20, (arr_1 [5] [i_0 + 2])))))));
        var_22 = (((((2499322630 << (3964 - 3956)))) * (((max(var_3, 1795644661)) / (((max(4, 8))))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_23 = (((-779638913 ^ var_7) ? (max(64685, 13546337990332725465)) : (((-((7025564311852042795 ? -366307396 : 0)))))));
        arr_5 [i_1] = (max(8, 1957419393975349183));
    }
    #pragma endscop
}
