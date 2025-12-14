/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((min(259302909, -2129968640))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = (((arr_1 [i_0 + 3]) ? ((((10 != (max(18446744073709551587, -9223372036854775800)))))) : ((-(arr_1 [i_0])))));
                var_13 = (((((18446744073709551615 ? 9223372036854775785 : 158))) ? ((((!((var_10 && (arr_0 [i_0]))))))) : (arr_1 [0])));
                arr_5 [3] = ((-(((var_9 && (arr_2 [i_0 + 2] [i_1]))))));
                arr_6 [1] [14] [24] = ((((~(arr_1 [i_0 + 3])))) ? (var_5 | -5055) : (max(((max(0, (-32767 - 1)))), (max((arr_0 [i_0 + 1]), 9223372036854775799)))));
            }
        }
    }
    var_14 -= (min(-10314, (((((max(var_8, var_4)))) / var_0))));
    #pragma endscop
}
