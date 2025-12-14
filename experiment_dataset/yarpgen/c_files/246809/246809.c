/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_11 ? var_9 : var_5))) ? ((var_13 ? var_4 : var_13)) : (((var_12 ? var_5 : var_0)))))) ? (((((var_1 ? 65535 : var_2))) ? ((var_8 ? var_0 : var_10)) : ((var_4 ? 2750253580177457287 : var_11)))) : (((((var_10 ? var_7 : var_3))) ? (((0 ? 1 : 1))) : ((-1 ? 5122107337397851492 : var_11))))));
    var_16 = ((((-65536 ? 1 : 1))) ? (((((1 ? var_11 : 1))) ? ((255 ? var_14 : var_12)) : (((var_1 ? 16283 : 1))))) : (((((-10898 ? 1 : 143))) ? ((1 ? var_13 : 67108863)) : ((var_5 ? var_11 : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [6] = ((((((((var_6 ? (arr_2 [i_0] [6] [i_1]) : (arr_1 [i_0] [i_1])))) ? (((arr_0 [i_1]) ? var_4 : (arr_1 [i_0] [i_1]))) : (((arr_3 [21]) ? 1 : var_4))))) ? (((((var_0 ? var_13 : (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (arr_3 [i_1]) : var_7)) : (((var_7 ? 1 : (arr_0 [i_1])))))) : ((((((arr_0 [6]) ? (arr_0 [i_0]) : (arr_3 [i_0])))) ? ((1 ? (arr_2 [i_0] [1] [i_1]) : var_3)) : ((var_9 ? var_7 : 56908))))));
                arr_5 [i_0] [i_1] = (((((((((arr_3 [i_1]) ? 1 : (arr_1 [14] [i_1])))) ? (((24056 ? -19560 : 1))) : (((arr_2 [i_0] [i_1] [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0] [i_1] [i_0])))))) ? (((((-3934254984515019675 ? (arr_2 [17] [i_1] [i_1]) : var_9))) ? (((var_6 ? var_4 : -2021525740))) : (((arr_1 [i_0] [i_1]) ? (-9223372036854775807 - 1) : (arr_3 [i_0]))))) : ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : -1))) ? ((var_5 ? (-9223372036854775807 - 1) : (arr_3 [i_0]))) : (((arr_2 [i_1] [i_1] [i_0]) ? var_14 : var_3))))));
            }
        }
    }
    #pragma endscop
}
