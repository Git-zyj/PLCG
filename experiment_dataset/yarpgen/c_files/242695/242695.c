/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0 - 2] [13] = ((4294967295 ? 5887843755494460425 : 1));
                arr_5 [i_0] = (min((((((max((arr_3 [13] [i_1] [i_1]), 65531))) ? -76 : -224))), (max(31, ((34862 ? 10 : 34848))))));
            }
        }
    }
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_13 [0] = var_11;
                arr_14 [12] |= (max(30661, 1));
                arr_15 [6] |= (max(4719830136755454263, 1371));
                arr_16 [i_2] [11] = 22781;
            }
        }
    }
    #pragma endscop
}
