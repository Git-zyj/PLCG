/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_17 ? var_1 : var_16)) <= (var_14 < var_13)))) <= var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2 + 4] [i_2] [i_1] [i_3] = (((((((65535 ? var_4 : 2139788172356016472)) < ((18446744073709551615 * (arr_1 [i_0] [i_0])))))) / (41939 & var_16)));
                            var_20 = ((((((((arr_7 [i_1] [i_1]) >= 1010967434623199551))) - (var_16 / 65515))) >= (((38307 == var_12) ^ 32767))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] = ((((((((38296 ^ (arr_9 [i_0])))) >= ((var_2 & (arr_10 [i_0] [i_1] [i_2 + 2] [i_1])))))) | (((((var_14 & (arr_2 [i_0] [i_0]))) != (((arr_2 [i_0] [i_0]) | var_14)))))));
                        }
                    }
                }
                var_21 = (((((arr_3 [i_1] [i_1]) % (((((arr_2 [i_0] [i_1]) || (arr_0 [i_1]))))))) >> (((var_16 && (((arr_0 [i_0]) == 38307)))))));
            }
        }
    }
    #pragma endscop
}
