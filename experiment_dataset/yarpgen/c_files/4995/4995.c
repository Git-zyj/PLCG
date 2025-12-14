/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1144406224 ? (var_0 ^ var_7) : -7039631091177588640));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (((max(((-(arr_1 [i_0]))), (((arr_0 [i_0]) * 113)))) / (arr_1 [i_0])));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_1] [i_0] = 1144406224;
                    var_18 ^= 7039631091177588650;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_0] [i_0] = (min((~-13694), -25946));
                    arr_13 [i_0] [i_1] [i_3] [i_0] = ((!((((((2 / (arr_1 [i_3])))) ? (min((arr_1 [i_0]), (arr_9 [i_0]))) : (((!(arr_9 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_19 ^= (arr_6 [i_0] [i_0] [i_0]);
                                arr_19 [i_5] [i_5] = 765508640;
                                var_20 = -1940499466;
                                var_21 = (((-20821 ? (((min(247, (arr_18 [i_3]))))) : ((~(arr_16 [i_5] [i_1] [i_1] [i_4] [i_4] [i_3]))))));
                            }
                        }
                    }
                }
                var_22 ^= (34561 <= 1367319988);
                arr_20 [i_0] [i_1] [i_1] = 1;
            }
        }
    }
    var_23 = var_5;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                var_24 = (((arr_21 [i_7]) && (arr_25 [i_6] [i_6])));
                var_25 = ((!(arr_23 [i_7] [i_7])));
                arr_26 [i_6] = -1144406208;
                var_26 *= (arr_24 [i_7]);
                var_27 ^= (min((arr_23 [i_6] [i_6]), (((~(min(-17335, 1144406224)))))));
            }
        }
    }
    #pragma endscop
}
