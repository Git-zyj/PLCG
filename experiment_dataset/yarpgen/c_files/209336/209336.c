/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(183, ((((-32767 - 1) > var_1)))))) ? (!7030573620718376302) : (((var_19 | var_5) ? (1741270829 | 4294967295) : ((14471376167001505503 ? var_7 : 7059008133395761047))))));
    var_21 *= ((((9223372036854775797 ? var_19 : var_6)) >= -var_13));
    var_22 = 2553696466;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_23 ^= 3253702637865272454;
                arr_6 [i_0] [i_0] = 1;
                var_24 = (arr_2 [i_0]);
            }
        }
    }
    var_25 ^= -var_9;
    #pragma endscop
}
