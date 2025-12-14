/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_15 ? 66 : -697510605));
    var_17 = (((min((86 | 184), (max(72, var_8))))) ? (((var_11 && (var_7 < var_13)))) : (((var_11 ? 1 : 1))));
    var_18 = 207;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((arr_0 [0]) ? ((-4689145368188028429 ? 18014329790005248 : var_0)) : (((var_11 ? 1 : (arr_0 [i_2])))))))));
                    arr_8 [i_1] [i_1] [i_0] [i_0] = min((max((-2147483647 - 1), 0)), ((((var_7 || (arr_5 [i_0] [i_1] [i_2]))) ? (((1658381976 && (arr_5 [i_0] [i_1] [1])))) : (0 || 196))));
                    arr_9 [1] [1] [9] = (((arr_6 [1] [i_2] [3] [i_0]) ? (((-(arr_1 [i_1])))) : ((((((arr_5 [i_1] [i_1] [i_1]) * 1))) ? 1658381976 : var_10))));
                    arr_10 [i_2] [i_1] [1] = (((0 && 180) ? (min(((-366124552 ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [i_2] [i_1] [i_0]))), ((1 << (((arr_7 [11] [i_2] [11] [i_2]) - 145045006)))))) : (1 << 1)));
                    var_20 = (((arr_7 [i_0] [i_0] [i_0] [18]) - ((((30450 ? 18428729743919546369 : 172)) << (!var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
