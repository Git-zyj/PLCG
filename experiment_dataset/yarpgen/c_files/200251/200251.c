/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0 + 1] [2] [i_0] &= 1;
                                var_19 ^= max(((((-(arr_0 [i_1]))) % ((max((arr_5 [6] [i_4]), (arr_8 [i_0 - 1] [i_1] [i_4 + 1])))))), (((var_2 == (arr_13 [1] [6] [i_2 + 2] [i_3] [3] [i_4 + 2])))));
                                arr_18 [i_1] [i_2] [0] &= (((!128) < 113));
                                var_20 ^= (((max(16777216, 114)) != (arr_13 [3] [i_4 + 1] [i_4 - 1] [3] [i_4 + 1] [0])));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1 - 2] [i_0] = (max((((1 == 1) | ((((arr_14 [1] [8] [i_2] [i_0] [i_1] [i_1 + 2] [i_2]) != var_6))))), ((+((max((arr_7 [i_0]), (arr_10 [i_0] [i_1 - 1] [i_2 + 3]))))))));
                    var_21 = ((((((var_4 << (var_3 - 48309))))) <= (((arr_11 [i_2] [i_2] [i_1] [i_0] [i_0 - 2] [i_0 - 1]) >> (((arr_11 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [1]) - 683828717))))));
                }
            }
        }
    }
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            {
                var_23 -= -30389;
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((((((-127 - 1) ? 128 : 96)) != ((((((arr_32 [i_8] [i_7] [i_7] [i_6] [i_6] [i_5 + 1]) ? (arr_26 [0] [i_6 - 1] [12]) : (arr_32 [10] [i_6] [i_5] [i_8 - 1] [i_7 - 2] [i_5 + 1]))) == var_7))))))));
                            var_25 = (arr_20 [i_5 - 1] [i_6]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
