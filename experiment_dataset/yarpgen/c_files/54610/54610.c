/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_16;
                var_19 = ((var_6 && (((~((var_17 << (54127 - 54124))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_20 = (((min((11394 & -553848254), ((max(8191, 11399))))) != ((~(arr_1 [i_2])))));
                var_21 = (min(var_21, ((max(71, (min(-1, var_13)))))));
                var_22 = (arr_3 [i_2]);
                arr_9 [i_2] = (max(0, 1));
            }
        }
    }
    #pragma endscop
}
