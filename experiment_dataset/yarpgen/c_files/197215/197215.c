/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                var_12 = ((((((989700711507785382 ^ 7997205470413128602) ? (arr_1 [i_0] [i_1 + 2]) : 32))) != 0));
                arr_7 [i_0] [6] [i_0] = min(((((!(arr_5 [i_0] [i_1] [i_1]))) ? (var_8 - var_1) : (((((arr_3 [i_0]) <= (arr_2 [9]))))))), ((((arr_5 [i_0] [i_1 - 4] [i_1 - 2]) <= var_9))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] = (((arr_11 [i_0] [i_2 - 2]) ^ ((((min(var_0, (arr_11 [i_0] [8]))) <= var_0)))));
                            var_13 *= var_4;
                        }
                    }
                }
                var_14 += ((((var_5 ? (arr_11 [i_1 - 4] [i_1 - 4]) : var_3))) ? 7997205470413128602 : (((((arr_8 [2] [i_1 + 1] [8]) == (arr_8 [i_1 - 4] [i_1 - 1] [i_1]))))));
                var_15 = ((arr_6 [5] [1] [i_1]) ? (((max(3513897898547847731, 989700711507785382)) + 28)) : (-var_8 * var_1));
            }
        }
    }
    var_16 = (max(var_16, (((var_5 || (!var_0))))));
    #pragma endscop
}
