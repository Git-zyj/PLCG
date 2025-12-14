/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = ((-4107195708 + ((((((-(arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_1])))) ? ((var_11 + (arr_0 [i_2]))) : -var_2)))));
                    var_14 = ((((var_13 >= (arr_7 [i_0 - 1] [i_0 - 1]))) ? var_0 : (((arr_5 [i_0]) ? ((((arr_5 [i_0]) >> 0))) : (((arr_6 [i_0] [i_1] [2] [2]) ^ 187771587))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (((187771587 != 44377) ? (min(var_0, (arr_14 [i_1] [i_1] [i_3 + 1] [i_1 + 2] [i_0 - 2] [i_2]))) : (((arr_14 [i_0] [i_0] [i_3 - 1] [i_1 + 1] [i_0 + 1] [i_2]) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
                                var_16 = ((((((var_3 > (max((arr_2 [i_1] [i_1]), 0)))))) >= 2352859846));
                                arr_15 [i_0] [i_1] [i_0] = -187771587;
                            }
                        }
                    }
                    var_17 *= ((((((((var_4 << (((((arr_0 [i_2]) + 815)) - 24))))) ? var_2 : ((~(arr_1 [i_0])))))) ? (max(((4107195709 ? 187771587 : var_8)), (((1929843558 ? (arr_3 [i_1 - 1]) : (arr_1 [13])))))) : (((var_11 ^ (~var_5))))));
                }
            }
        }
    }
    var_18 = ((((((var_12 * var_5) * (var_6 > 23)))) ? (((((var_5 ? 1 : var_7)) | var_5))) : ((((max(4294967295, 187771595))) ? (((max(var_2, var_7)))) : ((16250 ? var_9 : var_3))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            {
                var_19 &= (((((var_0 ? (arr_16 [i_5] [24]) : (arr_17 [i_6] [12]))) == var_8)) ? (((var_9 < 4107195709) << (var_10 - 57035))) : 2059017831);
                var_20 = var_5;
                var_21 = (max(var_21, ((((((+((((arr_19 [22] [22] [22]) > var_10)))))) ? var_2 : (min((max(2059017831, var_11)), 10104)))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_22 = (((arr_24 [i_7 + 2] [i_6 - 3] [i_5] [i_6] [i_6 - 2]) / (min((((arr_18 [i_5]) << (-12 + 19))), (arr_17 [i_5] [i_5])))));
                            var_23 = min(((((max(1798927538, var_2))) ? ((0 ? (arr_25 [i_5] [i_5] [i_5]) : 65513)) : (var_9 == var_4))), 1);
                            var_24 = 15355395776279851686;
                            var_25 = (((((var_5 ? -187278502 : (arr_22 [i_5] [i_6] [i_8])))) == ((((1218355012 - var_1) == var_10)))));
                            var_26 = (((((((((arr_25 [i_5] [i_6] [i_5]) ? 0 : 23311))) ? ((~(arr_16 [i_5] [i_5]))) : ((~(arr_21 [i_5] [i_7])))))) ? (((((arr_23 [i_6 + 1] [i_7 + 3] [i_8 - 1] [i_8 - 1]) || var_3)))) : (((var_11 ? 187771587 : 5371)))));
                        }
                    }
                }
            }
        }
    }
    var_27 = var_6;
    #pragma endscop
}
