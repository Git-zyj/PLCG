/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] &= var_6;
                var_12 = ((((max(var_5, ((var_4 ? var_10 : (arr_2 [i_0])))))) ? (((min(4294967295, var_10)) & ((((6226970433490898082 == (arr_0 [i_0]))))))) : (33212 <= 2324487543)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_13 |= (arr_6 [i_3]);
                arr_11 [i_2] [i_2] [i_2] = (((arr_6 [i_2]) ? var_5 : (32323 - -92)));
                var_14 = (arr_9 [i_2] [i_3]);
                var_15 += (((arr_10 [i_2] [i_2] [i_2]) ? (min(((~(arr_7 [12]))), (arr_6 [i_2]))) : (arr_10 [i_2] [i_3] [i_3])));
            }
        }
    }
    #pragma endscop
}
