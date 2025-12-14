/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_0 ? 2040 : (min(var_3, var_9))))) ? var_9 : (((var_0 == ((var_5 ? 2909079949 : var_8)))))));
    var_12 = (((!(~-126038879))));
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 -= (min(((~(var_1 ^ -5842040246422090861))), (((~((var_2 ^ (arr_4 [1] [i_1]))))))));
                    arr_7 [i_1] = 35998;
                }
            }
        }

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_15 = (arr_0 [i_0]);
            var_16 = (max(var_16, (((!((!(arr_0 [i_3 - 1]))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_14 [i_4] [i_4] [i_4] = (0 ^ var_8);
            var_17 = (arr_11 [i_4]);
            arr_15 [0] [0] [i_4] = var_6;
        }
        var_18 = ((!(((var_9 ? ((55283 << (2498494655690723706 - 2498494655690723700))) : 1)))));
    }
    #pragma endscop
}
