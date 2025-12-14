/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 &= var_1;
                            arr_11 [i_2 + 2] [8] [1] &= ((((min(((min(var_13, (arr_7 [i_0] [i_1] [i_2] [i_3])))), ((230493936 ? var_17 : 0))))) ? (((max(var_13, 1)))) : (((((max(10209, 1))) || var_4)))));
                            var_20 = 65535;
                        }
                    }
                }
                arr_12 [i_0] [i_1] = ((((max((((!(arr_3 [i_1 - 1])))), var_2))) || var_15));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_21 = (max(var_21, (~-32757)));
                arr_21 [i_4] [i_4] [10] = var_6;
                var_22 = ((~((~(arr_20 [i_5] [i_4])))));
                arr_22 [i_4] [1] = ((((((max(var_12, 65535))) || (1059275971 || 46586))) ? ((-1059276000 ? ((((arr_15 [i_4] [i_5]) || (arr_19 [i_4] [i_4])))) : (arr_15 [i_5] [i_4]))) : (var_5 % var_14)));
                var_23 = (max((arr_19 [i_4] [8]), ((((arr_13 [i_4] [i_5]) ? 1059275971 : 512)))));
            }
        }
    }
    #pragma endscop
}
