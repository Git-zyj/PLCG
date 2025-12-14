/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = ((~(max((4294967280 - 3311465119), ((1220817898 ? 4294967295 : 40))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_18 -= (min((((((var_11 ? 1085292996 : (arr_6 [i_0] [i_0 - 1])))) / 142989288169013248)), ((var_8 | (arr_6 [i_0 - 1] [i_0 - 1])))));
                    var_19 = ((-(((((var_0 ? var_10 : (arr_0 [i_1])))) ? (142989288169013248 - 4294967295) : 142989288169013265))));
                    var_20 *= ((((min((arr_9 [i_0] [i_0] [i_0 - 1]), (arr_9 [i_0 - 1] [i_0] [i_0 - 1])))) ? ((min((arr_3 [8] [i_0 - 1]), (arr_3 [2] [i_0])))) : ((-(arr_9 [i_0 - 1] [0] [i_0 - 1])))));
                    var_21 *= var_5;
                    var_22 |= (((((((((arr_6 [i_0 - 1] [i_1]) ? (arr_2 [i_1]) : (arr_4 [i_0])))) ? ((var_5 ? var_8 : (arr_9 [i_0] [i_2] [i_2]))) : -27416))) ? var_4 : ((var_13 ? (arr_8 [10] [i_1] [6]) : (arr_6 [4] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_14 [2] [i_1] |= ((-(((-13772 >= ((max((arr_11 [i_3] [i_1] [i_0 - 1]), (arr_4 [i_0 - 1])))))))));
                    arr_15 [i_0 - 1] [i_1] [i_3] = (max((114 % 28), ((~(max(var_15, 552635453))))));
                }
                var_23 = (min(((-(arr_12 [i_1] [i_0]))), ((min((!var_11), -23735)))));
                var_24 = (arr_3 [i_1] [i_1]);
                var_25 += (min((8614 & 28), ((min((arr_4 [i_0 - 1]), (arr_11 [i_0] [i_0 - 1] [i_0 - 1]))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_26 = ((((-8184 ? ((max(var_9, (arr_23 [i_0 - 1] [i_0 - 1] [i_4] [i_5] [i_1])))) : ((min(var_4, (arr_7 [i_5] [9] [i_0])))))) == var_12));
                                var_27 = 0;
                                var_28 = (max(var_28, ((((min(var_0, var_11)) << (var_3 + 10654))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_10;
    #pragma endscop
}
