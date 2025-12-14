/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228085
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 - 1])) ? (((arr_2 [(short)6]) << (((/* implicit */int) (unsigned char)16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [(_Bool)1])) >= (((/* implicit */int) (short)18940))))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) 4294934528U)) >= (-3452448127877756686LL))))));
            }
            for (short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((unsigned char) (+(((/* implicit */int) (short)-2982)))))));
                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)20)) >= (((/* implicit */int) (short)505)))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3]))));
                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)27)) << (((unsigned int) (_Bool)1))));
            }
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29461)) - (((/* implicit */int) (unsigned char)85))))) : (((unsigned int) 4168856592U)))))));
                var_18 = ((/* implicit */_Bool) 235916094612774971ULL);
            }
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (short i_6 = 3; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_21 [i_6] [i_1] [i_5] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)253))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12860)) || (((/* implicit */_Bool) arr_18 [1ULL] [1ULL] [i_0] [i_1] [i_5] [(_Bool)1])))))));
                    }
                } 
            } 
            arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (signed char)126);
            var_20 = (unsigned short)52157;
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 |= min((((((/* implicit */_Bool) 963684946U)) ? ((-(1055531162664960ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((4294934528U) >> (((((/* implicit */int) (unsigned char)241)) - (231)))))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((long long int) (signed char)-31))) ? (2229855498U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) (unsigned short)52675)))))));
        }
        for (unsigned char i_8 = 1; i_8 < 12; i_8 += 1) 
        {
            arr_28 [i_8] = ((/* implicit */long long int) (unsigned char)13);
            arr_29 [i_8 + 2] [i_8 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) (short)8115)) : (((/* implicit */int) arr_27 [i_0] [(_Bool)1] [i_0]))));
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) 5791733161244719094ULL)) ? (min((((/* implicit */unsigned long long int) (short)7)), (1055531162664949ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61747)))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_7 [i_8 + 1] [i_8] [i_8 + 2])) : (((/* implicit */int) (unsigned short)15360)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_8 + 1] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) >= (max((arr_12 [(_Bool)1] [(_Bool)1] [i_8 + 1] [i_8]), (((/* implicit */unsigned int) (_Bool)1)))))))));
            arr_30 [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((((/* implicit */_Bool) (unsigned short)16366)) ? (((/* implicit */int) (signed char)3)) : (((((/* implicit */int) (unsigned short)10866)) << (((8632902176948475534ULL) - (8632902176948475521ULL)))))))));
        }
        arr_31 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) var_2))) + (((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_0])))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        arr_40 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_10 - 2] [i_10 - 2] [i_9]))) ? ((+(arr_38 [i_0] [i_9 - 1] [i_10] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)40)), (var_10)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])), (arr_1 [i_11])))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9] [i_10 + 1] [i_11]))))) : (458739724U))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -4537453146503819198LL)))) ? (((/* implicit */int) max((arr_10 [i_0] [i_10 - 2] [i_11]), (((/* implicit */unsigned char) arr_26 [i_0] [i_11]))))) : (((/* implicit */int) min(((unsigned char)119), (((/* implicit */unsigned char) var_3)))))))));
                        var_24 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)-19348))))) ? ((-(arr_39 [(signed char)0]))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)61)) * (((/* implicit */int) var_9))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3715558366059909612LL)))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((var_2), (((((/* implicit */_Bool) 2100410833U)) && (((/* implicit */_Bool) 1773523802U)))))))));
    var_26 = ((/* implicit */signed char) max(((unsigned short)34690), (((/* implicit */unsigned short) min((var_3), (((_Bool) 4294967295U)))))));
}
