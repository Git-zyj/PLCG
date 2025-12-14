/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = ((var_2 / (((min(var_12, 22970)) & var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_18 = (max(var_18, var_13));
                    arr_7 [i_0] [1] [i_2] [1] = (min(((var_7 ^ (!var_7))), (-967028949 ^ 80)));
                    var_19 = (max(((min((min(var_15, (arr_6 [4] [i_1] [4]))), (arr_5 [i_2] [i_0])))), (min((arr_3 [i_0] [i_0]), var_9))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_7;
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_0] = -25114;
                    arr_13 [i_1] [i_3] = (((min((min(var_10, var_12)), var_1))) ? ((((((arr_0 [i_0]) ^ var_0))) / (~var_15))) : ((((arr_1 [i_1]) ? (arr_1 [i_3 - 1]) : (arr_1 [i_3 - 1])))));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] [i_4] = ((var_1 ^ (arr_1 [i_0])));
                    var_20 ^= var_11;
                }
                for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, ((((-1 + (arr_5 [i_0] [i_0])))))));
                    var_22 = (max(var_9, (min((min(var_12, var_11)), (arr_0 [i_5 + 2])))));
                    var_23 = ((~((max((arr_19 [i_1] [i_1] [i_1] [i_1]), var_5)))));
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] [i_0] |= -var_2;
                    var_24 = (max(var_24, var_1));
                    arr_23 [i_0] = (arr_6 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
