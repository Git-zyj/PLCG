/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2147483647;
    var_21 &= max((((max(var_13, 11473425953397821059)) / -36)), var_8);

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_22 = var_6;
            var_23 = (((arr_3 [i_0 - 1] [i_0] [i_1]) ? 7485327456814509148 : (arr_2 [i_0] [i_1])));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_24 = (((((7485327456814509147 ? 1832907686 : 26739))) ? 125 : 101));
                            arr_14 [i_1] [i_1] [i_1] [i_3] [i_0] |= 3387992084;
                        }
                    }
                }
            }
        }
        var_25 = (max(var_25, (var_14 % var_15)));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_24 [4] &= (arr_16 [i_0] [i_5 - 2] [i_0]);

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_28 [i_0] [i_5] [i_6 + 1] [i_8] = (min(7963750481635841367, (arr_21 [i_0 - 3] [i_0] [1] [i_0 - 3] [i_7 - 1] [2])));
                            var_26 = (min(((~(arr_6 [i_7 - 1] [6] [i_5 - 3] [i_0 - 3]))), (((((arr_10 [i_0 + 2] [i_6 + 1] [i_7 - 2]) || var_11)) ? (arr_25 [i_5] [i_8]) : ((min(var_18, (arr_0 [i_8]))))))));
                        }
                    }
                }
            }
        }

        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            arr_33 [i_9 - 2] [i_0 - 3] = ((((!(var_4 || var_13))) || (((arr_26 [i_0] [i_9] [0] [i_9]) || 5077489285682738914))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_42 [i_0] [i_10] [i_0] [i_11] [i_12] [i_12] [i_9 - 2] = (arr_32 [i_9] [i_9]);
                            arr_43 [i_0 + 2] [i_0 + 2] [i_10] [i_11] [i_11] |= (!2569523440);
                            var_27 = (~((7963750481635841367 & ((((arr_30 [i_12]) ? 32767 : var_15))))));
                        }
                    }
                }
            }
            var_28 = ((+(((7489453791830538332 - 2147483647) ? (arr_30 [i_0 - 3]) : var_6))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        var_29 = ((((arr_39 [i_0 - 2] [i_0 - 2] [4] [4] [i_14]) << 1)) == ((((arr_10 [i_0 - 2] [i_0 - 2] [i_9 - 4]) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_9 - 4]) : var_1))));
                        var_30 = (((arr_26 [i_0 + 2] [i_0 + 1] [0] [0]) + ((-1 ? 0 : 18446744073709551615))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
