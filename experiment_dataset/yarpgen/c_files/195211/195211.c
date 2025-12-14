/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (((37176 % 14) ? (((arr_3 [i_1]) & (((arr_4 [i_1]) ? 9225538253644375226 : (arr_0 [i_1] [i_0]))))) : (((var_6 ? (arr_3 [i_0]) : (arr_1 [i_1]))))));
                var_11 *= ((((~(arr_1 [i_1]))) ^ (((arr_3 [i_1]) ? (arr_4 [i_0]) : (arr_4 [i_0])))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_8 [5] [i_1] = 2821750806;
                    var_12 = (((((arr_2 [i_2 - 1] [i_2]) ? var_9 : (arr_2 [i_2 - 1] [i_2 - 1]))) == (~13009820495203232660)));
                    var_13 = (max(var_13, (arr_2 [i_0] [i_1])));
                }
                arr_9 [i_0] [i_1] = (((~(arr_6 [i_0] [i_0] [1]))));
                var_14 ^= (var_3 ? var_4 : (((((var_3 ? var_9 : var_0))) ? (((arr_1 [i_0]) ? (arr_6 [7] [7] [i_0]) : var_1)) : (((((arr_5 [i_0] [i_1] [i_1]) >= var_7)))))));
            }
        }
    }
    var_15 &= (max(var_0, (var_8 | var_5)));
    #pragma endscop
}
