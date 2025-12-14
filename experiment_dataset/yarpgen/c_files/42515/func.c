/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42515
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)65523)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0))))) : (arr_0 [i_0])));
        var_11 = (unsigned short)12;
    }
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_12 ^= ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))), (0))) / (arr_5 [7LL] [7LL]));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_8 [i_2]);
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65518)) >> (((((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) : (18446744073709551605ULL))) - (18446744073709551489ULL))))) / (((/* implicit */int) arr_10 [i_1] [i_1] [(_Bool)1]))));
                    var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (67108863U) : (arr_6 [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) (unsigned short)36317))))) ? ((+(4227858429U))) : (min((max((arr_8 [i_1 + 3]), (67108866U))), (((/* implicit */unsigned int) arr_10 [i_3] [i_2] [i_1]))))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            var_15 &= ((/* implicit */_Bool) 2147483638);
            var_16 ^= ((/* implicit */unsigned short) max((arr_8 [i_5]), (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_3 [(unsigned short)3])))))))));
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_4] [i_5])))) ? (((((/* implicit */_Bool) (short)1403)) ? (arr_6 [i_4] [i_4] [i_5]) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) -2147483639))))) ? (((/* implicit */unsigned long long int) max((3773355030U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_5])))))))) : (((((/* implicit */unsigned long long int) min((521612248U), (((/* implicit */unsigned int) (unsigned short)6709))))) / (((arr_4 [i_5] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [9U] [i_5]))))))))))));
            var_18 *= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_10 [i_4] [3] [i_4])) : (((/* implicit */int) arr_14 [i_4])))))))) < (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
        {
            arr_21 [6LL] [i_4] = ((/* implicit */short) (-(arr_4 [i_4] [i_6])));
            arr_22 [(unsigned short)1] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_6]))) : (-8889884495572487900LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4]))) : (((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_0 [i_4]) : (((/* implicit */int) (unsigned short)65535))))) : (min((arr_4 [(short)8] [i_6]), (18446744073709551615ULL)))))));
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) (~(((((((/* implicit */_Bool) (unsigned short)20485)) ? (521612241U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) >> (((((((((/* implicit */int) (signed char)-13)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65503)) - (65484))))) - (4093)))))));
                            arr_30 [i_4] [i_8] [i_4] [i_8] [i_8] |= ((/* implicit */unsigned short) (+((+(max((1395911053593320660LL), (((/* implicit */long long int) (unsigned short)17731))))))));
                        }
                    } 
                } 
                arr_31 [i_4] [i_6] [i_7] = ((/* implicit */unsigned short) (-(arr_19 [i_7] [i_7])));
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 9; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_37 [i_4] = ((/* implicit */signed char) ((((((arr_23 [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4227858407U)) ? (((/* implicit */int) arr_18 [i_7] [i_10])) : (((/* implicit */int) arr_29 [i_11]))))))) * (min((min((arr_8 [i_7]), (((/* implicit */unsigned int) (unsigned short)65523)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_7])))))))));
                            var_20 = 2007731998U;
                            var_21 ^= ((/* implicit */long long int) (!(arr_36 [i_4] [i_6] [i_7] [i_10] [i_10 - 1] [i_10 - 1])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_12 = 3; i_12 < 9; i_12 += 1) 
                {
                    arr_40 [i_4] [i_7] [i_4] [i_6] [i_6] = ((/* implicit */long long int) ((arr_24 [i_4]) ? (((/* implicit */unsigned int) ((arr_7 [i_4]) + (((/* implicit */int) (unsigned short)39876))))) : (7340032U)));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 2147483638))));
                    var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_34 [i_4] [i_6] [3LL] [i_7] [i_7] [i_12]) / (((/* implicit */int) (unsigned short)53735))))) || (((/* implicit */_Bool) (unsigned short)65530))));
                }
            }
            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                arr_43 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102)))))) ? (min((918541297U), (((/* implicit */unsigned int) (signed char)-116)))) : ((-(67108888U))))) + (((((/* implicit */_Bool) arr_12 [9ULL] [i_13])) ? (min((((/* implicit */unsigned int) arr_10 [i_13] [i_6] [i_4])), (arr_8 [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [11] [i_6] [i_6])) ^ (((/* implicit */int) arr_13 [i_13] [9])))))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_38 [i_4] [9U]))))), ((-(((/* implicit */int) arr_12 [i_4] [i_4]))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)19159))))))))));
            }
            for (long long int i_14 = 1; i_14 < 9; i_14 += 2) 
            {
                arr_46 [(unsigned short)9] [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) min((arr_15 [i_4] [4LL]), (((/* implicit */unsigned int) arr_0 [i_14]))))) == (max((arr_44 [1U] [i_6]), (((/* implicit */long long int) arr_8 [i_6]))))))) & (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-8062691762873085144LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (5122990262392641181LL) : (((/* implicit */long long int) arr_15 [(unsigned short)2] [i_6]))))))))));
                var_25 ^= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) && (((/* implicit */_Bool) arr_39 [i_4] [i_6] [(unsigned short)6] [i_6] [i_14]))))) != (((/* implicit */int) ((5122990262392641162LL) <= (((/* implicit */long long int) 3527550319U))))))))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (signed char)116);
                            var_27 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_29 [i_4])), ((unsigned short)60824)))) ? (((((/* implicit */_Bool) 703427902U)) ? (((/* implicit */int) arr_13 [i_16] [i_4])) : (((/* implicit */int) (_Bool)1)))) : ((~(arr_49 [(unsigned short)7] [(unsigned short)7] [(short)4] [3] [(unsigned short)7])))))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                for (unsigned int i_18 = 1; i_18 < 8; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            var_28 |= ((/* implicit */int) (((-(arr_0 [i_6]))) < (-778932923)));
                            arr_58 [i_6] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [4] [i_6])) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) 16777215U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((arr_26 [i_6] [i_6] [i_6] [1LL] [i_6] [i_6]) | (((/* implicit */long long int) ((((/* implicit */int) (signed char)115)) ^ (((/* implicit */int) arr_20 [i_4] [i_4])))))))));
                            var_29 ^= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_25 [i_17] [i_18] [1LL])) ? (arr_26 [i_4] [i_6] [(unsigned short)9] [i_18] [0LL] [i_19]) : (((/* implicit */long long int) arr_5 [i_4] [i_4])))))) / (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_4] [i_6] [i_17] [i_18] [(unsigned short)2])))));
                        }
                    } 
                } 
            } 
            var_30 *= 4278190063U;
        }
        var_31 |= ((/* implicit */unsigned short) 3456723708U);
        arr_59 [3LL] |= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 67108865U)) <= (arr_26 [i_4] [7U] [i_4] [i_4] [i_4] [i_4]))))) * (arr_1 [i_4])))) ? (max((((/* implicit */long long int) ((arr_24 [i_4]) ? (4294967281U) : (0U)))), (min((((/* implicit */long long int) (signed char)0)), (arr_57 [i_4]))))) : (3272091529233917692LL));
        /* LoopNest 2 */
        for (long long int i_20 = 3; i_20 < 8; i_20 += 1) 
        {
            for (unsigned short i_21 = 2; i_21 < 8; i_21 += 2) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 837170804)) ? (((((/* implicit */_Bool) 4294967284U)) ? (arr_56 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_4]))))))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_20 [1U] [i_20 - 3])) - (62306)))));
                    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (!((!(((/* implicit */_Bool) -8531533506178430194LL)))))))));
                    var_34 ^= ((/* implicit */long long int) arr_49 [i_4] [i_20] [1U] [i_21 + 2] [i_21]);
                    var_35 = ((/* implicit */int) arr_36 [i_4] [i_4] [i_20] [i_20] [1LL] [i_21]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_22 = 3; i_22 < 9; i_22 += 4) 
        {
            for (unsigned int i_23 = 3; i_23 < 9; i_23 += 1) 
            {
                for (int i_24 = 0; i_24 < 10; i_24 += 4) 
                {
                    {
                        var_36 += ((/* implicit */unsigned short) ((((((/* implicit */long long int) (~(arr_6 [i_22] [i_23] [i_24])))) < (((((/* implicit */_Bool) arr_7 [i_4])) ? (arr_45 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_4] [i_22] [i_23 - 2] [i_24]))))))) ? (((/* implicit */int) (!(((arr_33 [i_4] [i_4] [i_4] [i_22] [3U] [i_24]) < (5011122355380808369LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_23])))))))))));
                        var_37 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_22])) ? (16777210U) : (((/* implicit */unsigned int) arr_39 [i_4] [i_22] [i_22] [i_23] [i_24]))))) ? (((1ULL) >> (((arr_69 [i_4] [i_22] [i_22 - 3] [(unsigned short)1] [5]) - (2483919196246891111LL))))) : (arr_60 [i_23 + 1])))));
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */int) min((((((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)32591))))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (-1716073876)))) - (2099324447U))))));
}
