/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(32767, 0));
    var_13 = var_0;
    var_14 = (((8 - 1) ? -28995 : ((var_0 ? ((32 ? 547 : 20)) : (((min(var_10, 8))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = (max(((!(((~(arr_1 [i_0] [i_1])))))), (((min(var_0, (arr_2 [i_0]))) <= 510))));
                    var_15 = (min(var_15, ((((((-(arr_2 [i_0])))) ? ((((((1322516752 ? 65025 : var_11))) || (((1322516752 ? 65026 : -2425689264126601105)))))) : ((((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) || (((var_11 ? var_0 : 2047)))))))))));
                    var_16 = (max(var_16, (((((((arr_3 [i_0] [i_0]) && (arr_5 [i_0] [i_0] [0] [i_0]))) && ((var_9 && (arr_6 [i_0] [i_1] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
