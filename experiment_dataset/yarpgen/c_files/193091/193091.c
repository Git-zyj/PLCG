/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -85));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 ^= (arr_0 [2]);
                    arr_9 [i_0] [10] [1] &= ((((((var_6 || (arr_5 [i_0] [i_1] [i_2 + 3]))) ? ((((arr_3 [i_0] [7] [i_2]) || var_7))) : (((arr_6 [i_0] [i_0] [i_0]) ? -1288751490 : -1288751467)))) / (arr_8 [i_2] [i_2] [0])));
                    var_14 &= ((75 ? 2700563071 : 2438));
                    arr_10 [i_0] = ((75 ? (arr_8 [6] [i_1] [i_0]) : (((((var_7 ? (arr_4 [i_0] [i_2]) : 1288751490)) != (arr_2 [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
