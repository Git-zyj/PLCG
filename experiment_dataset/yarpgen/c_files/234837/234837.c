/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= min((((max(var_9, var_6)))), (max(var_9, var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((var_7 + (arr_0 [i_0])));
                arr_6 [i_1] = (arr_0 [i_0 - 1]);
                var_11 &= (arr_3 [i_0 - 1]);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_12 = (arr_4 [i_0 - 1] [i_0] [i_0 - 1]);
                    var_13 = (max(var_13, (arr_8 [i_0 + 1] [i_0] [11] [11])));
                }
            }
        }
    }
    var_14 ^= (max(var_8, var_4));
    var_15 = (((((((var_9 - var_6) != var_0)))) ^ var_9));
    #pragma endscop
}
