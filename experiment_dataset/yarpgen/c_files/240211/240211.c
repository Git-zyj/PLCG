/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min(-150391968434538506, -150391968434538506));
    var_11 = (max(var_11, (((-39 ? -3855673738717888123 : 0)))));
    var_12 = (((((331943910025777186 ^ var_7) ? (max(4811984106238521244, var_5)) : var_6)) ^ 18505));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 ^= ((var_7 ? (((((arr_9 [i_0]) ? (arr_2 [i_1]) : var_6)))) : var_6));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((15429792694010132263 ? -331943910025777186 : -58));
                    var_14 = max(var_2, 331943910025777180);
                }
            }
        }
    }
    #pragma endscop
}
