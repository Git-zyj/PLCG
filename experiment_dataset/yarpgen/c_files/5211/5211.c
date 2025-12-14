/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) ? 1257866577 : 1257866577)))));
                    var_12 = ((0 ? (arr_7 [i_2] [i_1] [i_0] [i_0]) : (((arr_4 [i_1] [4]) ^ (((~(arr_6 [i_0] [i_0] [i_2]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_15 [i_3] = 9000025256844388657;
                var_13 = (~3037100718);
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
