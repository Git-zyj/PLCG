/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((~var_2), (!24298)))) ? ((~((-10 ? var_9 : var_14)))) : (!25)));
    var_21 += (((min(var_1, var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_22 |= (((((((min(0, (arr_5 [i_1])))) ? (((182 ? 1839629015 : var_19))) : (-1839629015 - var_15)))) ? ((((((arr_4 [2] [i_1] [2]) != var_2))) * ((-50 & (arr_6 [10]))))) : ((((((arr_5 [i_1]) ? var_9 : var_5)) > (!1))))));
                var_23 = (max(var_23, (arr_6 [2])));
                arr_7 [i_0] [i_1] = (((((((arr_3 [i_0]) ? 1 : var_12))) ? (arr_6 [i_0]) : ((((arr_1 [1]) != var_4))))));
                var_24 *= 1;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        var_25 = 42573;
        var_26 = ((189 ? 10 : (((-2070234245 ? (arr_0 [2]) : (arr_5 [i_2]))))));
        arr_10 [i_2] = ((-((0 ? 8787704947693520443 : 7702))));
    }
    var_27 = ((((min(((max(var_17, var_7))), ((var_17 ? var_7 : var_2))))) * (max(((((var_11 + 2147483647) << (10 - 10)))), (min(var_5, 66))))));
    #pragma endscop
}
