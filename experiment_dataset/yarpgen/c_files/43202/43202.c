/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((((1 << (-1780251534776709624 + 1780251534776709642)))) || (((~(((arr_2 [i_0] [i_0]) * (arr_0 [i_0] [i_0])))))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 += (arr_0 [i_0] [i_3]);
                                var_15 *= (8581 + 0);
                                var_16 += (arr_7 [i_0] [i_0] [i_0] [i_0] [i_4]);
                            }
                        }
                    }
                }
                var_17 += min((arr_7 [i_0] [i_0] [19] [19] [19]), (((((arr_9 [i_1] [0] [i_0] [i_0] [i_0] [i_0] [i_1]) >> (((arr_6 [20] [i_0] [i_0] [i_1]) - 215)))))));
            }
        }
    }
    var_18 = (min(var_18, ((((min(var_10, -var_3)) <= (var_2 && var_7))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_19 += min(((~(((arr_9 [16] [i_6] [i_5] [i_5] [i_6] [i_6] [8]) % (arr_8 [4] [0]))))), ((((((min((arr_11 [10]), (arr_5 [i_5] [i_6] [i_5] [i_5]))))) % (((arr_3 [5] [i_6] [i_6]) | (arr_0 [i_5] [i_6])))))));
                var_20 += ((((min((arr_11 [4]), (((arr_16 [0]) ^ (arr_8 [i_5] [20])))))) && ((min((arr_3 [i_5] [20] [i_6]), ((((arr_14 [6] [i_6] [1]) && (arr_13 [4] [4] [i_6])))))))));
            }
        }
    }
    var_21 = ((!((var_2 <= (min(var_0, var_0))))));
    #pragma endscop
}
