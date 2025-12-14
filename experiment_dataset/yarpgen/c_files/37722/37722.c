/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_1;
    var_20 = (min(var_20, ((max(var_5, (min((min(-1838880316, 1)), (var_15 == var_12))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_2 [i_1] [i_1])));
                    arr_10 [i_1] &= 1;
                    var_22 ^= (((min(var_4, (arr_8 [i_1] [i_1] [i_1]))) * (0 > 0)));
                }
            }
        }
    }
    #pragma endscop
}
