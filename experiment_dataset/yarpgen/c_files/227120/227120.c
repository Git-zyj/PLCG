/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(((-((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))), (min((arr_0 [i_0] [i_0]), ((-(arr_0 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = ((((min((arr_3 [i_1] [i_1]), ((max((arr_5 [i_1] [i_1] [i_0]), (arr_2 [i_0]))))))) ? ((-(((arr_5 [i_0] [i_1] [i_1]) ? (arr_4 [i_0] [i_1 + 1] [i_2]) : (arr_1 [i_1] [i_2]))))) : (arr_4 [i_0] [i_1 + 2] [i_1 + 2])));
                    var_19 = ((((arr_1 [i_0] [i_0]) ? ((((arr_0 [i_0] [i_1]) - (arr_0 [i_0] [i_2])))) : (max((arr_2 [i_0]), (arr_4 [i_0] [6] [i_0]))))) >= ((((((-1279453641 == (arr_5 [i_2] [i_1] [i_0])))) % ((126 ? 744394505 : (arr_1 [i_0] [i_0])))))));
                    arr_6 [i_1] [i_1] = 0;
                    var_20 += (arr_4 [i_0] [i_0] [i_2]);
                    var_21 = (max((min((1 % -5200962844091447963), (((arr_5 [i_0] [i_1] [i_1]) ? (arr_2 [i_0]) : (arr_0 [i_2] [i_2]))))), ((+(min((arr_4 [i_2] [i_2] [i_2]), (arr_2 [i_0])))))));
                }
            }
        }
    }
    var_22 += (((((((min(var_0, var_13))) << (var_7 - 40233)))) ? (((!(var_11 && var_6)))) : (((((var_9 ? var_9 : var_1))) ? var_7 : var_7))));
    #pragma endscop
}
