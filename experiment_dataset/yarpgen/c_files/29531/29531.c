/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (0 * 6149978363468044132);
    var_12 = (((((var_1 % var_1) ? (~var_2) : var_3)) | var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 += (min((arr_4 [i_1]), (((((min((arr_4 [i_1]), (arr_0 [i_0])))) && (((~(arr_4 [i_1])))))))));
                var_14 = (min(var_14, (((((+(((arr_0 [i_1]) ? (arr_0 [i_0]) : var_3)))) | (((arr_1 [i_1] [i_0]) ? (arr_4 [i_1]) : (arr_5 [i_1] [i_0] [i_0]))))))));
                var_15 = (((max((((arr_3 [i_0] [i_1]) | var_7)), var_0)) <= (((-(arr_0 [i_0]))))));
            }
        }
    }
    var_16 = (min(var_3, var_5));
    #pragma endscop
}
