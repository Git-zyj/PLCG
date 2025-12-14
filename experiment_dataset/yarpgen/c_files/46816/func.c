/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46816
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 |= max((((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0] [i_1]) : (var_4))) / (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_3 [6U]) : (var_3))))), ((~(var_7))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((var_9), (arr_0 [i_0] [i_1]))) != (arr_0 [i_0] [i_1])));
                arr_6 [i_1] = (~(min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_11 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_12 = ((unsigned int) var_5);
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_13 [i_2] = ((/* implicit */unsigned int) ((var_9) <= (arr_8 [i_3])));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_13 = arr_17 [i_2] [i_3] [i_3] [i_3] [i_3];
                        var_14 = ((var_7) & (arr_12 [i_2]));
                        var_15 = ((((var_4) | (var_0))) | (arr_15 [i_2] [i_3] [i_4] [i_2]));
                    }
                    arr_18 [i_2] [i_4] = ((unsigned int) arr_14 [i_2] [i_3]);
                }
            } 
        } 
        arr_19 [i_2] [i_2] = ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? (var_0) : (arr_10 [i_2] [i_2] [i_2]));
        var_16 = 1122667581U;
    }
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_17 = ((unsigned int) 8191U);
        arr_23 [4U] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) max((var_5), (arr_14 [i_6] [i_6])))))))));
        /* LoopSeq 4 */
        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 4) 
        {
            arr_26 [i_6] [i_7 + 1] = var_7;
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 11; i_8 += 3) 
            {
                for (unsigned int i_9 = 4; i_9 < 13; i_9 += 1) 
                {
                    {
                        arr_32 [i_6] [i_6] [i_8 - 1] [i_9 - 2] [i_9 - 2] [i_6] = ((((/* implicit */_Bool) (+(1949848816U)))) ? (min((((/* implicit */unsigned int) ((arr_20 [i_6] [7U]) >= (var_5)))), ((+(var_9))))) : (((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (arr_20 [i_6] [i_6]) : (arr_20 [i_6] [i_6]))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_7]))))), (((((/* implicit */_Bool) var_4)) ? (var_3) : (arr_10 [i_8 - 1] [i_7] [i_7])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 4; i_10 < 12; i_10 += 1) 
                        {
                            arr_37 [i_7] [i_9 - 3] [i_6] [12U] [i_7] |= ((((/* implicit */_Bool) (~(var_2)))) ? ((-(arr_30 [i_10 - 3] [2U] [i_7 + 2] [i_7]))) : (((((/* implicit */_Bool) arr_30 [i_10 - 1] [i_8 - 1] [i_7 - 1] [i_7 - 2])) ? (arr_30 [i_10 - 4] [1U] [i_7 - 2] [i_7]) : (4294959105U))));
                            var_19 *= var_1;
                            arr_38 [i_6] [i_7] [i_8] [i_9 - 3] [i_7] [i_9 + 1] [i_8] |= min((var_9), (max((var_6), (arr_27 [i_10] [i_8 - 1] [i_9 + 1] [i_8 - 1]))));
                            var_20 = max((((((/* implicit */_Bool) ((unsigned int) 3399551001U))) ? (var_3) : (var_8))), ((-(((((/* implicit */_Bool) 1737628937U)) ? (var_5) : (arr_24 [i_6]))))));
                            arr_39 [i_6] [i_7] [i_8] [0U] [i_10 - 1] &= 470764646U;
                        }
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            var_21 = ((((/* implicit */_Bool) max((min((0U), (var_2))), (max((arr_42 [i_8 + 1] [i_6] [i_8] [i_9] [2U]), (var_5)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_3) : (arr_17 [i_7 - 2] [i_7] [i_8 - 1] [i_9 - 2] [i_9]))) : (((((/* implicit */_Bool) var_8)) ? (arr_29 [i_6] [i_6] [i_6] [i_8 + 3]) : (var_2))));
                            var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_6])))))))) - ((+((+(1684566942U))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) max((var_7), (arr_29 [i_9 - 2] [i_7] [i_9 - 1] [i_9 + 1])))) ? ((-(var_0))) : (((((/* implicit */_Bool) var_9)) ? (arr_42 [i_9 - 2] [i_7] [i_9] [i_9 + 1] [i_9 - 2]) : (arr_42 [i_9 - 2] [i_7] [i_9] [i_9 + 1] [i_9 - 2])))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_24 = 4132770771U;
                arr_47 [i_6] [i_7] [i_6] [i_6] = var_1;
                arr_48 [i_6] [i_12] = (~(arr_34 [10U] [i_6] [i_12]));
                var_25 = ((var_0) * (arr_46 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 2]));
                var_26 = ((arr_44 [i_7] [i_7 + 1] [i_7 + 1]) * (var_9));
            }
            var_27 = ((/* implicit */unsigned int) min((var_27), (arr_16 [i_6] [i_6] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7])));
        }
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            arr_51 [i_13] [i_6] [i_6] = ((((/* implicit */_Bool) var_8)) ? (0U) : (((arr_46 [i_6] [i_6] [i_13] [i_6]) % (arr_49 [i_6] [i_6]))));
            arr_52 [i_6] = ((unsigned int) max((var_8), (var_1)));
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                arr_57 [i_6] [i_6] [i_6] [i_6] = (+(var_0));
                arr_58 [i_6] [i_6] [7U] [i_6] = (+(((((/* implicit */_Bool) (-(903167492U)))) ? ((+(arr_27 [i_6] [i_13] [i_14] [i_13]))) : ((-(var_4))))));
                var_28 = var_7;
                var_29 = var_9;
            }
            for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                var_30 = ((/* implicit */unsigned int) min((var_30), (min((var_2), (arr_60 [i_6] [i_13] [i_15])))));
                var_31 = var_4;
                var_32 = min((max((var_3), (var_7))), (min((((unsigned int) var_1)), (4294967295U))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    for (unsigned int i_17 = 3; i_17 < 11; i_17 += 4) 
                    {
                        {
                            var_33 = 2933107979U;
                            arr_66 [i_6] [i_15] [i_6] [i_16] [i_17 + 2] [i_17] [i_6] = ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_17 - 1])) ? (var_5) : (arr_35 [i_17 + 2] [i_17 + 2] [4U] [i_17] [i_6])));
                        }
                    } 
                } 
                arr_67 [13U] [0U] [i_6] = min((((((((/* implicit */_Bool) var_6)) ? (var_2) : (4169380451U))) ^ (max((arr_31 [i_6] [i_6] [10U]), (var_3))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))));
            }
            arr_68 [i_6] = min((max((max((var_8), (var_1))), (max((arr_64 [i_6] [i_6] [i_6] [10U] [i_6]), (var_6))))), (var_9));
        }
        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
        {
            var_34 = ((/* implicit */unsigned int) min((var_34), (max((((/* implicit */unsigned int) ((arr_31 [0U] [2U] [i_6]) != (arr_22 [12U])))), (((((/* implicit */_Bool) var_3)) ? (var_4) : (((unsigned int) 0U))))))));
            arr_71 [i_6] [i_18] = min((((((/* implicit */_Bool) var_2)) ? (min((var_1), (arr_12 [i_6]))) : (var_6))), (((((/* implicit */_Bool) min((var_7), (4294967290U)))) ? (min((arr_60 [i_6] [i_18] [i_6]), (var_4))) : (((unsigned int) var_3)))));
            var_35 = ((((/* implicit */_Bool) (~(((unsigned int) arr_44 [i_6] [i_6] [i_18]))))) ? (min((var_1), (var_2))) : (min((arr_69 [i_18] [i_6] [i_6]), (arr_65 [i_6] [i_18] [i_6] [i_18]))));
        }
        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_20 = 1; i_20 < 12; i_20 += 2) 
            {
                for (unsigned int i_21 = 0; i_21 < 14; i_21 += 1) 
                {
                    for (unsigned int i_22 = 0; i_22 < 14; i_22 += 3) 
                    {
                        {
                            var_36 = min((max((((((/* implicit */_Bool) var_4)) ? (var_0) : (var_8))), (var_1))), (((var_1) >> ((((-(var_6))) - (4185652373U))))));
                            arr_85 [i_22] [i_6] [i_20 + 2] [i_19] [i_6] [i_6] = (~(var_6));
                            var_37 = (~(min((var_2), (arr_49 [i_20 - 1] [i_6]))));
                            arr_86 [i_6] [i_19] [i_6] = (+(((((((/* implicit */_Bool) var_1)) ? (162196526U) : (13U))) >> (((arr_43 [i_20] [i_20] [i_20 + 1] [i_20] [i_20 - 1] [i_22] [i_22]) - (4133030424U))))));
                        }
                    } 
                } 
            } 
            var_38 = max((arr_65 [i_6] [i_19] [i_19] [i_19]), ((-(min((var_7), (arr_20 [i_6] [i_6]))))));
            arr_87 [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_64 [i_6] [i_6] [i_19] [i_19] [i_6]))));
            arr_88 [i_6] [i_19] [i_6] = (~(((((/* implicit */_Bool) arr_79 [i_19] [i_19] [i_6] [10U])) ? (var_4) : (arr_56 [i_6]))));
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                arr_91 [i_6] [i_19] [i_6] = var_2;
                var_39 = (+(((arr_89 [i_6] [i_19] [i_23] [i_23]) + (var_2))));
                var_40 = ((((2055766844U) >= (arr_35 [i_6] [i_19] [i_6] [i_19] [i_6]))) ? ((~(arr_35 [i_6] [i_6] [i_23] [i_6] [i_6]))) : (((2040U) | (var_4))));
            }
        }
        arr_92 [i_6] = ((/* implicit */unsigned int) ((((unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (1073741824U)))) <= (((unsigned int) min((var_7), (var_5))))));
        arr_93 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_90 [i_6] [i_6]) != (arr_90 [i_6] [i_6])))) - (((/* implicit */int) (!(((4294967295U) > (var_3))))))));
    }
}
