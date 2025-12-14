/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (3165487914 - -var_2);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = (arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = ((((min(-8111, (arr_9 [i_1 - 1] [i_1] [i_0 - 1])))) ? var_2 : ((max((arr_6 [i_0]), (arr_6 [i_0]))))));
                    var_15 ^= -2754059774992130970;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [18] [i_1] [i_2] [i_0] [6] = ((~(arr_5 [i_0 - 2] [i_0] [i_2])));
                                arr_17 [13] [i_1 - 1] [19] [i_1 - 1] [i_1 - 1] [i_0] = ((((min((max(3165487911, var_1)), 1129479384))) || ((((((1 ? var_9 : 0))) ? (min(1129479382, 18446744073709551599)) : ((((!(arr_13 [i_0] [14] [6] [i_3] [i_4 - 1]))))))))));
                                arr_18 [i_2] [i_1] &= (arr_2 [i_2] [i_2]);
                                arr_19 [i_1 - 1] [i_0] [3] [i_3] = ((min(((var_8 - (arr_4 [i_0]))), ((8046934371245020394 ? 8046934371245020394 : (arr_7 [i_4 - 1] [i_2] [i_1] [i_0 + 1]))))));
                            }
                        }
                    }
                    var_16 = (((~10399809702464531221) ? var_7 : (var_9 > 3165487911)));
                }
            }
        }
    }
    var_17 = ((((((var_4 * var_1) / -10399809702464531221))) ? 11183935373367232349 : (((-var_1 - (~1723204318))))));
    #pragma endscop
}
