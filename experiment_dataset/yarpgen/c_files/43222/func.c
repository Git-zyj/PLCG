/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43222
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
    var_14 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) min((var_11), (((/* implicit */signed char) (_Bool)1))))), ((-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) var_5);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (9007199254740992ULL) : (((/* implicit */unsigned long long int) -1884204326))));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (_Bool)1))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) var_10)) ^ (-8700533239402511568LL)))))) ? (18446744073709551612ULL) : (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_2)))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (int i_5 = 4; i_5 < 19; i_5 += 2) 
                        {
                            {
                                arr_17 [i_5] [i_4] |= ((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)0] [i_3] [(_Bool)1]);
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_0))));
                                var_19 = arr_3 [i_0];
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_2] [i_3] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_0 [6ULL])))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) (short)10823))));
                    arr_19 [i_3] [(signed char)16] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) (unsigned char)78)) ? (arr_0 [14LL]) : (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))), (arr_6 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */int) min((var_11), ((signed char)118)));
        arr_23 [i_6 - 1] |= ((((/* implicit */_Bool) min(((~(arr_12 [i_6 - 2] [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6]))), (((((/* implicit */_Bool) 678217385)) ? (678217397) : (1884204328)))))) ? ((+(arr_1 [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) arr_20 [i_6 + 1])) : (((/* implicit */int) ((((/* implicit */int) (short)-13526)) >= (var_7))))))));
        arr_24 [i_6] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_8 [i_6 - 2] [i_6 + 1] [i_6 - 2]), (((/* implicit */long long int) -1768894792))))), (min((((/* implicit */unsigned long long int) ((var_13) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))))), (arr_1 [i_6 + 1])))));
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)97))) : ((~(min((((/* implicit */int) var_0)), (arr_4 [(short)12] [(short)12])))))));
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned char) arr_26 [i_7]);
        var_21 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */signed char) ((arr_25 [i_7] [i_7]) != (((/* implicit */int) (unsigned char)84)))))));
    }
    for (long long int i_8 = 4; i_8 < 9; i_8 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_9 = 1; i_9 < 6; i_9 += 4) 
        {
            arr_32 [i_9] = 1678497328676598645LL;
            arr_33 [i_8] [i_8] [(signed char)2] = ((/* implicit */unsigned long long int) ((arr_7 [i_9 + 3] [i_9 + 2]) != (((/* implicit */int) arr_11 [(unsigned char)13] [i_8] [i_8] [i_8] [i_8]))));
            arr_34 [i_8] [i_9] [i_9] = ((/* implicit */short) ((arr_6 [i_8] [i_8] [i_9]) >= (arr_6 [i_9] [i_9] [i_9 + 4])));
            var_22 = ((/* implicit */short) (unsigned char)167);
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 8; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    arr_41 [2LL] [i_10] [i_8 - 1] [2LL] |= ((/* implicit */short) ((((((/* implicit */_Bool) (short)-26342)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))))) - (((unsigned long long int) var_9))));
                    arr_42 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */int) ((short) arr_9 [i_10 - 2] [i_8]));
                }
            } 
        } 
        arr_43 [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
        arr_44 [i_8 - 1] [i_8 - 1] = ((/* implicit */long long int) (_Bool)1);
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        for (int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(min((min((((/* implicit */unsigned long long int) arr_25 [i_12] [i_13])), (var_2))), (((/* implicit */unsigned long long int) (~(678217401)))))))))));
                    var_24 = ((/* implicit */signed char) var_6);
                    var_25 = ((/* implicit */int) var_12);
                    var_26 = ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_21 [i_12])), (arr_8 [i_13] [i_13] [i_12]))), (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12]))) % (arr_13 [i_14] [i_12] [i_13] [i_12] [i_13] [i_12])))))) ? ((+(((/* implicit */int) (short)5)))) : ((~(-678217398))));
                }
                for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_8 [i_15 + 3] [i_13] [i_12]))));
                    arr_55 [i_13] = (((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_46 [(_Bool)1] [i_15])));
                    var_28 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)5350)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) ? (arr_53 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */long long int) arr_4 [i_13] [i_12])))), (((/* implicit */long long int) arr_7 [i_12] [3])))))));
                    arr_56 [i_12] [i_12] [i_13] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_12])) ? (((/* implicit */int) var_12)) : (-952462227))), (min((arr_0 [i_15]), (((/* implicit */int) (_Bool)1))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_12 [i_15 + 3] [i_15] [i_13] [i_13] [i_13] [i_12]))))));
                    var_29 |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((arr_1 [i_15]), (((/* implicit */unsigned long long int) arr_0 [i_12])))))))));
                }
                for (long long int i_16 = 1; i_16 < 14; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_18 = 3; i_18 < 14; i_18 += 1) 
                        {
                            var_30 = ((arr_45 [i_16 + 2]) + (arr_45 [i_16 + 2]));
                            var_31 = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)255))));
                        }
                        for (int i_19 = 1; i_19 < 14; i_19 += 1) 
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (var_6)));
                            arr_65 [i_19] [i_16] [i_16] [i_12] = ((/* implicit */short) arr_64 [i_12] [i_12] [i_16] [i_17] [i_19 + 2]);
                        }
                        for (unsigned char i_20 = 1; i_20 < 15; i_20 += 3) 
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)7))))) ? (var_9) : (((/* implicit */int) ((signed char) arr_50 [i_12] [i_17])))));
                            arr_70 [i_12] [i_12] [i_16] [i_17] [(_Bool)1] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14493392355204456043ULL)) ? (7582340457692519808ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_34 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_16])) : (((/* implicit */int) arr_26 [i_16])));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_21 = 1; i_21 < 14; i_21 += 4) 
                        {
                            arr_74 [i_12] [i_13] [i_13] [i_16] [0LL] = ((/* implicit */unsigned char) (+(-952462250)));
                            var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_21] [(unsigned char)11] [i_21 + 2] [i_21] [i_21] [i_21]))));
                            var_36 = ((/* implicit */unsigned long long int) ((arr_63 [i_21 + 2] [i_13] [i_13] [i_13] [i_21] [i_16 - 1] [i_17]) ? (((/* implicit */int) arr_61 [i_16] [i_13] [8ULL] [i_13])) : (1143328936)));
                        }
                        for (short i_22 = 0; i_22 < 16; i_22 += 3) 
                        {
                            arr_78 [i_13] [i_16] [i_13] = ((/* implicit */unsigned long long int) arr_49 [i_12] [i_12] [i_12]);
                            var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_76 [i_17] [i_17] [i_17] [i_16] [11LL]))));
                        }
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */int) (short)9)) & (((/* implicit */int) (!((_Bool)1)))))))));
                        arr_79 [i_12] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_16])) + (((/* implicit */int) arr_62 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) ((signed char) arr_25 [i_16 + 2] [i_16 - 1]));
                        /* LoopSeq 1 */
                        for (int i_24 = 0; i_24 < 16; i_24 += 2) 
                        {
                            var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_82 [(unsigned char)6] [i_16] [i_16 - 1] [i_16] [i_16] [i_16 + 1]))));
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_16] [i_16 + 2] [i_16 + 2])) || (((/* implicit */_Bool) arr_16 [14ULL] [i_16 - 1] [i_16]))));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)53)) & (((arr_3 [i_24]) ^ (((/* implicit */int) (short)(-32767 - 1)))))));
                            var_43 ^= (+(((((/* implicit */_Bool) var_5)) ? (arr_73 [i_12] [i_13] [i_12] [i_23] [i_24]) : (((/* implicit */unsigned long long int) var_6)))));
                            arr_86 [i_12] [i_16] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_14 [i_24] [(unsigned char)0] [(unsigned char)9] [i_13] [4ULL])))));
                        }
                    }
                    arr_87 [(_Bool)1] [i_12] [i_12] [i_16] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) arr_66 [i_12] [(short)1] [i_16] [i_16] [i_12])), (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_80 [i_16] [i_16])) * (((((/* implicit */_Bool) -952462232)) ? (arr_7 [i_16 + 1] [i_12]) : (var_6))))))));
                }
                var_44 |= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_66 [i_12] [i_12] [i_12] [i_12] [i_13])), (min((((/* implicit */unsigned long long int) var_4)), (arr_14 [i_13] [i_13] [i_13] [i_12] [i_12]))))), (((/* implicit */unsigned long long int) arr_83 [i_12] [i_13] [i_12] [i_13] [i_12]))));
            }
        } 
    } 
}
