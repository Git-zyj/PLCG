/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-6004208782250423752 ? (((!(6004208782250423751 == 802009344)))) : (((((var_1 ? 7 : var_8))) ? (!var_5) : (-127 - 1)))));
    var_17 = (((((((min(var_2, var_5))) % (0 >= -122)))) ? var_4 : 36980));
    var_18 = (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((-8 ? var_5 : -var_15));
                var_20 = (((((arr_1 [i_1] [i_1 - 4]) || (((var_4 ? var_1 : var_9))))) ? ((((arr_1 [i_0] [i_0]) > (((arr_2 [i_0] [i_1] [i_1 - 4]) ? 0 : 18446744073709551615))))) : 37010));
                var_21 = ((18446744073709551602 ? var_3 : (((((((-127 - 1) ? -8 : 0))) ? var_2 : 198)))));
                var_22 = ((((15 << (var_12 + 47)))) ? ((41 ? (arr_2 [i_1 - 2] [i_1] [i_1 - 2]) : (arr_0 [i_1 - 2] [i_1 - 2]))) : var_6);
            }
        }
    }
    var_23 = (((((-5108448467837816828 >= (((19 ? 93 : 25))))))) ^ (min(9, 1)));
    #pragma endscop
}
