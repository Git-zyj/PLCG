/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_5 % (var_16 <= var_9)));
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (((min((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))), (arr_2 [i_0] [i_1 - 1]))) | (min((arr_2 [i_0] [i_1 - 1]), (arr_3 [i_1] [i_0])))));
                arr_5 [i_0] [i_0] = (((((var_5 & (arr_1 [i_0])))) ? (((((2831150283 ? 6587289597051395576 : -14)) != var_16))) : ((((2831150280 ? 819587013096714225 : (-9223372036854775807 - 1)))))));
                var_20 ^= ((((arr_0 [i_0]) > (((((arr_3 [i_1] [1]) < (arr_4 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
