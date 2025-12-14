/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((~(((-32756 + 2147483647) >> (3717437821411736546 - 3717437821411736529)))));
                    arr_10 [i_1] [i_1] = (((21640 * (((arr_7 [1] [i_1] [i_1] [i_0]) ? 18446744073709551607 : -21641)))));
                }
            }
        }
    }
    var_20 = var_1;
    var_21 = ((var_14 ? ((((max(var_4, 9223372036854775807))) + (max(18446744073709551615, -897772900)))) : (((max(8442761307349299550, var_1))))));
    #pragma endscop
}
