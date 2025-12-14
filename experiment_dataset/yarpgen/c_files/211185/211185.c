/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((((((var_4 ? var_10 : var_7))) && (((var_2 ? 1470679910 : var_11)))))) * (((992806137812892793 * var_13) ? (max(var_3, -1470679917)) : (var_13 / var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (max((((((535822336 + (arr_6 [i_0])))) ? (max(var_5, (arr_3 [15] [i_1] [15]))) : (((arr_5 [i_2]) & var_0)))), (((((var_4 ? var_5 : var_7))) ? (max((arr_0 [i_1] [16]), var_12)) : (((1730814438 << (((-5352279451852153722 + 5352279451852153732) - 10)))))))));
                    var_15 ^= (max(((((max(var_13, var_7))) ? (max(var_0, var_9)) : (((arr_5 [i_0]) << (var_12 - 1026216594))))), (((((max((arr_7 [i_0] [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0])))) && ((max(var_6, -1470679917))))))));
                    arr_9 [i_2] [i_1] [i_2] = ((((((max(var_9, -1470679911))) ? (max(var_2, -1470679917)) : (((-1470679912 > (arr_5 [i_1]))))))) - ((((var_10 ? (arr_3 [i_0] [i_1] [i_0]) : 530286742)) >> (((var_6 | 1) + 25183)))));
                }
            }
        }
    }
    var_16 ^= (((max((1470679906 == var_7), (18446744073709551615 / 1470679906))) + ((max(((max(var_6, var_4))), (((-1470679910 + 2147483647) << (var_1 - 13))))))));
    var_17 = ((((((max(var_0, var_12))) && (702566566 - var_3))) ? (((max(-7506489644455275321, var_10)) ^ (((1470679912 ? 702566566 : 1470679910))))) : (((((12 >= 1470679911) && -14))))));
    #pragma endscop
}
