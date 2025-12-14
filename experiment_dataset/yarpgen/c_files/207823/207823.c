/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_0 && var_11) ? ((min(196, 1))) : var_9));
    var_18 = ((((((~23750) ? (~18446744073709551613) : 1853739370))) || var_7));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((((((max(var_16, var_4))) ? (arr_1 [i_0] [i_0 + 1]) : (arr_6 [i_1]))) <= (((var_5 ? (!var_15) : (~var_3))))));
                    arr_7 [i_1] = (((((11 < var_16) >= (max(-836100909, 30720)))) ? ((var_16 ? (max(32764, -1853739378)) : (((arr_5 [i_1]) ? var_5 : var_2)))) : ((~(arr_3 [i_0 - 3] [i_1 - 1] [i_1 + 1])))));
                }
            }
        }
    }
    var_20 = ((18446744073709551609 ? 16 : 8));
    #pragma endscop
}
