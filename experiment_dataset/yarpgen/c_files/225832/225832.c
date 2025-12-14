/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = (((((var_10 ? 858294166 : ((var_2 ? var_16 : 35))))) ? var_10 : var_4));
    var_19 = (var_14 ? var_6 : var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max(var_20, 55574));
                var_21 = 55603;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = (!var_11);
                                var_22 = (~var_15);
                            }
                        }
                    }
                    var_23 = 9950;
                    var_24 = (arr_12 [i_2 + 1] [i_2 + 1]);
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_25 = ((((var_10 ? ((-1354556173 / (arr_15 [i_0] [i_1] [i_5] [i_1]))) : (var_10 < var_11)))) ? (!var_13) : ((min((arr_6 [i_0] [i_5 + 2]), (arr_6 [i_0] [i_1 + 2])))));
                    arr_18 [i_0] [i_5] [i_0] = ((var_4 ? ((99 ? -85 : 9952)) : (((arr_16 [i_0] [i_0] [i_5]) * 253))));
                    var_26 = 0;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_27 = ((((max(((((arr_22 [i_0] [i_1]) || (arr_22 [i_6] [i_7])))), ((var_2 ? 1 : (arr_11 [i_0])))))) ? ((9933 ? -23 : 1884497341)) : ((((((125 >= (arr_22 [i_6] [i_6])))) % ((-1 ? var_1 : (arr_10 [19] [i_1 - 3] [i_5] [19] [i_5] [19] [i_7 + 1]))))))));
                                var_28 += (arr_6 [i_1] [i_1]);
                                arr_23 [i_0] [i_1 + 3] [i_1 + 2] [i_5] [i_6 - 1] [i_7] = (min(((var_10 ? (arr_8 [i_0] [i_6 - 1] [i_5] [i_7 - 1] [i_5 + 2]) : (arr_8 [i_7] [i_1] [i_5 - 1] [i_7 - 1] [i_5 + 3]))), (min((arr_8 [i_0] [i_1 + 2] [i_1 - 2] [i_7 - 1] [i_5 + 1]), 8))));
                            }
                        }
                    }
                    var_29 = (((((max(var_13, (arr_19 [i_0] [i_0] [i_0] [21] [i_1]))) >= var_8)) ? ((((59228 ? 255 : 52)))) : 1869796689));
                }
                for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    var_30 = (min(var_30, ((!((((arr_9 [i_1 - 2] [i_8 + 4] [i_8] [i_8 + 3]) ? var_12 : (arr_9 [i_1 - 2] [i_8 + 4] [i_8] [i_8 + 3]))))))));
                    var_31 = (~57193);
                    var_32 = (arr_13 [i_8] [i_8] [i_8] [i_8] [i_0]);
                    arr_26 [i_8 + 4] = (~var_10);
                }
                var_33 = (((((((-1 ? var_5 : 55574))) || ((((arr_0 [i_1]) ? var_7 : var_7))))) ? (((var_2 && (241 || 99)))) : (89 && 20)));
            }
        }
    }
    var_34 -= ((-32767 ? -9223372036854775803 : (((16 < 63) ? (-19781 / var_7) : (((20 ? 2410469962 : 30632)))))));
    #pragma endscop
}
