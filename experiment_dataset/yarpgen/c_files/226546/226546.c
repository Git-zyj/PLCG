/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [4] [i_1] [i_2] = (((((arr_3 [i_0] [2]) ? (13181 - 7) : (min((arr_9 [i_0]), (arr_2 [i_1 - 2]))))) - (((arr_9 [i_1 - 3]) / (arr_2 [i_1 + 2])))));
                    arr_11 [i_0] [i_0] [i_0] = (min(0, (max(((3525195033911122605 ? (arr_9 [i_0]) : (arr_6 [i_0] [i_0] [i_0]))), 233))));
                    var_18 = (arr_3 [i_0] [i_0]);
                    var_19 *= 1;
                    arr_12 [i_2] = 42042;
                }
            }
        }
    }
    var_20 = (~13181);
    var_21 = ((var_6 ? (var_5 - 9223372036854775795) : 4294967294));
    var_22 = (((var_7 ? -14792 : ((min(46, var_14))))));
    #pragma endscop
}
