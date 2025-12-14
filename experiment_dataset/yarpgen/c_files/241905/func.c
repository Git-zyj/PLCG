/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241905
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
    var_20 *= ((/* implicit */signed char) var_13);
    var_21 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (-9078331081685300279LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
            arr_5 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)19)) - (((/* implicit */int) (signed char)-56))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                var_22 = ((/* implicit */signed char) ((-9078331081685300276LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_23 ^= (((~(980438597U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))));
                    arr_10 [i_2] [10] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        arr_15 [i_4] [i_1] [i_3] [i_2] [i_1] [4ULL] &= ((/* implicit */short) ((4294967292U) == (((((/* implicit */unsigned int) ((/* implicit */int) (short)-30990))) + (1654260405U)))));
                        arr_16 [i_1] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((2147483647) / (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_0] [1ULL]))));
                        var_24 = ((/* implicit */unsigned char) arr_8 [(unsigned short)5] [i_1] [i_4] [i_3]);
                    }
                }
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_25 ^= ((/* implicit */short) arr_7 [10U] [i_1]);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)11] [i_5] [i_0] [i_6])) % (((/* implicit */int) (unsigned char)255))))));
                        var_26 = ((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_0] [(signed char)11] [i_5]));
                        var_27 = ((/* implicit */long long int) (short)20549);
                        var_28 |= (~((-(-1986726201753210277LL))));
                    }
                }
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~((+(-2432035949652510465LL))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2028105982421170691LL)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (arr_23 [i_0] [i_1] [i_2] [(unsigned char)9]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_31 *= ((/* implicit */short) (signed char)63);
                        arr_27 [i_0] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44720))) : (10909641563833232988ULL)))));
                        var_32 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_9] [5] [5] [i_9] [5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_17)));
                        var_34 = ((/* implicit */long long int) (~(8384512U)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        arr_35 [i_0] [i_9] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_11]);
                        var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) -1818714560150894016LL)) ? (arr_25 [i_0] [i_0] [0LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))));
                        var_36 = ((/* implicit */signed char) ((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_9] [i_11])))));
                        arr_36 [i_11] [i_1] [0U] [i_9] [10ULL] [0U] |= ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) 9508227997820884612ULL)));
                    }
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1814625961184778130LL)) / (9508227997820884612ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30137))) : (-1818714560150894016LL)));
                        var_38 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_13))));
                    }
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_39 += ((/* implicit */unsigned char) ((unsigned int) 18446744073709551615ULL));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [(signed char)7] [i_1] [i_0] [i_1]))) % (arr_25 [i_0] [i_0] [i_0])));
                        var_41 += ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [4ULL] [4ULL] [i_2] [4ULL] [i_13]))) != ((~(arr_37 [i_13] [i_9] [(short)6] [1LL] [1LL]))));
                    }
                    arr_41 [i_0] [i_0] [i_2] [i_9] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_11 [3LL] [i_0] [i_1] [(signed char)6] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    var_42 += ((/* implicit */unsigned char) (-(-2073266290)));
                    var_43 -= ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_44 *= ((/* implicit */signed char) arr_37 [i_0] [i_0] [i_2] [i_0] [i_15]);
                        var_45 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3725560283U)) ? (3452027493386391727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))))));
                        arr_47 [i_0] [i_0] [i_2] [i_0] [(short)11] [i_0] [i_14] = ((/* implicit */signed char) ((unsigned int) arr_45 [i_0] [i_0] [i_2] [i_0] [i_15]));
                        arr_48 [i_0] [i_0] [i_15] [(unsigned short)8] [i_15] = ((/* implicit */long long int) (unsigned short)60550);
                        var_46 = ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) : ((-(var_17))));
                    }
                    var_47 ^= ((/* implicit */unsigned int) (_Bool)0);
                    arr_49 [i_0] [i_2] [i_2] [(unsigned char)0] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [(signed char)2] [i_1] [i_0] [i_1] [i_0])) % (((/* implicit */int) arr_32 [i_0] [i_1] [8LL] [i_1] [i_14]))));
                }
                for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    arr_53 [i_0] = ((/* implicit */unsigned int) ((signed char) ((short) 18446744073709551615ULL)));
                    arr_54 [i_0] [i_1] [i_0] [i_16] [i_0] [i_16] = arr_0 [i_0];
                }
                var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) arr_18 [i_0] [(unsigned char)5] [i_2] [(signed char)0] [i_2]))));
            }
        }
        var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (+(((((/* implicit */unsigned int) 2147483647)) + (1020850813U))))))));
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            var_50 *= ((/* implicit */unsigned int) ((arr_17 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            var_51 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 2363370683076227408LL)) ? (1984) : (((/* implicit */int) arr_56 [i_17]))))));
            var_52 &= ((/* implicit */unsigned char) (-(arr_45 [i_17] [i_17] [i_17] [i_17] [i_0])));
        }
    }
    for (signed char i_18 = 0; i_18 < 23; i_18 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_19 = 0; i_19 < 23; i_19 += 2) 
        {
            var_53 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_18] [i_19] [i_19]))) - (((((/* implicit */unsigned long long int) arr_62 [i_18])) - (arr_59 [i_19])))));
            arr_63 [(signed char)19] [i_18] [i_18] = ((/* implicit */long long int) arr_61 [i_18] [i_18] [2ULL]);
            var_54 = ((/* implicit */long long int) max((var_54), (((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned char)143), ((unsigned char)62)))))))));
            var_55 = ((/* implicit */long long int) (+((-(((((/* implicit */int) (signed char)15)) / (((/* implicit */int) arr_61 [i_18] [i_19] [(signed char)6]))))))));
        }
        arr_64 [i_18] = ((/* implicit */short) max((((/* implicit */unsigned int) min((arr_61 [i_18] [i_18] [i_18]), (arr_61 [16LL] [i_18] [i_18])))), (max((arr_62 [i_18]), (((/* implicit */unsigned int) arr_61 [i_18] [i_18] [i_18]))))));
        var_56 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-25012)), (arr_62 [i_18])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0ULL)))) : (arr_62 [i_18])));
    }
}
