/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((1871317342 ? (max((~var_5), 18446744073709551597)) : 5190)))));
    var_15 = (max(var_9, (((((796869837 ? -134217728 : 255))) ? (~1693270041) : 796869843))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = ((9223372036854775795 >= (((var_11 ? var_6 : 245)))));
                var_17 = (max(((1693270044 ? (arr_2 [i_0 - 1]) : 0)), ((min((arr_2 [i_0 - 1]), var_3)))));
                var_18 = (arr_5 [i_1] [i_0]);
                var_19 = (max((~var_5), var_8));
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
