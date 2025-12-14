/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((var_2 - var_16) - ((((max(26658, 862956432))) ? var_5 : (max(var_4, 11355771566900640457))))));
    var_18 = ((0 || var_9) ^ ((var_9 ? var_9 : var_16)));
    var_19 = (max(((max((-6243 || var_4), 1))), ((var_11 ? ((1 ? 6652287546042990788 : var_13)) : var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_20 = (max(((max(47754, (arr_4 [i_0] [i_1] [i_2])))), var_1));
                    var_21 = (((min(var_3, (arr_7 [i_2] [i_2] [i_2 - 1] [i_2 + 2]))) ^ ((max((arr_7 [i_1] [i_1] [i_2 + 1] [1]), (arr_7 [i_0] [i_0] [i_2 - 1] [i_2]))))));
                }
                arr_9 [i_1] = (min(((max(var_14, -var_15))), (arr_7 [i_1] [i_1] [0] [i_0])));
                arr_10 [4] |= (max(((((arr_3 [i_1] [i_0]) < var_10))), ((-(arr_6 [i_0] [8] [i_0] [7])))));
            }
        }
    }
    var_22 = (min(var_22, var_4));
    #pragma endscop
}
