/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [2] = min(((~((874358034 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_1 - 1]))))), (((arr_0 [i_1 - 1] [i_1 + 2]) >> (((arr_2 [1] [i_1] [i_1]) + 1817276091)))));
                arr_6 [i_0] [i_0] = min(((1 >> (var_15 - 5036577476758053530))), (((!((((arr_1 [5]) ? var_15 : (arr_3 [i_0] [2] [i_0]))))))));
            }
        }
    }
    var_16 = 3;
    #pragma endscop
}
