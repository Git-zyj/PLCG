/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1915
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 += ((/* implicit */int) (short)28667);
        var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)-28674)))) ? (-574963041805824951LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1])))));
    }
    var_18 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((var_15) ? (((/* implicit */int) (short)28652)) : (((/* implicit */int) var_9)))))));
    var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 4 */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -748197942)))) ? (((arr_4 [i_1]) % (arr_4 [i_1 + 2]))) : (((/* implicit */int) max((((((/* implicit */_Bool) var_11)) || (arr_2 [i_1] [i_1]))), ((_Bool)1))))));
        var_21 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */int) var_3))))) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))), (((/* implicit */long long int) (_Bool)1))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)-28674))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-119)) : (arr_4 [i_1]))) : (arr_4 [i_1])))))))));
    }
    for (long long int i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) arr_6 [i_2]);
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                arr_15 [i_2 + 2] [i_3] [i_4] = ((/* implicit */unsigned char) var_2);
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) arr_13 [i_4] [i_4] [i_2])) : (max((((/* implicit */int) (unsigned char)66)), ((+(((/* implicit */int) var_10)))))))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (arr_8 [i_5])))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((arr_5 [9] [16]) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_16 [i_2] [i_3 + 1])), (((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_5 [i_3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_16 [i_2] [i_2])), (((((/* implicit */_Bool) max((arr_6 [i_2]), (((/* implicit */unsigned char) (signed char)12))))) ? (((((/* implicit */_Bool) (unsigned short)29268)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28682)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_3] [i_2]))))))))))));
                arr_18 [(unsigned char)7] [i_3] [(unsigned char)9] = ((/* implicit */short) (!(((/* implicit */_Bool) 214595034))));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                {
                    var_27 = ((/* implicit */int) (signed char)15);
                    arr_21 [i_2 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned char)190)) ? (arr_3 [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (9223372036854775807LL))) << ((((((-(((/* implicit */int) var_5)))) + (15357))) - (47)))));
                }
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_6)) ? (arr_4 [i_7]) : (((/* implicit */int) arr_12 [i_3 + 1] [i_5] [i_7])))))) & (((/* implicit */int) arr_19 [i_2] [i_3] [i_5] [i_7]))));
                    var_29 = ((/* implicit */long long int) min((((/* implicit */int) min(((short)-1), ((short)28690)))), (min((((arr_4 [i_2]) & (((/* implicit */int) arr_12 [i_2 + 4] [i_2 + 4] [i_2 + 4])))), (-2147483644)))));
                    var_30 = ((/* implicit */unsigned char) -846285830);
                }
            }
            /* vectorizable */
            for (short i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_8)) : (-3527229781917786979LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 1509347395)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_3] [(unsigned short)8] [i_8 + 2])) <= (((/* implicit */int) arr_23 [i_3] [i_8 - 1]))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_2 - 1] [i_3 - 1] [i_3 + 1] [i_8 - 1])) ? (arr_22 [i_2 + 2] [i_3] [i_3 + 1] [i_8 + 1]) : (arr_22 [i_2 - 1] [(unsigned short)3] [i_3 - 1] [i_8 - 1])));
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_13 [i_8 + 1] [(_Bool)1] [i_2 + 3])) ? (2251799813685244ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2] [i_3] [i_3] [i_8]))))))));
                arr_27 [i_3] [i_2] [i_3] [i_2 + 2] = ((/* implicit */int) arr_5 [i_3 - 1] [i_8 + 1]);
            }
        }
        for (signed char i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
        {
            var_35 = ((((/* implicit */_Bool) min((((/* implicit */short) arr_16 [i_2 + 3] [i_9 - 1])), (min((((/* implicit */short) (_Bool)0)), (var_5)))))) ? (max((max((var_0), (arr_28 [(unsigned char)7]))), (((/* implicit */long long int) arr_11 [(unsigned short)4] [i_9] [(unsigned short)4])))) : (((/* implicit */long long int) arr_7 [i_2 + 3] [i_2 + 3])));
            var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (short)-1))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_4 [(unsigned char)1])) <= (arr_25 [i_2] [i_2] [i_2 + 4])))))))) : (max((((/* implicit */long long int) var_7)), (arr_28 [i_2])))));
            var_37 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-1)) : (arr_4 [i_9]))) : (((((/* implicit */_Bool) arr_20 [(unsigned char)14] [i_2] [i_9])) ? (((/* implicit */int) (short)-16384)) : (arr_24 [i_2] [i_2] [2] [i_9]))))))));
            var_38 ^= ((/* implicit */_Bool) ((unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9 - 1] [i_2] [(short)6]))) : (arr_30 [i_2]))), (((/* implicit */unsigned long long int) ((2229168333U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))))))));
        }
        for (signed char i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
        {
            var_39 *= ((/* implicit */signed char) 364931411840794617LL);
            arr_33 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_10] [i_10]))));
            var_40 = (!(arr_10 [(unsigned char)7] [i_10]));
            var_41 = ((/* implicit */signed char) arr_20 [(_Bool)1] [i_2] [i_10 + 2]);
        }
        var_42 = ((/* implicit */signed char) min(((+(0ULL))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (-748197942)))), (((var_12) * (((/* implicit */unsigned long long int) var_6))))))));
        arr_34 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [12LL] [i_2 + 1] [(signed char)10] [i_2 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)2691))))))) : (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-28687)), (9223372036854775807LL)))) & (min((arr_22 [i_2] [i_2 + 1] [i_2] [i_2]), (18446744073709551615ULL)))))));
    }
    for (long long int i_11 = 1; i_11 < 13; i_11 += 4) /* same iter space */
    {
        arr_38 [i_11] [i_11] = ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) arr_5 [i_11] [i_11])), (arr_30 [i_11]))) == (max((18444492273895866385ULL), (((/* implicit */unsigned long long int) 2147483618)))))) ? (((2251799813685253ULL) << (((arr_7 [i_11 + 3] [(signed char)2]) - (454320430U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (short)-28695)))))))));
        var_43 = ((/* implicit */int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483641)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) arr_2 [i_11 + 4] [i_11]))))), (((((/* implicit */_Bool) (short)28673)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12074))) : (262503099U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3)) ? (((((/* implicit */_Bool) arr_28 [7ULL])) ? (((/* implicit */int) arr_36 [12LL] [i_11])) : (((/* implicit */int) (signed char)-46)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
        var_44 -= ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-3117))))), (((((/* implicit */_Bool) arr_9 [(unsigned char)10] [i_11])) ? (((/* implicit */int) arr_8 [i_11])) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (var_0))))) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11] [i_11 + 2]))) : (253952ULL))))))));
    }
    for (long long int i_12 = 1; i_12 < 13; i_12 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_23 [(unsigned short)4] [i_12 + 2]), (arr_23 [(unsigned char)10] [i_12 + 1])))) << (((/* implicit */int) max((arr_35 [i_12 + 4]), (((/* implicit */signed char) ((var_14) > (((/* implicit */int) arr_17 [i_12]))))))))));
        arr_42 [i_12] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-22311)) : (((/* implicit */int) arr_36 [i_12] [i_12]))))))));
        arr_43 [(unsigned char)16] |= ((((/* implicit */int) arr_11 [(unsigned char)2] [(unsigned char)2] [(unsigned char)12])) | ((+(((int) (unsigned short)38978)))));
        var_46 -= ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (unsigned char)243)) ? (var_4) : (((/* implicit */int) var_13)))))) & (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) arr_31 [i_12] [i_12 + 1] [i_12 + 1])) : (var_14)))));
    }
}
