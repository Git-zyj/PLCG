/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (min(var_11, ((min(((+((3844946892615905347 ? (arr_1 [i_0]) : 104)))), (min(var_5, (!var_10))))))));
        arr_2 [i_0] = (max((3844946892615905349 - 3844946892615905349), (((~(arr_1 [i_0]))))));
        var_12 ^= (min(((((((arr_1 [i_0]) ? var_5 : var_2)) <= (((var_4 + 2147483647) >> (var_6 - 2964326475)))))), (((((var_8 ? (arr_0 [i_0]) : var_5))) ? var_2 : ((-(arr_1 [12])))))));
    }
    var_13 = ((((max((max(var_10, var_0)), var_7))) ? ((-var_0 ? ((var_4 ? var_4 : var_6)) : (var_5 == var_8))) : (max(var_7, var_6))));

    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_14 = (max((((arr_0 [i_1]) ? (arr_1 [i_1]) : (((arr_3 [i_1] [i_1]) >> (var_4 + 14992))))), ((((((arr_4 [i_1] [i_1]) ? var_10 : var_3)) >= (max((arr_3 [i_1] [i_1]), var_8)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_15 = (min(((!(arr_0 [i_1 - 3]))), (arr_0 [i_1 - 1])));
                    var_16 ^= ((var_1 < ((14601797181093646269 ? 14601797181093646258 : (((arr_1 [i_2]) ? 3021227675 : 14601797181093646260))))));
                }
            }
        }
    }
    #pragma endscop
}
