/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((-(arr_4 [i_0] [i_0])));
                arr_5 [2] [2] &= var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            {
                arr_11 [i_2] = ((((min((arr_6 [i_3] [1]), ((min((arr_7 [i_2]), 1)))))) - 1));
                arr_12 [i_2] [i_2] [i_3] = (min(((0 ? (arr_4 [i_2] [i_2]) : (((57639 < (arr_9 [i_2] [i_2])))))), ((max(1, 54140)))));
            }
        }
    }
    var_18 = 58521;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_19 = ((((((((arr_21 [i_6]) & var_5)) << (-var_10 + 44189)))) && (((1 ? 34231 : 851)))));
                            arr_25 [i_6] = var_8;
                        }
                    }
                }
                var_20 ^= (arr_19 [i_5 - 2] [i_5 + 2] [i_5 + 2]);
            }
        }
    }
    #pragma endscop
}
