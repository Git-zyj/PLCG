/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-5669578319796648417 + ((9223372036854775807 ? var_14 : var_13)))));
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((((((var_2 ? var_3 : (arr_2 [i_0] [i_0] [i_0])))) ? (var_10 && var_11) : 5669578319796648407))) || ((12777165753912903209 || ((max(var_10, 65535)))))));
                var_17 ^= -var_12;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 &= var_4;
                            arr_9 [i_0] [i_2 + 1] [i_2 + 1] [i_0] [i_0] = ((((max(var_11, -17))) ? 100 : ((max(var_7, 0)))));
                            var_19 &= ((+((26281 ? (arr_5 [i_2 - 2] [i_3]) : 12777165753912903208))));
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2 + 1] = ((max(0, -6454640204241971500)));
                            arr_11 [i_0] [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 2] [i_1] = -1;
                        }
                    }
                }
                var_20 += (((max(var_14, var_4))) - (max(var_7, (max(17665380548750872611, 7225762852831450322)))));
            }
        }
    }
    #pragma endscop
}
