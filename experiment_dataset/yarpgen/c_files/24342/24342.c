/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [2] [2] = (min(48, (~251)));
                arr_6 [i_1] [i_1] |= 15;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_10 = arr_1 [8];
                    var_11 = 4;
                    var_12 *= 242;
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_13 [i_0] [9] [i_0] = (((((arr_8 [1] [1] [2] [7]) || (arr_8 [i_0] [i_1] [i_1] [i_1]))) && (arr_8 [2] [i_3] [4] [i_0])));
                    var_13 = (max(var_13, ((min((((((!(arr_2 [i_0]))) || ((var_3 || (arr_2 [12])))))), (((((var_2 ? (arr_8 [i_0] [i_0] [12] [i_0]) : 230))) ? (arr_10 [i_0] [i_1] [i_3]) : 248)))))));
                    var_14 = (((arr_4 [9] [i_1] [i_1]) ? (arr_11 [i_0] [i_1] [i_3]) : var_7));
                }
                var_15 ^= (min(((~(arr_2 [i_0]))), ((~(arr_2 [i_1])))));
            }
        }
    }
    var_16 &= ((~(min(var_6, (~230)))));
    #pragma endscop
}
