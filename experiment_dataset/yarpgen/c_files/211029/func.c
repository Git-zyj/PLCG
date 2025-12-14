/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211029
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
    var_14 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_15 = ((((/* implicit */_Bool) ((var_3) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (((int) arr_4 [5ULL] [5ULL] [i_1]))))) ? (((((var_10) ? (8229873169189685826LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) / (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-126), (((/* implicit */signed char) var_8)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)-125)) : (((((/* implicit */int) (unsigned short)39642)) / (((/* implicit */int) arr_2 [21U]))))))) ? (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) min((((/* implicit */short) var_1)), (arr_5 [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) / ((-9223372036854775807LL - 1LL))))))));
            arr_6 [i_1] = ((/* implicit */short) var_1);
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) var_3);
            arr_11 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_9))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))));
            arr_12 [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-125)) >= ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            arr_17 [6LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0]))))) : (((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_3])) * (var_11)))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (2634648479U))))))));
        }
        for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            var_19 = ((/* implicit */short) (+((-(((/* implicit */int) arr_18 [i_4 + 1] [i_4 + 2] [i_4 - 1]))))));
            var_20 = ((/* implicit */short) (~(((long long int) arr_18 [i_4 + 1] [i_4 + 2] [i_4 - 1]))));
        }
        arr_22 [i_0] = (unsigned char)232;
        arr_23 [i_0] |= ((unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_28 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_5] [i_5])) - (((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_6))))))) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_11)))))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_21 *= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_24 [(unsigned char)21] [i_6])))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_4))))))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_12))));
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (short)16128)))))));
            arr_32 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_15 [i_5] [i_6]))) ? (((/* implicit */int) min((arr_8 [i_5]), (((/* implicit */signed char) var_8))))) : (((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_5]))))));
        }
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 19; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            arr_43 [i_7] [i_8] [i_7] = ((/* implicit */_Bool) (+(((var_3) ? (((/* implicit */int) ((unsigned short) 2939252699950643314LL))) : (((var_3) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_34 [(_Bool)0] [i_8 + 4] [i_9]))))))));
                            arr_44 [i_5] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_36 [i_5] [i_10] [i_5])), (var_4))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */short) var_3);
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) var_3)))))));
            arr_45 [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125))))) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_36 [i_5] [i_7] [7]))))))) ? (((((((/* implicit */int) (unsigned short)22338)) | (((/* implicit */int) (signed char)(-127 - 1))))) & (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_41 [i_5] [i_7] [(unsigned short)21] [i_7] [i_7] [i_7])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_40 [i_5] [i_7] [i_7] [i_5] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_16 [i_7] [i_5] [i_5])) % (((/* implicit */int) var_7))))))));
        }
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_5])))), (((((/* implicit */_Bool) arr_34 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_13 [i_5] [i_5])) : (((/* implicit */int) arr_26 [i_5])))))))));
        arr_46 [i_5] [i_5] = ((/* implicit */long long int) arr_30 [i_5] [i_5]);
    }
    var_27 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        arr_50 [i_11] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (((long long int) (unsigned char)24))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) arr_49 [i_11]))))) ? ((+(((/* implicit */int) arr_48 [i_11])))) : ((-(((/* implicit */int) (signed char)-87)))))) : (((((/* implicit */int) (unsigned short)38342)) * (((/* implicit */int) (unsigned short)6383))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_47 [i_11] [i_11])) : (((/* implicit */int) arr_47 [i_11] [i_11]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_47 [i_11] [i_11])) : (((/* implicit */int) arr_47 [i_11] [i_11])))) : (((/* implicit */int) min((arr_47 [i_11] [i_11]), (arr_47 [i_11] [i_11])))))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_11] [i_12]))))) ? ((~(((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_56 [i_11] [i_11]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-32765)) && (((/* implicit */_Bool) 6675770073903775320LL)))))))))))));
                    var_30 = ((/* implicit */unsigned int) var_9);
                    var_31 = ((/* implicit */unsigned short) (+(-2939252699950643314LL)));
                    var_32 = min(((+(((/* implicit */int) min(((unsigned char)252), (var_5)))))), (((((/* implicit */_Bool) arr_52 [i_11])) ? (arr_52 [i_11]) : (((/* implicit */int) arr_54 [i_12])))));
                }
            } 
        } 
    }
}
