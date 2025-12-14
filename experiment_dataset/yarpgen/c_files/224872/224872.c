/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 += ((~(((arr_3 [i_2] [i_1] [i_0]) ? var_14 : (arr_2 [i_0] [i_1] [i_0])))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [i_1] [17] [5] [2] [5] = (min(((max((arr_4 [i_0]), (13840 % var_15)))), (min((max((arr_2 [i_3] [i_1] [14]), 18446673704965373952)), (((var_9 ? var_9 : (arr_6 [i_2] [3] [i_0]))))))));
                        arr_10 [i_0] [i_0] [i_2] [i_1] [i_0] [i_3] = (min(((max(2147483642, var_15))), 4294967273));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_0] = ((((min(var_15, var_12))) ? ((3 ? 51721 : 0)) : (((min((arr_0 [i_4]), (arr_2 [i_0] [i_1] [i_3])))))));
                            var_20 += 37;
                            var_21 = (((((arr_3 [i_1] [i_1] [i_3]) ? ((16795731057838462017 ? var_0 : 63)) : (max(4260967655807884898, 31)))) >= (max(((max(2572973382, 472429314))), ((-(arr_7 [i_0] [i_0] [12] [i_0] [i_0] [i_0])))))));
                            arr_15 [i_0] [i_0] [i_0] [i_2] [12] [i_0] [i_4] = arr_3 [8] [i_2] [18];
                        }
                        var_22 = (((arr_4 [i_3]) ? ((((!(arr_4 [i_2]))))) : (max((arr_4 [i_3]), (arr_4 [i_2])))));
                    }
                    var_23 = (max(var_23, ((((arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [18]) ^ ((22 >> (((arr_7 [i_2] [i_2] [0] [i_1] [0] [0]) - 10897150131145700746)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_24 = ((((23048 ? var_9 : ((var_11 | (arr_19 [i_6] [13] [i_5] [i_2] [i_2] [13] [i_0])))))) ? (((min(-1, 18446744073709551552)) % (((-1758842117849776593 ^ (arr_0 [i_5])))))) : (((max((!var_16), (var_17 <= var_7))))));
                                arr_21 [i_0] [i_0] [i_0] = (((((((max(4294967273, 472429314))) ? (!10904) : 4294967291))) ? ((-(arr_2 [i_5] [i_2] [i_0]))) : (!14334)));
                                arr_22 [i_0] [i_1] [5] [i_5] [7] = ((-((6215 ? 1 : (arr_8 [i_0] [1] [i_5] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((var_12 / var_5) ? var_1 : (~var_8))) <= var_5);
    var_26 = (max(var_26, (((((min(18446744073709551552, var_1))) ? (min(var_11, (max(1, 2147483647)))) : ((var_5 << ((((min(23034, var_7))) + 76)))))))));
    #pragma endscop
}
