/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((((min(23, (min(var_0, 32))))) <= var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = ((((((arr_2 [i_0] [i_1]) ^ (arr_2 [5] [i_0])))) ? (!9505311597158885039) : 23));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = ((arr_3 [i_2]) ? (arr_10 [i_3 - 2] [i_2] [i_1] [i_0]) : (((((var_6 ^ (arr_3 [i_0]))) - (arr_2 [i_0] [i_1])))));
                            arr_13 [i_3] = ((max((arr_0 [i_3 - 2]), (arr_12 [i_0] [4] [i_3 + 1] [8] [6] [i_0]))));
                            var_15 = (min(var_1, 939524096));
                        }
                    }
                }
                arr_14 [i_0] [4] = (((var_11 / (arr_12 [i_0] [7] [i_1] [i_1] [i_1] [7]))) - (!var_7));
                var_16 ^= (arr_11 [8] [i_1] [i_1] [11]);
            }
        }
    }
    #pragma endscop
}
