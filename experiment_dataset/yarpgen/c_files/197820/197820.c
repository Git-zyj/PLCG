/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] = ((+((var_7 >> (((arr_4 [i_2 - 1] [i_2 - 1]) - 615176334397082315))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_18 = (((min((18446744073709551615 ^ var_6), 64634))) ? var_10 : ((var_14 ? (1152921504606846975 + 5) : ((29796 ? var_6 : 18446744073709551606)))));
                        var_19 = (max(((-1869628596 / (((min((arr_3 [i_0]), 63)))))), (((var_10 <= (arr_4 [i_2 + 1] [i_1]))))));
                    }
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        var_20 = (min(var_20, ((max(((max(((((arr_9 [14] [i_2] [i_4 - 3]) >> (21349 - 21327)))), 0))), 12092703552048297110)))));
                        var_21 ^= (max(-1, (max(10, 32764))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_22 ^= var_16;
                        var_23 = (44186 * 29315);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_6 + 2] = 31599;
                        var_24 ^= ((~(arr_7 [i_1] [i_6] [i_2 + 1] [i_1] [8])));
                        var_25 = (arr_2 [i_0] [i_1] [i_0]);
                        var_26 = var_15;
                    }
                    arr_19 [1] [i_0] [i_2] = (arr_2 [i_1] [i_1] [i_0]);
                }
                for (int i_7 = 4; i_7 < 12;i_7 += 1)
                {
                    var_27 = 18446744073709551610;
                    arr_23 [i_0] [i_0] [i_7] [i_7] = 32764;
                }
                var_28 = ((+(((arr_21 [i_0] [i_1] [i_0] [i_0]) >> (32753 - 32750)))));
            }
        }
    }
    var_29 = (max(var_29, ((((-((var_6 ? 32767 : 2053268976))))))));
    var_30 ^= 1;
    var_31 &= 32767;
    #pragma endscop
}
