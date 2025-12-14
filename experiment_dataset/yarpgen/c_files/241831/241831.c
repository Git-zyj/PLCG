/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_10));
    var_18 = ((var_0 ? (((!((max(8325828995783531770, var_10)))))) : var_16));
    var_19 += ((((max(var_5, var_9))) ? ((-((var_9 ? var_4 : 112)))) : (((max(var_9, -4011929061424321310))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (((~129) ? (((+(((arr_2 [i_1]) ? var_4 : 0))))) : ((((min(var_1, var_12))) ? var_9 : var_5))));
                var_21 = ((-(var_12 ^ var_4)));
                arr_8 [i_0] [i_1] [2] = ((((max(((var_12 ? var_14 : -8325828995783531770)), (!104)))) ? ((var_2 ? ((((arr_4 [i_1] [i_0]) ? 98 : var_3))) : ((var_10 ? var_13 : -581911236774635836)))) : (((!var_10) ? var_0 : (-55 - var_11)))));
                arr_9 [i_0] &= ((!(((max(var_5, var_15)) > var_10))));
            }
        }
    }
    #pragma endscop
}
