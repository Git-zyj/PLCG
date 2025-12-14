/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_11 = ((-24400 ^ (arr_2 [i_0 + 3])));
                    var_12 = (min(var_12, (arr_4 [i_1 - 2] [i_0 - 1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = ((131056 == (-2147483647 - 1)));
                                var_14 = (min(var_14, ((((((arr_0 [i_0] [i_0]) * 1920)) ^ -var_0)))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [5] [i_1] = 1229725168;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_15 += ((60191 || (12839 > 4095)));
                    var_16 = (arr_9 [i_1] [i_1] [i_1] [11]);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    arr_18 [i_1] = (arr_9 [i_0] [i_0] [i_0 + 2] [i_0]);
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_17 = ((((!((min(9223372036854775792, 97))))) ? (arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2]) : (((((15138720741253082036 ? 511 : var_10))) ? (10520612673561073836 & 10168839124581324907) : -8736589128784374602))));
                                arr_24 [i_1] [5] [11] [i_1 - 2] [i_1] = 170090372;
                                arr_25 [i_1] [i_1] [i_6] [i_1] [i_0] = (((((127 ^ (arr_12 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2]))) / (arr_7 [i_8 - 1] [i_6]))) != var_5);
                            }
                        }
                    }
                    var_18 = (min(var_18, (arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
                    var_19 = (!-334092700);
                }
                var_20 += ((~(arr_0 [i_1] [i_1 - 1])));
            }
        }
    }
    var_21 = var_10;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_22 = ((((((arr_26 [i_11]) ? (arr_26 [i_10]) : 18446744073709551597))) ? var_6 : (((arr_26 [i_9]) | (arr_26 [i_9])))));
                    arr_33 [i_9] [i_9] [i_9] [i_9] = (arr_30 [i_11] [i_9] [i_11]);
                    var_23 = ((+(((arr_27 [i_11]) ? 18446744073709551613 : -28304))));
                    arr_34 [i_9] [18] = ((!(((133884578915944338 << (1575209159717044331 <= -512))))));
                    var_24 += (((min((arr_30 [i_11] [12] [i_9]), var_8)) / ((-(arr_27 [i_9])))));
                }
            }
        }
    }
    var_25 = ((((var_2 ? (!var_5) : (!var_2))) > var_3));
    #pragma endscop
}
