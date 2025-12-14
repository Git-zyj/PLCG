/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(var_14, (var_7 >= var_7)))) ? 18150656627244449534 : ((15775540879074012630 ^ (~2671203194635538985))));
    var_17 = 13862261535870732453;
    var_18 = (-(max(var_2, 1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [2] [i_1 + 2] = 2671203194635538994;
                    arr_9 [2] |= ((((((~(arr_2 [1] [5]))))) ? -18446744073709551615 : (arr_0 [14])));
                }
            }
        }
    }
    #pragma endscop
}
