/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240755
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_8))), (4609452487739184574LL)))) ? ((+(-8394129051102492431LL))) : (((long long int) ((long long int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = min(((~(-8394129051102492413LL))), (((/* implicit */long long int) (~((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_1)))))))));
        var_10 = ((/* implicit */int) max((min((8394129051102492420LL), (((/* implicit */long long int) var_5)))), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_6 [i_1]) : (-3523430217644254464LL)))));
    }
    for (long long int i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) 212883433);
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (min((((/* implicit */long long int) arr_17 [i_4] [(signed char)10] [6LL] [i_2 + 1])), (arr_16 [i_4] [i_3] [i_2 + 2] [i_2 + 2]))) : (min((((/* implicit */long long int) arr_11 [i_3])), (var_4)))))) ? ((+(((((/* implicit */_Bool) var_3)) ? (arr_14 [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [6LL] [9LL] [i_4] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 8394129051102492418LL)))))) : (((arr_16 [i_2] [i_2] [i_2] [i_2 - 3]) % (((/* implicit */long long int) var_0)))))))))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_2 - 3] [i_2] [i_2 - 2] [14LL] [i_2] &= var_4;
                    arr_22 [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_13 [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_20 [i_2] [i_2 - 3] [i_3] [i_4] [i_4] [i_5])))) : (min((((/* implicit */long long int) (signed char)33)), ((-9223372036854775807LL - 1LL))))));
                    arr_23 [i_2 - 1] [i_3] [9LL] [i_4] [(short)1] [i_3] = ((/* implicit */signed char) arr_17 [i_5] [i_4] [i_3] [i_2]);
                }
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                {
                    var_12 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_25 [1LL] [(unsigned short)5] [i_4])) ? (((/* implicit */int) arr_10 [6LL])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)29)) : (((/* implicit */int) var_3))))))));
                    arr_26 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_19 [i_6]), (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_2 + 2] [i_3] [i_4] [i_4] [(unsigned char)5] [i_3])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_6])) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)11))))) || (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) / (((((/* implicit */long long int) var_0)) % (6441238047200152889LL)))))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((arr_14 [i_3] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2032))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (-3917670624228577772LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_6] [i_4] [i_3] [i_2])), (var_1)))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) == (var_4))))));
                    arr_27 [(_Bool)1] = ((/* implicit */unsigned short) min((((long long int) ((short) arr_24 [(short)7] [i_3] [i_4] [i_6] [i_3] [i_6]))), (((min((((/* implicit */long long int) arr_11 [i_3])), (-2LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_11 [i_2])))))))));
                    var_14 = ((/* implicit */long long int) ((_Bool) min(((~(arr_14 [i_6] [i_6]))), (((/* implicit */long long int) ((int) arr_11 [i_4]))))));
                }
                arr_28 [i_2 - 3] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) var_8);
            }
            arr_29 [i_2] [i_3] = ((((((((/* implicit */_Bool) arr_10 [i_2 + 2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 1]))))) + (9223372036854775807LL))) << ((((+(((/* implicit */int) arr_10 [i_2 - 2])))) - (245))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 3; i_7 < 13; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    arr_36 [i_2] [i_7] [i_7 - 1] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_14 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_3] [i_3] [(unsigned char)0] [i_2])))))) ? (arr_14 [i_2] [i_2 - 2]) : (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_2] [i_3] [i_7] [i_8])) >> (((arr_30 [i_2] [i_3] [i_7 - 1] [i_8]) - (525537049629100642LL))))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_8 - 2] [i_2 - 2])) - (var_0)))) : (arr_13 [i_7]));
                    var_15 *= ((/* implicit */_Bool) var_0);
                }
                for (unsigned char i_9 = 3; i_9 < 14; i_9 += 1) 
                {
                    arr_39 [(unsigned short)2] [i_7] [i_7] [i_9 - 1] [i_3] = ((/* implicit */long long int) arr_15 [i_2 - 1] [i_3] [i_7] [i_9]);
                    arr_40 [i_7] [i_3] [i_7] = ((/* implicit */unsigned char) arr_14 [i_2 - 2] [i_9]);
                }
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) min((-2041068898), ((-2147483647 - 1))))) ? (min((arr_16 [i_2 - 1] [i_7 + 2] [i_7 + 2] [i_7]), (arr_16 [i_2 - 1] [i_3] [i_7 + 2] [i_2 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_2)))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_3])))) : ((-(1088517870)))))))))));
            }
        }
        for (int i_10 = 4; i_10 < 13; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_11 = 1; i_11 < 14; i_11 += 2) 
            {
                arr_45 [11LL] [i_2] [i_2] [(_Bool)1] = ((/* implicit */long long int) (unsigned char)225);
                arr_46 [i_11] [i_10 - 4] [i_2 - 2] = ((/* implicit */_Bool) ((unsigned short) ((short) 212883433)));
                arr_47 [i_2 - 3] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) var_1)), ((-(((/* implicit */int) arr_42 [i_10]))))))) & ((-((~(-2787928233960851991LL)))))));
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            arr_52 [i_2 - 2] [(short)2] [i_10] [i_10] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [i_2 - 2] [i_10] [(unsigned short)5] [i_10] [(unsigned char)4] [i_10])) ? (var_0) : (((/* implicit */int) arr_17 [i_2] [i_10 + 1] [i_12] [i_13])))) >> (((((/* implicit */int) ((unsigned short) (unsigned char)121))) - (95)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32763))) : (((((/* implicit */_Bool) arr_35 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 2])) ? (arr_35 [i_2] [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_10 - 3]) : (arr_35 [i_13] [i_12 - 1] [i_11 - 1] [i_10] [i_2 + 2])))));
                            arr_53 [i_10] = (~(((((/* implicit */_Bool) ((2322207748325523766LL) >> (((/* implicit */int) arr_15 [i_2 + 2] [i_10] [(unsigned short)0] [i_10]))))) ? ((-(269475930))) : (-1364355216))));
                            arr_54 [i_2 + 1] [i_10] [i_10] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_8), (arr_41 [0LL] [i_10]))), (((/* implicit */long long int) (((_Bool)1) ? (var_6) : (((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) ((signed char) arr_51 [i_2] [i_2] [i_2] [i_2 + 2] [i_11 - 1] [i_11] [i_11 - 1])))));
                            arr_55 [i_13] [i_2] [i_11] [i_10] [i_2] = ((((/* implicit */_Bool) -2147483639)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59860)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (short)0))))) ? (-2041068898) : (((/* implicit */int) (short)-1204))))));
                            var_17 = min((((((/* implicit */_Bool) arr_50 [i_11] [i_12] [i_13])) ? (arr_16 [i_11 + 1] [i_11 - 1] [(unsigned char)4] [i_2 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_2] [i_10 - 4] [i_10] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) arr_9 [8])) : (((/* implicit */int) arr_18 [i_12 - 1] [i_12 - 1] [i_12] [14LL] [i_12]))))))), (-5327021180007691677LL));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_14 = 1; i_14 < 12; i_14 += 3) 
            {
                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) arr_42 [9LL]))));
                var_19 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(unsigned char)4] [i_10 - 2] [i_2 - 1] [1LL] [i_2 - 3])) / (((/* implicit */int) arr_18 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10]))));
            }
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) arr_13 [i_16 - 1]);
                        var_21 = ((/* implicit */long long int) (+(((arr_58 [8LL] [i_10 - 2] [i_16]) ? (((/* implicit */int) arr_58 [(unsigned short)0] [i_10 - 2] [(signed char)14])) : (((/* implicit */int) arr_58 [12LL] [i_10 + 2] [i_15]))))));
                    }
                } 
            } 
            arr_64 [i_2 + 2] [i_2 + 1] [i_2] &= ((((/* implicit */_Bool) arr_9 [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -212883427)))) : (-10LL));
        }
        var_22 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_59 [i_2] [i_2] [i_2])) + (((/* implicit */int) min(((short)7), (((/* implicit */short) (_Bool)1)))))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_2 - 3] [i_2] [(unsigned char)10] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((arr_25 [i_2] [i_2 + 1] [i_2 - 2]), (((/* implicit */unsigned short) var_3))))))))));
    }
    for (long long int i_17 = 1; i_17 < 10; i_17 += 4) 
    {
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_31 [i_17 + 1] [i_17] [i_17])), (8394129051102492430LL))))))));
        arr_69 [i_17 + 2] [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_50 [(short)12] [(short)12] [13LL])))));
    }
    var_25 = ((/* implicit */unsigned char) ((long long int) ((long long int) (~(((/* implicit */int) var_3))))));
}
