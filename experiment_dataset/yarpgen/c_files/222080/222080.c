/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1 + 3] = var_17;
                arr_5 [i_0] [i_1] |= var_5;
                var_20 = var_10;
                var_21 = (((arr_1 [i_1] [i_0 + 2]) ? var_14 : ((8471 ? 127 : 2147483647))));
            }
        }
    }
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_13 [i_2] = ((((min(var_8, (arr_3 [i_2])))) ? ((var_9 ? var_5 : (arr_3 [i_2]))) : ((max((arr_3 [i_2]), (arr_3 [i_2]))))));
                var_23 += ((((max(67108856, (arr_11 [i_3] [i_3] [i_3])))) ? (((32767 ? var_4 : var_14))) : (max(-76, (arr_12 [i_3] [i_3] [i_3])))));
                arr_14 [i_2] = ((((((arr_7 [i_2]) << (((arr_7 [i_3]) - 10167219224593756567))))) || (arr_11 [i_3] [i_3] [i_2])));
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
