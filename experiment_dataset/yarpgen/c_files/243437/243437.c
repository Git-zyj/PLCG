/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 -= ((((min((((arr_3 [i_0] [6]) ? (arr_0 [i_0]) : (arr_0 [i_1]))), 255))) ? ((min(((~(arr_2 [1] [i_1]))), (arr_2 [i_0] [i_1])))) : 272730423296));
                var_16 += ((-((49278 >> (((((arr_0 [24]) ? (arr_3 [i_0] [i_0]) : 20)) + 75))))));
                var_17 = ((((((arr_0 [i_1]) != (~var_2)))) < var_13));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] [i_2] = (arr_0 [i_2 - 1]);
                arr_12 [20] [20] [i_3] = -20;
                var_18 = (((241 * 14945693777087692765) & (-11660 != 13)));
            }
        }
    }
    #pragma endscop
}
