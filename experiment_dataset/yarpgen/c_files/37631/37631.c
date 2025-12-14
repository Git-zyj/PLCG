/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_11 = (arr_6 [i_0] [i_2 - 3]);
                    var_12 = (max((min(-22606, (arr_6 [9] [i_1 + 1]))), 38));
                    var_13 = (max(var_13, (arr_6 [i_0] [i_1 + 1])));
                }
                var_14 = ((max(7, 1038797321)) == (((32767 >> (-32764 + 32776)))));
                var_15 |= (-2147483647 - 1);
                var_16 = ((((max(35, (((arr_6 [14] [i_1 + 1]) ? 4294967295 : (arr_7 [i_0] [i_0] [i_0] [i_1 + 2])))))) ? ((max((((arr_6 [15] [7]) ? -1 : 1)), (arr_4 [i_0] [7] [i_0])))) : (max((38 == 23906), (max(0, 41629))))));
            }
        }
    }
    #pragma endscop
}
