/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((!((min(var_3, var_10))))), (-var_1 == -332)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (-(arr_1 [i_0] [i_1]));
                var_17 = (min(var_17, var_5));
                arr_6 [i_0] [i_1] = (((arr_4 [i_0] [i_1]) == ((min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_18 = (max(var_18, (((~(((~84) ? (((-24624370 ^ (arr_4 [i_2] [i_3 - 1])))) : ((-24624392 ^ (arr_14 [i_2]))))))))));
                var_19 = (((arr_4 [i_2] [i_2]) <= (max((((arr_9 [i_3]) ? (arr_7 [i_2]) : (arr_8 [i_3 - 1]))), (!var_1)))));
                var_20 &= ((~(arr_14 [i_2])));
            }
        }
    }
    #pragma endscop
}
