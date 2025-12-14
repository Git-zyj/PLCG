/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((~(arr_2 [3] [i_0] [1]))) >= (((arr_2 [8] [i_1] [i_1]) / 19802))));
                arr_6 [18] [0] = (min(((-(arr_0 [i_0 - 1]))), ((max(var_9, var_2)))));
                var_20 = ((((max(8, var_10))) ? ((((arr_2 [i_0] [10] [i_1]) ? (((var_16 && (arr_3 [i_0])))) : var_12))) : (max(1073741824, (arr_1 [i_0 + 1])))));
                arr_7 [i_0] = (min(((min(var_2, -1544548547))), ((-(arr_0 [4])))));
            }
        }
    }
    #pragma endscop
}
