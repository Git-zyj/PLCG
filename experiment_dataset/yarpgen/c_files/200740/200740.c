/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (!var_16);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = var_17;
                                arr_14 [i_2] [i_2] [i_2] = (((arr_3 [i_2 - 1] [i_2 - 1]) | var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_21 = (((((arr_10 [i_6] [i_6] [i_6] [i_6] [i_7] [i_6]) ? 23061 : 4294967293)) != var_12));
                            var_22 = (((((var_4 ? var_15 : var_15))) ? (2110378784 % var_19) : ((((arr_2 [i_5]) || var_0)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_23 = (max((arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((1099511627775 <= ((var_16 % (arr_27 [i_5] [i_9]))))))));
                                var_24 = ((((((max(var_17, var_14)) & var_2))) ? ((65535 ? var_5 : (~var_17))) : -var_12));
                            }
                        }
                    }
                }
                var_25 = (max((var_4 < var_13), (min(var_15, (arr_10 [i_5] [i_6] [i_5] [10] [i_5] [i_5])))));
            }
        }
    }
    #pragma endscop
}
