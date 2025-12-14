/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-var_11 || (((((arr_2 [i_0] [i_0] [i_1]) ? 15 : (arr_4 [7] [i_1]))) < (~17)))));
                var_14 |= (max((arr_0 [i_0]), ((((((arr_4 [i_0] [i_1]) ? (arr_1 [1]) : (arr_3 [i_0] [i_1 + 1] [i_0])))) ? 145 : (((arr_4 [i_0] [i_1 + 1]) & 16393544738162620804))))));
                arr_6 [i_1] [i_1 + 2] |= (max((min(-1345135424, 16393544738162620782)), (max((arr_0 [i_1 - 1]), var_12))));
            }
        }
    }
    #pragma endscop
}
