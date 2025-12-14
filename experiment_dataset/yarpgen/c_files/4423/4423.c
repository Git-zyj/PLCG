/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((1 ? var_2 : 51637)), 19145));
    var_13 *= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((+((((min((arr_0 [i_0]), var_0))) ? (arr_3 [i_0]) : (arr_2 [i_0] [i_1])))));
                var_15 += (255 % (((((-9 ? (arr_4 [i_1] [i_1]) : 65535))) ? ((-19145 ? -6665303812216721610 : 19145)) : (~0))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [0] [0] [i_1] [15] [i_1] = (arr_1 [i_4]);
                                var_16 ^= (((((1 ? (arr_5 [i_2] [i_1]) : (arr_5 [i_1] [i_1])))) ? (min((arr_5 [i_1] [i_2]), (arr_5 [i_3] [i_4]))) : ((~(arr_5 [i_2] [i_2])))));
                                var_17 ^= (-1012103100 + 87);
                                var_18 = (min(var_18, (((((((((var_0 + (arr_10 [i_0] [i_0] [i_0] [1]))) != ((var_6 ? (arr_10 [i_4] [i_3] [i_1] [i_0]) : -1012103098)))))) ^ (((((55 | (arr_7 [i_4] [3] [i_4] [3] [3])))) ? (((min(28640, -30544)))) : var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 |= ((!(((((var_5 ? -1 : 2203657590942964799)) / var_2)))));
    #pragma endscop
}
