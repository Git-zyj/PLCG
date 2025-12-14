/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [2] [i_0] = ((((max(65518, (arr_2 [i_0] [i_0])))) ? ((((~(arr_2 [i_0] [4]))))) : var_12));
        var_20 -= 2635165789;
        var_21 |= (max(((0 >> (225 - 197))), var_18));
        var_22 |= (!127);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_23 = (((arr_7 [i_1] [i_0]) ^ 1316207787));
            var_24 = (min(var_24, (arr_2 [3] [i_1])));
            var_25 = (arr_4 [i_0] [i_1] [i_1]);
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_26 = ((((!(arr_13 [i_4] [10] [i_3 - 2]))) ? -979054818 : (((!var_18) & ((var_14 ? (arr_14 [i_2] [i_5] [13] [0]) : var_13))))));
                            var_27 = (~1316207773);
                            var_28 |= ((65535 ? (((!1316207773) ? ((((arr_10 [i_5] [i_4] [i_3]) ? 33554431 : (arr_10 [i_5] [i_4] [7])))) : (~9144953481703468711))) : (arr_14 [i_3] [i_3 - 2] [i_3 - 1] [i_3 - 1])));
                            arr_17 [i_4] [i_3] [i_3] [i_4] [i_5] [i_5] = ((((((((18359714978869279341 != (arr_8 [i_2] [7])))) | -32753))) ? (arr_8 [0] [i_5]) : ((((-127 - 1) != 127)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_29 = ((var_10 ? (!96) : 65532));
                                arr_24 [i_6] [i_3 + 4] [i_6] [i_6] [i_8] = (((((2978759491 ? 5 : 6422))) ? ((18446744073709551598 / (((75 ? 78 : 15728640))))) : ((((123 ? -113 : (arr_9 [i_3] [i_7])))))));
                                arr_25 [i_2] [i_2] [i_2] [i_6] [i_2] = ((43890 ? 15101663842044080250 : (((((65528 ? (arr_22 [6] [i_2] [i_6] [6] [i_2]) : 3376614736))) / (arr_14 [i_2] [i_3] [1] [4])))));
                            }
                        }
                    }
                }
                var_30 = ((~(arr_22 [i_2] [i_2] [6] [i_2] [1])));
            }
        }
    }
    var_31 = (((-127 - 1) ? (((125 < 16) >> (var_9 < var_6))) : -15004));
    #pragma endscop
}
