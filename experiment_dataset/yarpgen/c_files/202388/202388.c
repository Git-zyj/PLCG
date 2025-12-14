/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 |= ((((((145 - 4294967291) ? (((126 ? 0 : (arr_7 [i_0] [i_0] [i_0] [2])))) : ((-83339545 ? 29511 : -7597167858702883765))))) ? (((!33357) ? (max((arr_2 [i_0] [1]), 29539)) : ((((arr_3 [7] [4] [i_2]) ? 145 : 136))))) : var_0));
                    var_16 = ((~(((arr_0 [i_0]) ? (((1 >= (arr_7 [i_0] [12] [i_1 - 1] [5])))) : 159))));
                    arr_8 [i_0] [21] [6] = 164;
                    arr_9 [i_1] [i_2] = ((((((((arr_2 [i_0] [i_1]) ? var_5 : (arr_0 [i_2]))) & ((((arr_0 [i_0]) & (arr_4 [i_0]))))))) ? (~1324433226) : var_8));
                    var_17 = ((6367344487288516168 & ((max((arr_7 [i_0] [i_1 - 1] [i_2] [i_2]), (arr_7 [i_0] [i_1 - 1] [i_2] [11]))))));
                }
            }
        }
    }
    var_18 = var_11;
    #pragma endscop
}
