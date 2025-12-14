/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [5] &= (((((12631 ? (arr_0 [i_1]) : (-1575217726 * var_8)))) * ((-((0 ? 3 : 1099511627775))))));
                arr_5 [i_0] [i_1] [i_0] = (min((var_8 == var_15), (max(1, 1))));
            }
        }
    }
    var_19 = ((var_14 ? var_1 : (((min(var_4, 1)) + 0))));
    var_20 ^= ((var_10 ? ((((min(var_2, -1))) ? (min(var_15, 566046562371228716)) : (var_18 >= var_13))) : (((var_14 << (((max(1, 1099511627775)) - 1099511627757)))))));
    #pragma endscop
}
