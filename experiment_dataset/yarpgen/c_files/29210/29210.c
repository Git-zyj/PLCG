/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min(var_6, var_1)), 4294950912));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((7 >> (((arr_2 [i_1 - 2] [i_1 + 4] [i_0]) - 1274961577))));
                var_11 = (max((min(((4294950912 ? (arr_0 [i_0]) : 4294950912)), (((!(arr_1 [i_0])))))), ((((((arr_0 [i_1 - 1]) ? 0 : 0)) >= (arr_1 [i_0 + 3]))))));
                var_12 = min((((240 ? 4210475903692304325 : 5))), ((((-11 < 61440) | ((1 | (arr_2 [i_0] [i_0 - 3] [i_0])))))));
                var_13 ^= 2363884562;
            }
        }
    }
    #pragma endscop
}
