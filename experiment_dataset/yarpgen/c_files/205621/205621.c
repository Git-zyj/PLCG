/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 *= ((~(((19783 + -19783) ? ((((arr_1 [i_1]) ? (arr_3 [2] [2]) : (arr_4 [i_0] [i_1])))) : var_1))));
                var_15 -= var_1;
                var_16 = (min(var_16, -1));
            }
        }
    }
    var_17 &= (((min(((var_2 >> (19783 - 19760))), (((1 ? -19805 : -8159260711916985895))))) == (max((127 + var_2), (var_8 >= var_1)))));
    #pragma endscop
}
