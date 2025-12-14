/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_1 ? (((1 ? var_5 : -21475))) : var_12)) == (var_12 || var_1)));
    var_18 = (min(var_18, var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((((((13438 ? (arr_3 [i_0] [3]) : (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? 4257554961210323238 : var_9)) : var_16))) ? (~var_15) : var_12);
                var_19 = (max(var_19, ((((arr_1 [i_0] [i_0 + 1]) ? (((arr_2 [i_0] [i_0 + 1]) + (arr_2 [i_0] [i_0 - 2]))) : (((-(arr_1 [i_0] [i_0 - 1])))))))));
                var_20 = ((var_12 ^ (((859368226 ? (16777215 == 148) : 1565515129)))));
                var_21 = (max(var_21, (arr_2 [i_0] [i_1])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] = (arr_2 [i_1] [i_1]);
                    var_22 = ((((206 ? 2058587141 : 1623))) ? (((arr_0 [15] [i_0 - 2]) ? (arr_0 [i_1] [i_0 + 1]) : var_16)) : ((var_12 ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_5 [i_1]))));
                    arr_8 [i_1] [i_0] [4] [i_2] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
