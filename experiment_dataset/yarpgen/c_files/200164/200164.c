/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((arr_2 [i_1]) ? ((((((arr_1 [i_0 + 2]) ? (arr_4 [i_0 + 3] [i_0 + 3] [i_0]) : (arr_0 [i_1 + 1])))) ? (((arr_1 [i_1]) / 11018976199547197222)) : ((min((arr_3 [i_1 - 3]), (arr_0 [i_0])))))) : (((~((0 ? -8972293951293085267 : (arr_2 [i_0]))))))));
                var_14 = (min(var_14, ((((arr_1 [i_1 - 1]) ? (min((min((arr_3 [i_0]), (arr_0 [i_1]))), -7463)) : (((!(((-(arr_1 [i_1]))))))))))));
                arr_5 [i_0] = -6306955757602412263;
                arr_6 [i_0] [i_1] = (((((((min((arr_4 [i_0] [i_0] [i_0]), (arr_0 [i_1])))) ? (arr_0 [i_0 + 2]) : ((max((arr_0 [i_0]), (arr_0 [15]))))))) ? ((0 ? 228 : 2097150)) : (((arr_4 [i_0 + 3] [i_0] [i_0]) ? (min((arr_0 [i_0]), -2017570238)) : 171))));
            }
        }
    }
    var_15 = (((((-var_8 ? var_2 : (((var_10 ? var_4 : 165)))))) ? var_8 : ((((!(((165 ? var_11 : 12036558351091781066)))))))));
    #pragma endscop
}
