/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (10751 & 65534);
                var_11 = ((((((arr_6 [i_0 + 1] [12]) + var_2)) + (var_3 - var_8))) + (((var_7 + -9223372036854775787) + var_6)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 ^= (((((var_3 != 9223372036854775802) & (352003605 & -7))) + ((((arr_1 [i_0 - 1]) || (6218970280607637976 % 12162283734618289500))))));
                            var_13 = (((((arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]) / 1408971957145060386)) - (var_2 / var_1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_14 = (min(var_14, ((((1166629551 - 16777216) & ((((1 || (arr_11 [i_4 + 2] [i_1] [i_4 + 2] [i_6]))))))))));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] = ((((((arr_10 [i_0 - 1] [9] [i_4 - 1] [i_5]) != (arr_17 [i_0] [i_0 - 1] [i_4 + 1] [i_0] [i_1] [i_6] [i_6])))) - (var_4 != 32759)));
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_6] = ((((((arr_18 [i_6] [5] [i_4 + 3] [i_4 + 3] [i_6] [0]) / (arr_18 [i_6] [i_1] [i_0 + 1] [i_4 - 1] [i_6] [i_0])))) && (248 / 92483519)));
                            }
                            for (int i_7 = 3; i_7 < 18;i_7 += 1)
                            {
                                arr_24 [i_1] [17] [17] = (((((arr_19 [i_7] [i_7 - 3] [i_7] [i_7] [i_7 - 3]) & var_9)) | (1902 != var_8)));
                                var_15 = (((((20742 | 18014396361998336) & ((var_1 - (arr_4 [i_0]))))) / ((((((((arr_10 [4] [i_1] [i_4] [4]) | 6383890869089443494))) && (var_6 > var_0)))))));
                                arr_25 [15] [i_1] [17] [17] [i_1] = (((var_9 % var_1) != ((((var_5 == (arr_17 [i_7 - 1] [i_7] [i_1] [i_5] [i_1] [i_5] [i_5])))))));
                            }
                            arr_26 [i_1] [9] [i_4 + 2] [i_1] [14] [i_1] = (((((var_1 % (arr_7 [20] [20] [i_0] [i_0]))) + var_1)) << (((349298466 <= var_3) | (65535 || 1235806209))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((111 & var_9) + var_4)) < (((65535 || var_7) & var_9))));
    var_17 = (max(var_17, var_3));
    var_18 = (max(var_18, (((((-2147483626 ^ -1149739760) >> (197 - 197))) >> (var_8 - 369454864)))));
    #pragma endscop
}
