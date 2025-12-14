/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((((1 << (arr_4 [1])))) ? ((~(arr_1 [i_0] [i_1]))) : ((min((arr_0 [i_0]), (arr_2 [i_1] [i_1] [i_0])))))) == (arr_2 [i_0] [i_1] [i_0]));
                var_19 = (max(var_19, ((!(((~((-(arr_3 [0] [1]))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = 1;
                    arr_11 [i_4] [i_3] [i_4] = ((-(arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                }
            }
        }
    }
    var_21 = -1;
    var_22 = ((1 ? (((~0) ^ var_8)) : (var_2 << 1)));
    #pragma endscop
}
