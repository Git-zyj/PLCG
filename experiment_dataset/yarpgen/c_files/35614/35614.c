/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_6, ((((var_10 == var_7) < (var_4 >= 51))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 ^= ((-51 + (arr_3 [i_2] [i_1] [i_0])));
                    arr_8 [i_0] [i_1 - 2] [i_1 - 2] [i_0] = (min((arr_2 [i_1 - 2] [i_1 - 2]), (var_12 || 59)));
                }
            }
        }
    }
    #pragma endscop
}
