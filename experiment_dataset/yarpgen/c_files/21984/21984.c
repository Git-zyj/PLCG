/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_2 % var_0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (max(var_12, 1851094973))));
                    arr_6 [i_0] [i_1] = (max(0, 1));
                    var_17 ^= (((((var_9 >= (max(var_6, (-127 - 1)))))) != -85));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            {
                var_18 &= (!2741964812);
                arr_12 [i_4 - 1] [i_4] [i_3] = max((((-127 - 1) / (arr_10 [i_4] [i_4]))), (arr_10 [i_4] [i_4]));
                var_19 = max(((((((arr_3 [4] [5] [20]) ? 30 : (arr_4 [i_3] [i_4] [11]))) >= 85))), 2017528024);
            }
        }
    }
    #pragma endscop
}
