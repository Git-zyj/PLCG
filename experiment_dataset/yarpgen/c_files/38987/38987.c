/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (27981 && 2149);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((var_11 ? (arr_0 [i_0] [i_0]) : (max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));
                var_19 = (arr_0 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            {
                var_20 = (27994 << 1);
                arr_8 [i_2] [i_3] = (max(((((((37555 ? var_3 : (arr_2 [i_2] [i_3] [i_3 - 1])))) && (arr_0 [i_2] [i_2])))), (max(((27981 ? 0 : 1)), (arr_3 [3])))));
            }
        }
    }
    var_21 ^= (((((28064988 ? 8644 : 1623406755))) ? ((max(var_15, var_6))) : ((((((-9223372036854775807 - 1) ? 4266902313 : var_3))) / (var_9 + 14704223647296124278)))));
    var_22 ^= (max((!var_9), (((!var_12) ? (!65524) : (min(550451857, var_14))))));
    #pragma endscop
}
