/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189812
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1 + 2] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */signed char) arr_7 [i_4 - 1] [i_3] [i_2] [i_1 + 3] [i_0]);
                                var_18 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_10)) < (arr_1 [i_4 - 1] [i_1 + 1])))), (arr_1 [i_4 + 2] [i_1 + 2])));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((short) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (var_15) : (((/* implicit */int) ((unsigned short) var_10)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (long long int i_6 = 4; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_14 [i_1 + 1] [i_2 + 1] [i_6 - 1]) - ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                                arr_17 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [4] = ((/* implicit */signed char) max((((((/* implicit */int) ((unsigned short) arr_13 [i_1 - 1] [i_1] [i_2] [i_5]))) >> (((max((((/* implicit */unsigned int) (_Bool)0)), (1598086487U))) - (1598086483U))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */int) var_3)))))) >= (((((/* implicit */_Bool) var_13)) ? (arr_5 [i_0] [i_2] [i_5] [i_0]) : (((/* implicit */unsigned long long int) var_8)))))))));
                                arr_18 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 3) 
    {
        for (unsigned short i_8 = 3; i_8 < 14; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */_Bool) ((arr_22 [i_9] [12] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            var_22 |= ((/* implicit */unsigned char) (((+(arr_7 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [11]))) / (arr_13 [i_7] [i_7] [i_7] [i_7])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_11 = 1; i_11 < 14; i_11 += 3) 
                {
                    for (unsigned char i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(_Bool)1] [i_8 - 2])) % (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_36 [i_7] [i_8 - 3] [i_11 + 2] [i_12] [(signed char)8])))) : (((/* implicit */int) arr_30 [i_7] [(signed char)0] [i_7] [i_7]))));
                                var_24 = ((/* implicit */unsigned char) (_Bool)1);
                                arr_37 [i_7] [i_8] [(_Bool)0] [i_7] [i_7] = ((/* implicit */unsigned int) var_1);
                                arr_38 [i_7] [i_8 + 2] [i_8 + 2] [i_12 + 3] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_25 [i_7] [i_12]) ? (arr_21 [i_7 + 3] [1]) : (((/* implicit */int) arr_9 [i_7] [i_8] [i_11 + 1] [i_12 - 1] [i_13]))))) ? (((/* implicit */int) arr_33 [i_7] [i_7 + 2] [i_12 + 2] [(unsigned short)1] [i_11 + 1])) : ((+(((/* implicit */int) arr_10 [i_7] [i_7] [i_8] [i_11 + 2] [1] [i_13])))))) >> (((((/* implicit */int) arr_9 [i_7] [i_8 - 2] [14U] [i_12 + 1] [i_13])) - (72)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned int i_15 = 4; i_15 < 14; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            {
                                arr_46 [i_7 + 1] [i_15] |= ((/* implicit */_Bool) arr_19 [i_15]);
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(min((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_14])) && (((/* implicit */_Bool) arr_0 [i_7]))))), (max((((/* implicit */int) (_Bool)1)), (0))))))))));
                                var_26 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_29 [i_15] [i_8] [i_15] [i_16])) ? (((((/* implicit */_Bool) -1705784515)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_15] [i_8]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                                arr_47 [i_7] [(_Bool)1] [i_7] [i_14] [(_Bool)1] [i_16] = ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_30 [i_8] [i_7] [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) var_1)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            for (int i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_20 = 1; i_20 < 9; i_20 += 2) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */short) (~(((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_17] [i_18] [i_20 + 2] [8U] [i_21]))))));
                                var_28 = ((/* implicit */unsigned long long int) var_0);
                                var_29 = min((((int) (signed char)-1)), (((int) ((int) arr_41 [i_17] [i_20] [i_17] [i_17]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        for (int i_23 = 0; i_23 < 11; i_23 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_23] [i_23]))))) ^ (((((/* implicit */int) arr_24 [i_23] [i_18])) / (((/* implicit */int) arr_24 [i_23] [i_22]))))));
                                arr_67 [i_23] [i_18] [i_23] = ((((((/* implicit */_Bool) ((int) -1705784515))) ? (((-369510381) * (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_10 [i_17] [10] [(unsigned short)0] [i_19] [i_22] [(unsigned char)12])))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7993))) : (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned long long int) 1705784514)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 4) 
                    {
                        for (int i_25 = 1; i_25 < 9; i_25 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((((/* implicit */int) arr_23 [i_25 - 1] [i_24] [i_25])) * (((/* implicit */int) arr_23 [i_25 - 1] [i_18] [i_25 + 2])))) >> (((((/* implicit */int) min((arr_59 [i_24] [i_25 + 1]), (((/* implicit */unsigned short) arr_43 [i_17] [i_25 + 1] [i_19]))))) - (37681))))))));
                                arr_73 [i_17] [i_19] [i_24] [i_25] = ((/* implicit */_Bool) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (arr_70 [5U] [i_25]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [(unsigned char)4] [i_24] [i_19])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                        {
                            {
                                arr_79 [i_17] [i_26] = ((/* implicit */unsigned int) arr_56 [i_17] [i_17] [i_17] [i_17] [i_17]);
                                var_32 = ((/* implicit */int) arr_75 [i_17] [2] [i_19] [i_26]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_28 = 1; i_28 < 10; i_28 += 2) 
                    {
                        for (unsigned char i_29 = 0; i_29 < 11; i_29 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_25 [i_18] [(unsigned short)4]))))))) ? ((-(((/* implicit */int) arr_27 [i_28 - 1] [i_28 - 1] [i_28 + 1] [i_28 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_28 + 1] [i_28] [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_17]))))))))));
                                arr_86 [i_29] = ((/* implicit */unsigned char) var_6);
                                var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) 3745570490U)) ? (-1) : (((/* implicit */int) (signed char)0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_30 = 0; i_30 < 15; i_30 += 3) 
    {
        for (unsigned char i_31 = 0; i_31 < 15; i_31 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_32 = 0; i_32 < 15; i_32 += 3) 
                {
                    for (signed char i_33 = 0; i_33 < 15; i_33 += 3) 
                    {
                        {
                            arr_99 [i_30] [(unsigned short)14] [i_30] [i_32] [i_32] [4] |= ((/* implicit */unsigned int) var_14);
                            var_35 *= ((/* implicit */unsigned int) ((((((/* implicit */int) min(((unsigned short)23769), (((/* implicit */unsigned short) arr_25 [(signed char)2] [6U]))))) * (arr_97 [i_30] [(signed char)8] [i_32]))) / (((((/* implicit */_Bool) (-(arr_31 [i_33] [i_32] [i_31] [(short)9])))) ? (((int) 1705784514)) : (((((/* implicit */int) (short)-10724)) / (var_14)))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)15599)) & (((/* implicit */int) (unsigned short)41767))));
                            arr_100 [i_33] [i_31] [i_31] [(unsigned char)3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (signed char)33)) >= (((/* implicit */int) (short)15599)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_34 = 2; i_34 < 13; i_34 += 4) 
                {
                    for (unsigned short i_35 = 0; i_35 < 15; i_35 += 4) 
                    {
                        for (signed char i_36 = 0; i_36 < 15; i_36 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_105 [i_30] [8ULL] [i_36] [i_35] [i_36] [i_36]), (arr_105 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30])))) | (var_14))))));
                                var_38 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((arr_21 [i_30] [(signed char)8]) ^ (((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_27 [i_34] [i_34 + 2] [i_34 + 2] [i_34 + 2])) < (((int) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))));
                                var_39 = ((((/* implicit */_Bool) ((arr_101 [i_34 - 1] [i_34 - 1] [i_34 + 2] [i_34]) ? (((/* implicit */int) arr_101 [i_34 + 2] [i_34 + 2] [i_34 + 1] [i_34])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_12 [i_34 - 1] [i_34 - 1] [i_34 + 2])) : (((/* implicit */int) arr_12 [i_34 - 2] [i_34 + 1] [i_34 + 1])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_37 = 0; i_37 < 15; i_37 += 3) 
                {
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                    {
                        {
                            arr_118 [i_31] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) arr_1 [i_38] [i_31])) * (arr_22 [i_30] [i_30] [i_30])))));
                            var_40 = ((/* implicit */int) arr_15 [i_30] [i_31] [i_31] [i_30] [i_31] [i_30]);
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_14), (((((/* implicit */_Bool) -1344259308)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_109 [i_30] [3U] [11] [13ULL] [i_31]))))))) ? (max((var_0), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_38] [i_31] [(short)1] [i_38]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                    {
                        for (int i_41 = 0; i_41 < 15; i_41 += 3) 
                        {
                            {
                                arr_125 [i_40] [i_31] = ((/* implicit */short) var_15);
                                var_42 = ((/* implicit */signed char) arr_105 [i_41] [i_40] [6] [i_31] [i_31] [i_30]);
                                arr_126 [i_30] [i_31] [i_39] [1] [i_31] [8] [1] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
