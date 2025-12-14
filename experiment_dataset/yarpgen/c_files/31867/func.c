/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31867
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
    var_17 = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) var_2)))) ? (4432587750970354475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42277)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) (((~(var_3))) != (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_0 [i_0 - 2] [i_1 - 2])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((unsigned short) var_9))))), (((arr_6 [i_1 - 1] [i_0 - 1]) ? (((/* implicit */int) var_1)) : (((arr_6 [4LL] [i_1]) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) arr_3 [i_2]))))))));
                            arr_10 [i_3 + 1] [i_2] [i_2] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) arr_3 [i_0 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_4] [(signed char)8])) : (((/* implicit */int) var_13)))), (((((/* implicit */int) arr_7 [i_4] [i_4] [i_4])) - (((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))))));
        arr_14 [i_4] = ((/* implicit */int) (+(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_1 [i_4] [i_4]))))) ? (arr_5 [i_4] [i_4] [i_4]) : (((3584766604632244653LL) | (arr_5 [i_4] [i_4] [i_4])))))));
    }
    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 1) 
    {
        arr_19 [i_5 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))));
        arr_20 [i_5] = ((((/* implicit */unsigned long long int) (-(var_6)))) == (arr_11 [i_5]));
        var_19 = ((((/* implicit */_Bool) (+((+(18446744073709551605ULL)))))) ? (var_9) : (((/* implicit */unsigned long long int) var_16)));
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 7; i_7 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)3] [i_7 + 2]))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                var_21 = ((/* implicit */short) (!(((((/* implicit */_Bool) (signed char)-70)) || (((/* implicit */_Bool) var_13))))));
                var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((18446744073709551605ULL), (((/* implicit */unsigned long long int) arr_23 [i_6] [i_8])))) / (((/* implicit */unsigned long long int) arr_26 [i_6] [i_7] [i_8] [i_8])))))));
                arr_28 [(_Bool)1] [(_Bool)1] [i_7] [6] = ((/* implicit */unsigned short) var_6);
            }
            for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 1) 
            {
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (~(((arr_3 [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_25 [i_9 + 1] [i_7 - 1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_9]))) : (arr_5 [i_6] [i_7] [i_9]))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */short) ((((min((var_9), (((/* implicit */unsigned long long int) arr_31 [i_7] [(signed char)7] [i_7])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9 + 3] [i_7 - 1]))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_7 + 4] [i_7 + 3]), (arr_0 [i_7 + 1] [i_7 + 2])))))));
                            var_25 = arr_3 [(signed char)1];
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    {
                        arr_41 [i_6] [i_12] [10ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_6] [i_7])) ? ((~((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((18446744073709551601ULL) >= (((/* implicit */unsigned long long int) var_0)))))) <= (max((((/* implicit */long long int) arr_6 [i_7] [(_Bool)1])), (arr_35 [i_6] [i_7] [i_6] [i_12] [i_13]))))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */int) var_4)) >> (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_8))))))) && (((arr_26 [i_7 + 4] [i_7 + 4] [i_12] [i_7]) >= (((((/* implicit */long long int) 4294967274U)) - (var_16)))))));
                    }
                } 
            } 
        }
        for (int i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            var_27 = ((/* implicit */short) min((((/* implicit */int) var_13)), ((~(((((/* implicit */_Bool) -26569854)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_8 [i_14] [i_14]))))))));
            arr_44 [i_6] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(short)8] [(short)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9)))) ? (((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_6] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6] [i_14])))))) ? (((((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6] [i_14]))) : (-2517675612779300591LL))) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(signed char)10] [i_14])) ? (((/* implicit */long long int) 2147483647)) : (var_6)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_30 [i_14] [i_14] [i_6])))))));
            var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_6]) ? (-8269510446237668267LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6])))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */int) (short)16)) >> (((var_3) - (3446866951570000348LL)))))))) ? (((/* implicit */int) var_12)) : (arr_38 [i_6] [i_6] [i_6] [i_6])))));
            arr_45 [(_Bool)1] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_14])) ? (max(((~(var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6] [i_14]))) != (var_9)))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -522570788993217070LL)) ? (6150411246453860032LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
        }
        var_29 = ((/* implicit */unsigned int) (unsigned short)14138);
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6])) ? (-3950194404812884822LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [i_6])))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
    }
    for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
    {
        arr_48 [i_15] = var_14;
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_5))));
        var_32 &= arr_33 [i_15] [i_15] [(short)7] [i_15];
        /* LoopSeq 3 */
        for (short i_16 = 1; i_16 < 8; i_16 += 3) 
        {
            arr_52 [i_15] [i_15] = ((/* implicit */long long int) var_7);
            arr_53 [i_15] [i_15] = ((/* implicit */short) (~(1490208658U)));
        }
        for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            arr_56 [4] |= arr_24 [i_15] [i_17];
            var_33 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)247))))), ((~(var_9)))))));
        }
        for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        {
                            var_34 = ((((/* implicit */_Bool) ((3950194404812884822LL) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_31 [i_15] [3LL] [(short)5])))))) ? (((((/* implicit */_Bool) arr_61 [i_18 - 1] [i_18 + 1] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_61 [i_18 - 1] [i_18 + 1] [i_18]))) : (-2557203182261063704LL));
                            arr_70 [(short)0] [i_21] [8] [i_19] [i_15] [i_21] [i_15] |= ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (arr_9 [i_20]))))))), (((((/* implicit */_Bool) arr_43 [i_18 - 1] [i_18 - 1] [i_18 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (var_5))))) : (((((/* implicit */_Bool) arr_29 [i_15] [1LL] [i_15] [i_15])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (-((-((-(arr_62 [i_15] [4ULL]))))))))));
            /* LoopNest 3 */
            for (unsigned int i_22 = 0; i_22 < 11; i_22 += 1) 
            {
                for (signed char i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    for (int i_24 = 0; i_24 < 11; i_24 += 1) 
                    {
                        {
                            arr_79 [0] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_22] [10LL])) ? (((((/* implicit */_Bool) -7470235484301928210LL)) ? (((/* implicit */int) arr_58 [i_22])) : (((/* implicit */int) arr_34 [i_23] [i_22])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_1))))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_15] [i_18 + 1] [2LL] [i_22] [(_Bool)1] [i_24]))))), (max((((/* implicit */unsigned long long int) (signed char)-1)), (arr_63 [(_Bool)1])))))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? ((+(arr_35 [3] [(short)3] [i_22] [i_23] [i_24]))) : (arr_43 [7] [7] [i_24])))) ? (((/* implicit */int) (!(arr_7 [(_Bool)1] [i_18 - 1] [i_18 - 1])))) : (((/* implicit */int) arr_50 [i_18] [i_18 - 1] [9LL]))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_18 + 1] [i_15])) ? (((/* implicit */int) arr_69 [i_18 + 1] [i_15])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_65 [i_15] [i_18 + 1] [i_18] [i_18 + 1] [i_15])) ? (arr_62 [i_18 + 1] [i_15]) : (arr_62 [i_18 + 1] [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) 
        {
            var_38 = ((/* implicit */_Bool) (-(arr_32 [i_15] [i_15] [5U] [i_25] [i_25] [i_25])));
            arr_82 [i_15] [i_25] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_62 [i_25] [i_15])) ? (arr_62 [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_25] [i_25])))));
            arr_83 [i_15] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_72 [i_25]))));
            arr_84 [i_25] [i_25] [i_15] = ((/* implicit */unsigned long long int) arr_5 [i_15] [i_25] [i_15]);
        }
        for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 2) 
        {
            var_39 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_40 [i_26] [2LL] [i_26] [i_15] [(signed char)9]))))));
            var_40 += ((/* implicit */long long int) max(((+(0))), (((/* implicit */int) min((arr_50 [i_26] [i_26] [i_15]), (arr_50 [i_15] [i_26] [i_26]))))));
        }
    }
}
