/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (max(var_11, -var_9));
    var_15 &= (max((max(155794788, var_9)), var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 ^= ((~(arr_3 [12])));
                    var_17 |= (max((arr_1 [i_0]), var_12));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                {
                    var_18 ^= 954027825;
                    var_19 = (min(var_19, ((((var_3 ? (arr_6 [i_4] [i_5] [i_5 - 2] [i_5 - 3]) : (arr_6 [i_3] [i_5] [i_5 - 2] [i_5 - 3])))))));
                }
            }
        }
    }
    var_20 = (-638131720 % 1454257138);
    #pragma endscop
}
