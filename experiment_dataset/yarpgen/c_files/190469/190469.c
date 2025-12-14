/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min(var_14, -var_9));
    var_18 = 3029114072;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((var_1 ? 70368744177663 : ((((arr_3 [i_0] [i_0] [i_1]) || var_2)))))) ? (max((~7035218278863090438), ((max((arr_0 [i_0]), (arr_0 [i_0])))))) : 65535));
                var_19 = (min(var_19, ((max(((((var_11 ^ var_6) < (arr_3 [i_1] [0] [i_0])))), (((arr_3 [i_0] [1] [i_0]) ? (arr_0 [i_0]) : (min(var_4, 6626257960150889184)))))))));
            }
        }
    }
    #pragma endscop
}
