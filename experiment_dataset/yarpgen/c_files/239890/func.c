/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239890
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
    var_14 &= ((/* implicit */unsigned long long int) var_9);
    var_15 = ((/* implicit */long long int) (signed char)95);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65535)))) : ((+(((/* implicit */int) arr_3 [(short)7] [i_0]))))));
        var_17 = ((/* implicit */unsigned long long int) ((((arr_3 [i_0] [i_0]) || (var_1))) || (((/* implicit */_Bool) ((signed char) var_12)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) var_10);
        var_18 *= ((/* implicit */unsigned char) (+(2097151U)));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) max(((_Bool)0), (((2571520897946730334ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_3] [i_3] [i_3] [i_2] [(unsigned short)12] = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) -7685136146670905374LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) : (4503599627370495ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))));
                        arr_16 [i_1] [(_Bool)1] [i_1] [13LL] = ((/* implicit */signed char) arr_6 [i_3]);
                        arr_17 [3U] [3U] = ((/* implicit */signed char) min((((((/* implicit */int) arr_8 [i_4])) * (((/* implicit */int) arr_10 [1LL] [i_2] [i_3])))), ((+(((/* implicit */int) arr_10 [i_3] [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    arr_25 [i_6] = min((((2ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41231)) | (-567901868)))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) 35167192219648ULL))));
                    var_21 = ((/* implicit */unsigned char) arr_18 [i_7]);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_24 [i_9] [i_6])))) || (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_27 [(_Bool)1] [(_Bool)1] [i_7] [i_9]))))))) % (((/* implicit */int) min(((unsigned short)51194), (((/* implicit */unsigned short) arr_31 [i_8] [i_6 - 1] [10U] [i_6] [i_6] [i_6] [i_6 + 1])))))));
                                var_22 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_8]))) | (8518309560063342808ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_5] [(unsigned short)7]))))))))));
                                arr_34 [11ULL] [i_8] [i_8] [i_6] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (short)28760))))) ? (15282663538607303350ULL) : (((/* implicit */unsigned long long int) 2230307445277755970LL))))));
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_5] [i_6] [i_6] [10U] [i_8] [i_9] [i_9])) & (((/* implicit */int) arr_21 [i_6] [i_7]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1692643275)))) ? (((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */int) arr_31 [i_5] [i_5] [i_6 + 1] [i_7] [i_8] [i_8] [i_9])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) (short)20924)))))) : (((long long int) arr_19 [i_6 - 1])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((arr_23 [i_5]) ? (var_11) : (((/* implicit */int) arr_24 [i_6] [i_5]))))) == (((((/* implicit */_Bool) 2002858225)) ? (((/* implicit */long long int) 2147483647)) : (var_6)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (short)1617)) / (((/* implicit */int) (signed char)-69))))) ? (((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned long long int) -2078576486)) : (16848968352258126839ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)9)))))));
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
        {
            arr_37 [i_10] = ((/* implicit */short) ((unsigned short) min((arr_21 [(unsigned short)0] [i_10]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_5] [i_10])) != (var_3)))))));
            var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_10])))))));
            arr_38 [i_10] = ((/* implicit */_Bool) min((((((/* implicit */int) max(((short)-29507), (((/* implicit */short) arr_35 [i_5] [i_5] [i_5]))))) / (min((((/* implicit */int) (signed char)18)), (-1387861254))))), (((((/* implicit */_Bool) min((((/* implicit */short) arr_35 [i_5] [i_10] [i_5])), ((short)-30718)))) ? (((/* implicit */int) arr_29 [(_Bool)1] [i_5])) : (2126477501)))));
            arr_39 [i_5] [i_10] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [i_10] [i_10] [i_10])) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_27 [i_5] [i_10] [(signed char)11] [i_10])) - (41292))))) : (min(((+(((/* implicit */int) arr_27 [(_Bool)1] [i_5] [1ULL] [(short)6])))), (arr_28 [i_5] [i_5] [i_10] [i_10])))));
        }
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                var_27 *= min((min((max((16179122861260594290ULL), (((/* implicit */unsigned long long int) (unsigned short)28757)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_43 [(unsigned char)15] [i_11] [i_11] [i_11]))))))), (((/* implicit */unsigned long long int) (!(arr_43 [i_5] [i_11] [i_11] [i_12])))));
                arr_46 [i_5] [i_11] = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)15));
            }
            arr_47 [i_11] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_0)) ? (2632085874U) : (4294967295U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10224854721602981642ULL)) ? (((/* implicit */int) arr_18 [i_5])) : (var_13)))) ? ((+(var_2))) : (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (short)27863)))))))));
            arr_48 [i_11] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_5] [i_5])) ? (((/* implicit */int) arr_40 [i_5] [i_11])) : (((/* implicit */int) arr_43 [i_5] [i_5] [i_5] [i_5]))))) + (min((((/* implicit */unsigned long long int) 958584610841654379LL)), (18446744073709551615ULL)))))));
        }
        var_28 = (+(((((/* implicit */int) arr_30 [i_5] [i_5] [(short)9] [i_5] [i_5])) * (((/* implicit */int) (!(((/* implicit */_Bool) 6706536991225199138LL))))))));
        arr_49 [i_5] [(signed char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_19 [i_5])))) ? (min((arr_26 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */long long int) arr_29 [i_5] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_31 [i_5] [4] [i_5] [4] [i_5] [i_5] [4]), (((/* implicit */short) (signed char)-55))))))));
    }
    for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        var_29 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-18593))));
        arr_52 [i_13] = ((/* implicit */signed char) (~(((min((arr_36 [i_13] [i_13] [i_13]), (((/* implicit */long long int) var_5)))) * (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)233)))))))));
    }
    var_30 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) (_Bool)1)), (191101246U)))))));
}
