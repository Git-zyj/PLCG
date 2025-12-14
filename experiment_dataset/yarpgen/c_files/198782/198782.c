/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(((min(9223372036854775807, (arr_0 [i_0])))), 1152921504606846720));
        var_17 ^= ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (max(var_4, var_14)) : ((((((4294967281 ? 5895 : 31)) > ((min((arr_0 [i_0]), (arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = ((((+((136 ? (-9223372036854775807 - 1) : -32)))) | ((((min(1771935460, 1)))))));
                    var_19 = 167;
                }
            }
        }
        var_20 = ((max(((-(arr_6 [i_0] [i_0] [i_0]))), (arr_2 [i_0] [i_0] [i_0]))));
        var_21 += (((2523031843 >= 4095) ? -2 : 0));
    }
    #pragma endscop
}
