/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [6] = 1780839689545013053;
                    var_14 -= ((-21547 * (var_10 - -4294967295)));
                    arr_10 [i_0] = ((var_4 ? ((((max(54, var_11))) ? (210 | 0) : (((18446744073709551615 ? var_10 : 51014))))) : 1479737752));
                    var_15 ^= ((((((min(var_10, 21530))) ? (((51145 ? -12 : 0))) : (max(var_0, var_12)))) > (((255 ? var_5 : (43968 | 2580394030))))));
                    var_16 = ((673451916 ? 2126655583 : 10422357613075432069));
                }
            }
        }
    }
    var_17 = (((min((var_0 | 7943924360833513964), (13 * var_13))) | var_12));
    var_18 ^= ((-((1078170986855075158 ? (max(7943924360833513964, -748822038564673557)) : -576600386))));
    var_19 ^= (((((!2147483647) ? var_2 : var_1)) | 0));
    var_20 ^= 1000186253408477598;
    #pragma endscop
}
