/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((!var_1) - (~var_10)))) ^ (min((min(var_6, 1046528)), (~var_12)))));
    var_14 = 158;
    var_15 = 20;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_16 ^= (max((((!(arr_1 [i_0 - 2])))), (max((arr_1 [i_0 - 2]), 3296725979644404052))));
        var_17 = 3296725979644404054;
        var_18 &= min((((!(arr_1 [13])))), var_6);
        arr_2 [i_0] = var_3;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 -= ((-3296725979644404058 || ((!((min(var_5, -30108)))))));
                    arr_8 [i_1] [i_0] = var_12;
                    arr_9 [i_0] [i_1] [i_2] = (min((((arr_1 [i_1 - 3]) * (arr_1 [i_1 - 3]))), (arr_4 [i_0] [i_1] [i_1])));
                    var_20 = -3296725979644404052;
                    var_21 = 10607268239889962853;
                }
            }
        }
    }
    #pragma endscop
}
