/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 -= ((((((arr_2 [i_1] [i_1] [i_0]) * (arr_2 [i_1] [i_0] [i_0])))) ? ((~(!32767))) : (((var_16 + 2147483647) >> (((arr_4 [i_1]) + 12))))));
                var_18 = (!807545373935520759);
                var_19 = min(((var_1 ? (min(32761, 67108863)) : (arr_4 [i_0]))), var_10);
            }
        }
    }
    var_20 = (((((((69 ? var_8 : var_13)) == var_15))) % (var_14 || var_1)));
    #pragma endscop
}
