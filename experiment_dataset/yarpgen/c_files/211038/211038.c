/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_11;
    var_15 &= var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_6 [i_0 + 2])));
                    var_17 = (min(var_17, ((max(((((!var_4) > var_0))), (max((((var_11 ? var_12 : var_13))), (arr_1 [2]))))))));
                    var_18 &= (((((((9345539857134306734 ? var_13 : 844424930131968))) ? (max((arr_5 [i_0] [i_0]), (arr_4 [i_0 - 2] [i_1]))) : (arr_1 [8]))) > (min((((-(arr_2 [i_2] [i_1 - 1] [i_0 + 1])))), (arr_5 [i_0 + 3] [i_0 - 2])))));
                    arr_7 [4] &= ((~((1200334823 | (arr_1 [4])))));
                }
            }
        }
    }
    #pragma endscop
}
