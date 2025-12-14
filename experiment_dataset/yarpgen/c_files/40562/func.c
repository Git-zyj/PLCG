/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40562
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [9U] |= ((/* implicit */unsigned int) ((signed char) var_2));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] = ((max((((/* implicit */unsigned int) ((var_0) == (3226030485U)))), (arr_8 [i_2 + 1]))) + ((+(((var_0) / (2097088U))))));
                        arr_12 [i_0] [i_1] [i_3] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) != (var_9))))) / (max((4292870208U), (min((2097072U), (((/* implicit */unsigned int) arr_1 [i_3])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 3; i_4 < 10; i_4 += 1) 
                    {
                        arr_15 [i_4] [(signed char)0] [i_2] [(signed char)2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
                        arr_16 [i_1] = 4294967281U;
                        arr_17 [i_0] [i_0] [i_0] [i_4] [i_1] [i_4] = var_7;
                    }
                    for (unsigned int i_5 = 3; i_5 < 12; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_10);
                            arr_23 [i_6] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_19 [i_5] [i_5])))) ? (arr_21 [i_0] [i_0] [4U] [i_5 - 1] [i_6] [i_0] [i_0]) : (((unsigned int) 14U)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            arr_27 [i_0 + 2] [i_1] [i_1] [i_5] [i_5] = var_5;
                            arr_28 [i_0] [i_0] [i_2] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (2147483648U) : (((4292870228U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_0])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 3; i_8 < 11; i_8 += 3) 
                        {
                            arr_32 [i_2] [i_5] [i_2] [i_1 + 1] [i_2] = (~(1781401979U));
                            arr_33 [i_0] [i_2] [i_0] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_0] [12U] [(signed char)11] [i_5] [(signed char)2] [i_8 - 2])) ? (((((/* implicit */_Bool) 4292870215U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3))) : (((var_4) ^ (var_8)))));
                            arr_34 [i_5] [i_5] = ((/* implicit */signed char) (-(arr_10 [i_5] [i_2 + 1] [i_5])));
                        }
                        arr_35 [i_5] [i_5] [i_2] [i_1] [i_5] [i_0] = ((3344734682U) & (4292870209U));
                        arr_36 [i_1] [(signed char)5] [i_5] [i_1] [i_5] = ((signed char) ((signed char) min((var_4), (var_8))));
                    }
                    arr_37 [i_0] [i_1 + 1] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (arr_9 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) : (((var_3) | (0U))))))));
                    arr_38 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((min((((var_0) * (3513642859U))), (((/* implicit */unsigned int) arr_7 [i_0] [0U] [i_0])))) >> (((((/* implicit */int) max((arr_25 [i_0 - 2] [i_0 - 2] [i_2] [i_2]), (((signed char) arr_20 [i_1] [i_1] [i_2 - 2] [i_2] [i_1] [i_0] [i_0]))))) + (67)))));
                }
            } 
        } 
        arr_39 [i_0] = ((/* implicit */unsigned int) arr_18 [(signed char)0] [i_0]);
        arr_40 [i_0] [i_0] = ((/* implicit */signed char) (-(arr_9 [4U] [0U] [i_0] [i_0] [0U] [i_0])));
        arr_41 [i_0] = (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_4)))) ? (((((/* implicit */_Bool) 3860308461U)) ? (4196275695U) : (2386853904U))) : (((arr_24 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    }
    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_47 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) >= (((((/* implicit */int) var_7)) / (((/* implicit */int) var_10))))));
            arr_48 [i_9] [i_9] = var_0;
            arr_49 [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (arr_19 [i_10] [i_10]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_10])) ? (((/* implicit */int) arr_1 [i_9])) : (((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) (~((-(((/* implicit */int) var_2)))))))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                arr_55 [i_9] = (~(((((/* implicit */_Bool) 4287472356U)) ? (63488U) : (1904995430U))));
                arr_56 [i_9] [i_11] [6U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_53 [i_9] [i_9] [i_11] [i_12]))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    for (unsigned int i_14 = 3; i_14 < 9; i_14 += 2) 
                    {
                        {
                            arr_62 [i_9] [i_9] [i_13] [i_9] [i_9] [4U] = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (543540807U) : (var_4))) : (64512U));
                            arr_63 [i_9] [i_9] [i_11 - 1] [i_12] [(signed char)2] [i_13] [i_9] = arr_54 [i_12] [i_11] [i_9] [(signed char)2];
                            arr_64 [i_9] [i_11] [i_13] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-14))));
                            arr_65 [i_9] [i_13] [i_14] = ((/* implicit */signed char) var_3);
                            arr_66 [i_13] [2U] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9] [i_13] [i_14 - 3] [i_9])) ? (var_8) : (1146421850U));
                        }
                    } 
                } 
                arr_67 [i_9] [(signed char)4] [i_12] = ((((/* implicit */_Bool) arr_19 [10U] [i_11 + 1])) ? (arr_30 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1]) : (arr_19 [12U] [i_11 + 1]));
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    arr_72 [i_9] = ((/* implicit */unsigned int) ((signed char) arr_10 [i_9] [i_11 + 1] [i_15]));
                    arr_73 [i_9] [i_9] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) >= (arr_5 [i_11] [i_11 + 1])));
                    arr_74 [i_9] [i_12] [i_9] = ((/* implicit */signed char) (-(434658828U)));
                    arr_75 [i_9] [i_9] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (3860308461U))));
                    arr_76 [i_9] [i_11] [7U] [i_12] [i_15] = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (arr_30 [i_9] [i_11] [i_11 + 1] [i_15]));
                }
                for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    arr_80 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (arr_29 [i_9] [i_9] [i_11 + 1] [i_12] [i_16] [i_16]) : ((-(arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [(signed char)0] [i_9])))));
                    arr_81 [i_9] [i_11] [(signed char)6] [i_16] = arr_6 [i_12];
                }
            }
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                for (signed char i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    {
                        arr_90 [i_17] [i_11] [i_9] [i_17] = ((/* implicit */signed char) ((unsigned int) var_2));
                        arr_91 [i_18] [i_17] [i_11 - 1] [i_11 - 1] [i_18] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) <= (var_9))))));
                        arr_92 [i_18] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (signed char)-97))));
                        /* LoopSeq 1 */
                        for (unsigned int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            arr_96 [i_9] = (i_9 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_11 + 1] [i_11 - 1] [i_11])) >> (((((/* implicit */int) arr_68 [i_9] [i_11 - 1] [i_9] [i_19])) - (92)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_11 + 1] [i_11 - 1] [i_11])) >> (((((((/* implicit */int) arr_68 [i_9] [i_11 - 1] [i_9] [i_19])) - (92))) + (32))))));
                            arr_97 [i_9] [i_11] [i_17] [i_17] [i_9] = ((/* implicit */signed char) (((~(var_9))) * (arr_29 [i_9] [i_9] [i_11 + 1] [8U] [5U] [i_11 + 1])));
                            arr_98 [i_18] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_18 [i_18] [i_18]))));
                            arr_99 [i_9] [i_11] [7U] [i_11] [4U] [i_9] [(signed char)6] = ((/* implicit */signed char) arr_19 [i_9] [i_9]);
                        }
                    }
                } 
            } 
        }
        arr_100 [(signed char)6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_9])) ? (((/* implicit */int) arr_42 [i_9])) : (((/* implicit */int) arr_42 [i_9])))))));
        arr_101 [(signed char)0] [i_9] = ((/* implicit */unsigned int) arr_45 [4U]);
    }
    var_11 = var_8;
}
