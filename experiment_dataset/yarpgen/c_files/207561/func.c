/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207561
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_9))));
            arr_5 [9U] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) var_2))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (signed char i_4 = 3; i_4 < 16; i_4 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2 + 2] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */short) (-(var_12)));
                            var_16 ^= (-(((long long int) arr_7 [i_1] [i_2] [i_3] [i_4])));
                            arr_15 [i_2] [i_2] [i_2 + 2] [i_3] = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_2 + 2] [6] [i_3])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_5] [(unsigned short)9])))));
                            arr_22 [i_7] [i_5] [i_1] = ((/* implicit */long long int) ((int) ((signed char) var_14)));
                            arr_23 [i_7] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_9 [i_5] [i_0] [i_6] [i_6])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_6 [i_5] [i_0] [i_5] [i_6]))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) -8066732473529347278LL))));
            }
            arr_24 [i_1] [i_0] |= ((/* implicit */long long int) arr_19 [i_0] [i_0] [7U] [i_0] [i_0] [i_0]);
        }
        arr_25 [i_0] = ((/* implicit */short) arr_12 [(short)14] [i_0] [i_0] [(unsigned short)6] [i_0] [i_0] [i_0]);
        arr_26 [i_0] [i_0] &= ((/* implicit */int) ((short) arr_0 [i_0]));
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 17; i_8 += 1) 
        {
            for (int i_9 = 3; i_9 < 17; i_9 += 2) 
            {
                {
                    arr_31 [i_0] [i_8] [i_8] = arr_20 [i_8 + 1];
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_9))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_9 - 1])) ? (659753538U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10])))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_8 + 1])) && (((/* implicit */_Bool) (~(arr_32 [i_0] [i_8 + 1] [(signed char)14] [i_9] [i_9] [9])))))))));
                    }
                    arr_35 [(short)6] [i_8 - 1] [(short)6] = ((/* implicit */short) var_8);
                    arr_36 [i_9 - 1] [i_8 - 1] [(short)7] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_8] [i_8 + 1] [i_9 - 3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8533)) ? (arr_28 [i_9]) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_9 + 1] [i_9]))))) : (9006924376834048LL)));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (819237386) : (((/* implicit */int) arr_29 [10U] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) arr_28 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32759)) != (((/* implicit */int) var_11))))))));
    }
    /* LoopSeq 3 */
    for (short i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_13 = 3; i_13 < 20; i_13 += 2) 
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_12))));
                arr_43 [i_13] [i_12] [i_12] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) (short)14041)), (819237386)))), (((long long int) (unsigned short)57117))))) ? (659753538U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_42 [i_13] [i_13 - 1] [19U] [i_11]) : (((/* implicit */int) var_4)))))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-((~(((arr_41 [i_11] [i_13 - 3] [i_12] [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(short)11]))))))))))));
                arr_44 [i_11] [i_13] [i_13] [i_12] = ((/* implicit */short) ((unsigned short) ((unsigned int) arr_38 [i_13 - 1])));
            }
            arr_45 [i_12] [i_12] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-2977), (var_11))))) <= (((((/* implicit */long long int) ((/* implicit */int) (short)16889))) & (var_9))))))));
            arr_46 [i_11] [i_11] [i_12] |= ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_39 [(short)2] [i_12])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_12] [i_11] [i_11] [i_11]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_41 [i_11] [20] [i_11] [i_11]))))))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 3; i_14 < 20; i_14 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_15 = 1; i_15 < 20; i_15 += 2) 
            {
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_6))));
                var_26 = ((/* implicit */unsigned int) ((unsigned short) var_5));
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_40 [i_14 + 2])) : (((/* implicit */int) (short)-19147)))))));
            }
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                arr_54 [i_11] [15] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_16] [i_14 + 2] [i_11])) ? (arr_52 [i_11] [i_14 + 2] [i_16]) : (arr_52 [i_11] [i_11] [i_16])));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_14 - 3] [i_14 + 1] [i_11])) ? (arr_47 [i_14 - 1] [i_14 - 1] [i_14]) : ((-2147483647 - 1))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    for (int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_29 &= ((/* implicit */long long int) arr_41 [i_11] [i_11] [i_16] [i_16]);
                            var_30 = ((/* implicit */unsigned int) -8068563773517233255LL);
                            arr_60 [i_11] [i_14] [i_16] [8LL] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)255))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_19 = 2; i_19 < 18; i_19 += 1) 
                {
                    arr_63 [i_11] [i_14 - 2] [i_16] [i_19 + 4] [(short)12] &= ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_9)))));
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_14 - 1] [i_14 - 3] [i_14 - 3])) ? (7121741970330344475LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20333)))));
                }
            }
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_14 + 2] [i_14] [i_11] [i_11] [i_11] [i_11])) ? (arr_55 [i_14 - 1]) : (((/* implicit */long long int) (~(arr_47 [i_14] [i_11] [i_11]))))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_48 [i_11] [i_14])))) ? (((((/* implicit */_Bool) arr_50 [i_11] [(unsigned short)9] [i_14])) ? (827888544) : (((/* implicit */int) (unsigned short)58744)))) : (arr_42 [i_11] [(unsigned char)8] [i_14] [i_14 + 2])));
        }
        /* LoopSeq 1 */
        for (short i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            arr_66 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1790796131)), (arr_64 [i_11] [i_20] [i_11])))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_37 [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_11] [i_11] [i_20] [i_20] [i_20]))) : (3635213778U)))))) : (min((var_9), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32759)))))))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                for (long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    {
                        var_34 ^= ((/* implicit */signed char) var_11);
                        arr_72 [i_22] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) (short)16383);
                    }
                } 
            } 
        }
        arr_73 [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_40 [i_11])))));
    }
    for (int i_23 = 0; i_23 < 22; i_23 += 2) 
    {
        arr_78 [i_23] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-96)), (arr_70 [i_23] [i_23] [(short)13] [i_23] [i_23] [i_23]))))));
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (+(3635213778U)))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3511504357981606068LL)) || (((/* implicit */_Bool) arr_41 [i_23] [i_23] [i_23] [i_23])))) ? ((-(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) var_3))))))) : (max((((/* implicit */unsigned int) -1207805241)), (arr_56 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])))));
        arr_79 [(short)0] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_40 [i_23])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (arr_49 [i_23] [i_23] [21LL]))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_76 [i_23]))), (((((/* implicit */int) (short)31481)) << (((((/* implicit */int) (short)-15631)) + (15631)))))))) : ((+(((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_23] [i_23] [(short)2] [i_23])) ? (((/* implicit */int) (short)19364)) : (arr_42 [i_23] [i_23] [i_23] [i_23])))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((((/* implicit */_Bool) arr_42 [i_23] [i_23] [i_23] [(signed char)9])) ? (((/* implicit */int) (short)23049)) : (((/* implicit */int) (short)255))))));
        var_37 = ((/* implicit */long long int) min((min((((/* implicit */int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2730)))))), (((((/* implicit */_Bool) arr_40 [i_23])) ? (((/* implicit */int) arr_40 [i_23])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_69 [i_23] [i_23] [i_23]))));
    }
    for (short i_24 = 0; i_24 < 16; i_24 += 4) 
    {
        var_38 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_49 [i_24] [i_24] [i_24])) ? (var_12) : (((/* implicit */long long int) arr_47 [i_24] [i_24] [i_24])))), (((/* implicit */long long int) ((unsigned int) arr_10 [i_24] [i_24] [i_24] [i_24])))));
        arr_84 [13U] &= ((/* implicit */short) var_9);
        var_39 ^= ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_75 [i_24])) ? (arr_48 [1] [1]) : (((/* implicit */int) (unsigned char)170)))), (min((arr_48 [i_24] [i_24]), (((/* implicit */int) (short)32749)))))), ((~(((/* implicit */int) var_6))))));
        arr_85 [i_24] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (2093923537U))))));
    }
}
