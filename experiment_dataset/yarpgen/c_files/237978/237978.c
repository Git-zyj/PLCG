/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((19103 <= 7268297009821378292) * ((((9223372036854775807 && 9223372036854775803) || 2845718107550204536))));
                var_18 += ((((((~255) & ((var_12 ? (-2147483647 - 1) : 1823211679))))) & (((~var_4) ^ (((arr_1 [i_1]) ^ var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_3] = 4151462366795877011;
                            var_19 = (((min(((2845718107550204536 >> (var_0 - 18195525766956291606))), (min((arr_2 [i_0] [i_3] [i_3 + 1]), (arr_9 [i_3] [i_2] [i_3] [16] [i_0])))))) ? (arr_6 [i_0] [i_1] [12]) : (((!((min(var_9, 4193280)))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, ((min((((!9223372036854775803) ? -9223372036854775807 : (var_14 && 14810569920325819692))), (((-(min(var_3, var_12))))))))));
    #pragma endscop
}
