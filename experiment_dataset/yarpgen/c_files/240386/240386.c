/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_13 = (0 >> 0);
                    var_14 += var_12;
                    var_15 |= (((arr_3 [i_0]) + ((4294967295 ? (107 / -7570631155845917354) : (~18446744073709551605)))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_16 *= (~-27159);

                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_17 = (max(var_17, ((((((var_10 ? (((arr_2 [i_1] [i_1] [i_5]) ? var_9 : var_9)) : (~0)))) ? -1 : ((+(((arr_12 [i_0] [10] [10]) << (((arr_4 [i_5] [i_4] [i_0]) - 39394)))))))))));
                                var_18 = (min(var_18, (((((((arr_12 [i_1 - 4] [i_1 + 1] [6]) ? 1 : (arr_12 [i_1 - 3] [i_1 - 2] [i_1 + 1])))) ? (!1) : (arr_4 [i_1 - 2] [i_1 + 3] [8]))))));
                                var_19 *= var_4;
                                var_20 = (((!(arr_9 [i_5]))) ? ((2147483647 ? (arr_11 [i_5] [i_1 - 3] [1] [i_1] [i_5]) : (arr_11 [i_5] [i_1] [6] [i_1 - 2] [i_5]))) : (arr_12 [i_3] [i_4] [0]));
                            }
                        }
                    }
                }
                arr_14 [3] [3] [1] = ((~(((((2921141849 ? 4294967294 : 58182))) ? 13 : (arr_13 [i_0] [i_1] [i_0] [i_1] [i_1 - 4] [i_0] [i_1 + 3])))));
            }
        }
    }
    var_21 = var_0;
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_22 = (((0 ? (((!(arr_19 [i_7] [i_7] [i_8] [i_8])))) : (((arr_16 [i_6] [i_6]) ? 1 : 25477)))));
                    var_23 *= (arr_18 [i_7]);
                    arr_22 [i_6] [i_6] [1] [i_8] = (((((-(arr_20 [i_6 + 1] [i_6 + 1])))) ? ((-7570631155845917354 & (arr_15 [i_6 - 1]))) : (~65528)));
                    var_24 = ((!((((arr_17 [i_6 + 1]) ? (((arr_18 [i_7]) ? var_4 : (arr_18 [i_6 - 1]))) : 2921141822)))));
                }
            }
        }
    }
    #pragma endscop
}
