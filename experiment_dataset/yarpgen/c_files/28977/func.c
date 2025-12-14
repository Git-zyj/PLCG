/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28977
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned char) max((arr_7 [i_0] [i_0] [i_1] [i_2]), (arr_7 [i_0] [i_1] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((5230370736136868910LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)2))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_3 - 1])) ? (arr_4 [i_3 + 3] [i_3 + 1]) : (arr_4 [i_3 - 1] [i_3 - 1]))))));
                                var_18 = ((/* implicit */_Bool) ((max((1329807592), (-1329807592))) / (-1863700393)));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_3 + 2] [i_4]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-30314)) / (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3] [i_3] [i_3]))))) : (((((/* implicit */_Bool) arr_12 [i_3 - 1] [13] [(short)3] [i_3 + 1] [(unsigned char)8])) ? (2782041436U) : (971678552U)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_2]))) == (min((((/* implicit */unsigned long long int) 3619997055U)), (arr_1 [i_0])))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned int) arr_5 [i_0]);
        arr_17 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (arr_15 [i_0] [(short)13] [i_0] [(short)3] [i_0] [i_0])));
    }
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        arr_21 [(short)13] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2383940530U)) ? (arr_19 [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5 - 1]))))) / (max((arr_19 [i_5 - 1]), (arr_19 [i_5 - 2])))));
        var_22 = ((/* implicit */short) ((int) ((int) (short)31636)));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) arr_26 [i_5] [i_6] [i_7]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_8 = 2; i_8 < 20; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */int) arr_26 [i_8 - 1] [i_8 - 1] [i_5 - 1]);
                        var_25 = 3103952715U;
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 2; i_10 < 21; i_10 += 3) 
                        {
                            var_26 |= ((/* implicit */unsigned long long int) ((unsigned short) arr_19 [i_5 - 2]));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5 + 1])) ? (151526280123590026LL) : (((/* implicit */long long int) ((arr_33 [i_5 + 1] [i_6] [21] [i_9] [i_10 - 2]) / (2689068033U))))));
                        }
                        var_28 = ((unsigned int) arr_23 [i_5] [13LL]);
                        var_29 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 - 2] [i_5 + 1]))) / (2315073186U)));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_6] [i_6] = ((/* implicit */short) (signed char)-1);
                        /* LoopSeq 3 */
                        for (short i_12 = 1; i_12 < 18; i_12 += 2) 
                        {
                            arr_43 [i_6] = ((/* implicit */unsigned short) arr_39 [i_5 - 2] [i_12 + 3]);
                            arr_44 [7LL] [i_6] = ((/* implicit */int) ((1723663071) == (((/* implicit */int) (_Bool)1))));
                            arr_45 [i_12] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 2] = ((/* implicit */unsigned int) ((short) ((unsigned int) arr_18 [i_5 + 1])));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((-114288492) | (((/* implicit */int) (short)-19017))))), (max((((/* implicit */unsigned int) (_Bool)1)), (2181231046U)))))) ? (max((((((/* implicit */_Bool) (short)2047)) ? (arr_32 [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_5 - 1] [(signed char)20] [i_11] [i_12 + 2]))))), (arr_41 [i_12] [i_12] [(short)4] [i_12 + 4] [i_12] [(short)4] [i_12 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_41 [i_5 + 1] [i_5] [i_6] [i_7] [(_Bool)1] [i_12 - 1] [i_12]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [i_5 + 1] [i_5]))))))))));
                            arr_46 [i_5] [i_6] [i_7] [i_5] [i_12 + 3] = ((/* implicit */unsigned short) min((arr_32 [i_7]), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            arr_49 [i_5 + 1] [i_6] = ((/* implicit */int) ((arr_30 [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 + 1]) == (arr_41 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5])));
                            var_31 = ((int) arr_47 [i_5 - 1]);
                            arr_50 [i_13] |= ((/* implicit */int) ((long long int) arr_29 [i_5 - 1]));
                        }
                        for (long long int i_14 = 3; i_14 < 19; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */short) min((3275850142U), (((/* implicit */unsigned int) (unsigned short)19994))));
                            var_33 = ((/* implicit */int) ((unsigned int) 2335576204924259319LL));
                            var_34 ^= ((/* implicit */unsigned char) ((short) arr_20 [18LL]));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        for (short i_16 = 3; i_16 < 20; i_16 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_5 - 2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_41 [i_16 - 2] [i_16 - 2] [i_16 + 2] [i_16] [i_16 - 2] [i_16 - 2] [i_5 - 1])) == (0ULL)))) : (((/* implicit */int) ((_Bool) arr_52 [i_16 + 1] [i_6] [i_5 - 1] [i_6] [i_6] [i_5 - 1]))))))));
                                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) max((min((((/* implicit */short) ((((/* implicit */_Bool) 2247261401747154669LL)) && (((/* implicit */_Bool) 3654438577U))))), ((short)3384))), (((/* implicit */short) ((_Bool) arr_29 [i_5 - 1]))))))));
                                arr_60 [i_5 - 1] [i_5 - 1] [i_7] [i_15] [i_16 + 2] = ((/* implicit */unsigned char) arr_26 [i_5] [i_7] [i_7]);
                                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5 + 1])) ? (arr_32 [i_5 - 1]) : (arr_32 [i_5 - 1])))), (max((((/* implicit */long long int) arr_32 [i_5 - 1])), ((-9223372036854775807LL - 1LL)))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_54 [i_7] [i_6] [i_5] [7U]), (min((((/* implicit */int) arr_55 [i_5 - 2] [i_5] [i_5] [i_6] [21LL])), (arr_28 [i_6] [(_Bool)1])))))) ? (max((arr_53 [i_6]), (arr_53 [i_6]))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_52 [i_5] [i_6] [i_6] [i_5] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)45542)) : (((/* implicit */int) arr_20 [9U])))) == (((/* implicit */int) max(((unsigned char)187), (((/* implicit */unsigned char) (_Bool)1))))))))));
                    var_39 ^= ((/* implicit */int) max((max((min((((/* implicit */unsigned int) 31)), (arr_18 [i_6]))), (arr_33 [i_5 - 1] [i_6] [i_7] [i_7] [i_7]))), (max((((/* implicit */unsigned int) arr_52 [i_5 - 2] [i_6] [i_6] [i_6] [i_7] [(_Bool)1])), (max((3103952726U), (((/* implicit */unsigned int) (short)-30256))))))));
                }
            } 
        } 
        arr_61 [i_5] [i_5] = ((/* implicit */long long int) min((min((arr_30 [i_5 + 1] [i_5] [i_5 - 2] [i_5]), (((/* implicit */unsigned int) arr_51 [i_5 + 1] [(_Bool)1] [i_5] [i_5])))), (((/* implicit */unsigned int) arr_34 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5]))));
        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_5 - 2])) ? (((((/* implicit */int) arr_37 [i_5 + 1] [i_5] [i_5] [i_5 - 1])) / (arr_53 [12]))) : (((((/* implicit */_Bool) arr_54 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 1])) ? (arr_31 [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 - 1]) : (((/* implicit */int) (short)19017))))));
    }
    for (unsigned short i_17 = 0; i_17 < 16; i_17 += 3) 
    {
        var_41 += ((/* implicit */long long int) arr_30 [i_17] [i_17] [i_17] [i_17]);
        arr_65 [i_17] = ((/* implicit */_Bool) ((unsigned int) arr_28 [i_17] [i_17]));
        var_42 = ((/* implicit */unsigned long long int) arr_48 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]);
    }
    var_43 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_18 = 1; i_18 < 9; i_18 += 2) 
    {
        var_44 = ((/* implicit */int) arr_68 [i_18]);
        /* LoopSeq 1 */
        for (long long int i_19 = 2; i_19 < 10; i_19 += 4) 
        {
            var_45 += ((/* implicit */_Bool) max((((/* implicit */int) arr_51 [i_18 + 1] [i_19 + 1] [i_19] [i_19])), (((((/* implicit */int) arr_52 [i_18] [i_19] [i_19] [i_19] [i_18] [i_19 - 2])) / (((/* implicit */int) arr_52 [i_19 + 2] [i_19] [i_19] [i_18 + 3] [i_18] [i_19 - 2]))))));
            var_46 = ((/* implicit */int) arr_47 [7LL]);
        }
        var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (unsigned short)65533))));
        var_48 = min((((/* implicit */short) (_Bool)1)), ((short)-29783));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 25; i_20 += 4) 
    {
        var_49 = ((/* implicit */unsigned int) (signed char)-1);
        arr_73 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_72 [i_20])) == (((/* implicit */int) arr_72 [i_20]))));
    }
    var_50 = ((/* implicit */int) max((var_50), (((var_7) ? (var_15) : (var_3)))));
    var_51 = ((/* implicit */unsigned char) min((289429492U), (max((79191040U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))));
}
