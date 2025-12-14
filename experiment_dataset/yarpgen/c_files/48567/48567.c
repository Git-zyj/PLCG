/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    var_20 -= (892668880 ? 10324265818446631039 : -892668881);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = min(-3486, (!-124));
                    var_22 = (arr_8 [i_1 - 1]);
                    arr_9 [i_0] [i_2] [i_2] [i_0] = (min(12442117009663371606, (((((min(var_15, var_14))) || (((-1 ? 1 : (arr_0 [i_2])))))))));
                    var_23 = ((((((arr_6 [0] [i_0] [0] [0]) ? (arr_4 [i_2] [i_1 - 1] [i_0]) : ((((1730780485 == (arr_7 [i_2] [i_1] [i_1] [i_0])))))))) ? (((arr_3 [i_0]) ? (arr_3 [i_0]) : 78)) : -79));
                }
            }
        }
    }
    #pragma endscop
}
