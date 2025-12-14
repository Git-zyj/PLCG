/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240378
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned long long int) (unsigned short)14161)), (9622146082862317287ULL))), (((/* implicit */unsigned long long int) (+(arr_4 [0U] [i_1] [i_1])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (623940780876207058ULL) : (623940780876207058ULL))) == (((((/* implicit */_Bool) (signed char)127)) ? (17822803292833344541ULL) : (17488530243877182820ULL))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) (signed char)1)) ? (17822803292833344557ULL) : (((/* implicit */unsigned long long int) arr_6 [i_4] [i_3] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)896))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) - (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((var_0), (((/* implicit */unsigned int) (signed char)18)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_4))) == (18446744073709551599ULL)))))));
                                var_20 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1 - 2] [i_1 - 2]))))) >> (((((((/* implicit */_Bool) arr_9 [i_1 - 4])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1 - 1] [i_3])))) - (18542)))));
                                var_21 = ((/* implicit */unsigned short) min((((unsigned long long int) arr_6 [i_0] [i_0] [i_0 - 1] [i_0 - 2])), (((/* implicit */unsigned long long int) min(((unsigned short)41588), (((/* implicit */unsigned short) (signed char)50)))))));
                                arr_16 [(unsigned char)11] [(unsigned char)11] [i_1 - 2] [(unsigned short)0] [i_3] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [7ULL] [7ULL] [i_4])) || (((/* implicit */_Bool) (unsigned short)64653))))), ((+(arr_11 [(signed char)9] [(unsigned char)6] [(unsigned char)6] [(_Bool)1] [i_1 - 3] [i_1 + 2])))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [13U] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) - (((((/* implicit */_Bool) (+(623940780876207058ULL)))) ? (((18446744073709551599ULL) - (912364801889767433ULL))) : ((+(18446744073709551599ULL)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)52726)) : (((/* implicit */int) var_13))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))))) | (((((/* implicit */_Bool) 1067524851856747633ULL)) ? (((/* implicit */int) (unsigned short)64653)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55303))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52726)) ? (((/* implicit */unsigned long long int) -1)) : (arr_11 [(unsigned char)0] [(unsigned char)6] [i_2] [i_0] [i_0] [i_0])))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [i_5] = ((/* implicit */signed char) ((unsigned long long int) (-2147483647 - 1)));
                    arr_23 [i_5] [i_5] [i_0 + 1] = ((/* implicit */signed char) 1556216709274010380LL);
                }
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)52726))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)55303))))) : (((((/* implicit */_Bool) var_0)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(15376322305682789296ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-88)))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)153)) - (((/* implicit */int) (unsigned short)39618))))) ? ((+(3948392393342040052ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))))));
    var_24 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 2 */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        var_25 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6])) ? (var_10) : (((/* implicit */unsigned long long int) arr_25 [i_6])))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                arr_35 [i_6] = ((/* implicit */unsigned long long int) var_16);
                                arr_36 [i_6] [i_6] [i_6] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_33 [i_7 + 4] [i_7] [i_7] [i_7 - 1] [i_8] [i_7 - 1]), (((/* implicit */unsigned char) arr_26 [i_7 + 3] [i_10]))))) & (((/* implicit */int) arr_33 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 2] [i_9] [i_10]))));
                            }
                        } 
                    } 
                    arr_37 [i_6] [i_6] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6]))) : (((arr_31 [i_7] [i_7] [i_7] [i_6]) >> (((4157173105257798649LL) - (4157173105257798589LL))))))))));
                }
            } 
        } 
    }
    for (signed char i_11 = 3; i_11 < 18; i_11 += 2) 
    {
        var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_38 [i_11 - 2] [i_11]))))));
        var_27 -= ((/* implicit */signed char) ((18446744073709551615ULL) << ((+(((/* implicit */int) (unsigned short)0))))));
        arr_41 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64640)) ? ((~(arr_39 [i_11 - 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_38 [i_11] [i_11])), ((signed char)-26)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (arr_39 [i_11]))))) : (((((/* implicit */_Bool) var_17)) ? (36028797018963966LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)38))))))))));
        arr_42 [12ULL] = ((/* implicit */unsigned char) 1461561578135380488ULL);
    }
    var_28 = ((/* implicit */signed char) (((((((~(((/* implicit */int) (signed char)18)))) + (2147483647))) >> ((~(((/* implicit */int) (signed char)-9)))))) - (((((/* implicit */int) var_9)) + (((((/* implicit */int) (unsigned char)25)) - (((/* implicit */int) (_Bool)1))))))));
}
