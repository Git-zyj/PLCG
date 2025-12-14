/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (((min((arr_3 [3] [3]), var_7))) < (max((arr_7 [i_1] [i_1]), (arr_4 [i_0]))));
                arr_8 [i_0] = (((min(-102, (arr_2 [i_0] [i_1 + 1])))) && (((max((arr_5 [i_1] [i_1] [10]), var_8)))));
                var_15 = ((!((max(-104, (arr_6 [i_1 + 1] [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
