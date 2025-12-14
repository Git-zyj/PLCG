/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_6, ((min((var_16 == var_13), 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((~(arr_2 [i_0])));
                var_20 = ((61440 ? 65535 : 12170));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [i_2] [1] &= (min(((-1 ? (arr_7 [i_2] [i_3]) : -8318)), (((arr_7 [15] [15]) ? (arr_7 [i_3] [i_2]) : (arr_7 [i_2] [i_3])))));
                var_21 = (max(var_21, (min(8323, (arr_0 [i_2])))));
            }
        }
    }
    #pragma endscop
}
