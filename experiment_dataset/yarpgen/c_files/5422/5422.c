/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [8] [i_1] = ((-(((!((max((arr_1 [3] [3]), (arr_1 [i_0] [i_1])))))))));
                    var_11 = (min(var_11, (((((max((((arr_2 [i_0]) ? var_2 : 1)), (arr_2 [i_2])))) ? (((24181 ? 1 : (~-1899284004)))) : (min((max(var_2, (arr_0 [i_1]))), (arr_2 [i_0]))))))));
                    var_12 ^= (max(((((max(117, 117))) ? 0 : ((max(-7415, 65535))))), 37656));
                    arr_8 [i_0] [i_0] [9] [i_0] = ((-((-(((arr_6 [i_0] [i_0] [i_2]) ? (arr_5 [i_0] [1] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_13 += (((((-((min(var_4, 1)))))) ? (min((((16383 ? 18417 : var_1))), (min(var_2, 1)))) : (((-14 ? ((1 ? var_10 : var_8)) : (~var_6))))));
    #pragma endscop
}
