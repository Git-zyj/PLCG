/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = (var_10 ? var_12 : (max((4294967284 * 65535), 6678)));
    var_19 = 6678;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 ^= ((-((max(((max(var_5, (arr_1 [i_0])))), (arr_2 [i_1]))))));
                var_21 = (max(92, (((~var_11) ? (var_8 > var_16) : (((arr_5 [i_1]) ? (arr_1 [i_0]) : 12404))))));
            }
        }
    }
    #pragma endscop
}
