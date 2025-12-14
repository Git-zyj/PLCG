/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!(!28672));
                var_11 = -28672;
                arr_5 [i_0] [6] &= ((18446744073709551615 ? 1500473623 : ((28671 ? (max(2794493654, 0)) : 12))));
                var_12 ^= (18446744073709551615 > 18446744073709551598);
                arr_6 [i_0] = (((((!11534100138129228478) < 40)) ? 179 : -4044562019104210722));
            }
        }
    }
    var_13 += ((16 > (((var_5 ? -1 : var_9)))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            {
                var_14 ^= (15 || 2097151);
                arr_11 [i_2] [i_2] [i_2] = ((((var_9 ? -2097149 : -8604060400455628909))));
            }
        }
    }
    #pragma endscop
}
