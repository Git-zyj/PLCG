/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_13 ? (max(var_6, var_7)) : (!var_9)))) ? 18446744073709551608 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 ^= ((((min(((var_2 ? var_11 : -8988201438289158799)), (((arr_0 [i_0]) ? 524287 : var_9))))) && ((min(((16 ? -6325957267575549141 : 18446744073709551600)), 18446744073709551609)))));
                var_17 ^= (((arr_1 [4]) ? (((arr_0 [i_0]) - (arr_0 [i_1]))) : (((arr_0 [i_0]) ? var_14 : (arr_0 [i_1])))));
                var_18 ^= (max(((min((((arr_3 [i_1]) ? (arr_1 [8]) : var_3)), var_5))), (min(-7966188280663404194, (-32767 - 1)))));
                var_19 = (((((var_5 >= (arr_2 [i_1])))) > ((var_6 ? (arr_2 [i_1]) : (arr_2 [i_0])))));
                arr_5 [i_0] [i_0] = 1450785433847814125;
            }
        }
    }
    var_20 |= var_2;
    #pragma endscop
}
