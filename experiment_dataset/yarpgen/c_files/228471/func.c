/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228471
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
    var_13 = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) -1461999645)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_11))))) : (((/* implicit */int) var_3)))), (((/* implicit */int) (short)-30841))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_1)) - (((/* implicit */int) var_10))))))) ? (((((((/* implicit */_Bool) 3539356368375888558LL)) || (((/* implicit */_Bool) (signed char)-93)))) ? (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1790948086220630862LL))))))) : (((/* implicit */int) (short)-12971))));
        var_14 = ((/* implicit */long long int) (unsigned char)134);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_15 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -6528430716180513385LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (4LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3059911252U)) ? (((/* implicit */int) (signed char)15)) : ((-(((/* implicit */int) (unsigned short)0)))))))));
            arr_7 [i_0] [i_0] = (signed char)-83;
            arr_8 [(unsigned char)0] [i_1] [(unsigned char)5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_0])), (max((((/* implicit */unsigned int) (_Bool)1)), (4059908036U)))));
        }
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_13 [i_4] [i_3] [i_2] [i_0]);
                        var_17 = ((/* implicit */unsigned char) arr_4 [i_0]);
                        var_18 += ((/* implicit */signed char) (+(max((max((2147483647), (((/* implicit */int) arr_16 [(signed char)1] [i_2] [i_3] [i_4])))), (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_22 [i_5] [i_5] [i_3] [i_3] [i_5] [(signed char)10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21086))) & (18446744073709551615ULL)))) ? (((/* implicit */int) max(((unsigned char)80), (((/* implicit */unsigned char) arr_4 [i_0]))))) : (((/* implicit */int) (unsigned char)155)))) > (((/* implicit */int) min(((signed char)-1), (max(((signed char)95), (((/* implicit */signed char) var_3)))))))));
                            var_19 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_18 [i_5] [i_4] [i_3] [i_2] [i_0])) & (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_4] [i_5])))), (((/* implicit */int) arr_1 [i_4]))));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_19 [(short)0] [i_2] [3U] [i_4] [i_5] [i_5])))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -794769721)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-83)) && (((/* implicit */_Bool) (signed char)-16)))))) : (4121798427U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))));
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_25 [(unsigned char)3] &= ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)14)) ^ (((/* implicit */int) arr_24 [i_0] [i_2] [(unsigned short)0] [i_0] [i_6] [i_2]))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((unsigned int) (signed char)-1)), (((/* implicit */unsigned int) arr_23 [i_6] [i_4] [i_3] [i_2] [i_0] [i_0]))))) | (max((((/* implicit */unsigned long long int) arr_6 [i_0])), (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28339)))))))));
                            var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-19)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) (short)24041);
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32763)) * (((/* implicit */int) (signed char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [i_7 - 1] [i_7 - 1] [i_0] [5ULL] [i_7]))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) | (-1133779514567589333LL)))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_7 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (long long int i_8 = 2; i_8 < 11; i_8 += 2) 
                        {
                            arr_34 [i_0] [(signed char)10] [i_0] &= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)223))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (var_4))))), (((/* implicit */unsigned long long int) var_3))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8 - 1] [i_8 - 2] [i_8 + 2] [i_8 + 2] [(unsigned char)5]))) != (4294967295U))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [5U] [i_3] [i_4] [i_8 - 1])) || (((/* implicit */_Bool) (unsigned char)230))))), (max((var_2), (((/* implicit */unsigned long long int) var_9))))))));
                            arr_35 [i_4] [i_3] [(_Bool)1] [4] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)29490))));
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) ((7185251740824303939ULL) * (((/* implicit */unsigned long long int) min((1193926765), (((/* implicit */int) (signed char)-1)))))));
    }
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        arr_38 [(unsigned char)8] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (signed char)127)) == ((~(-1193926766))))));
        arr_39 [i_9] = ((/* implicit */unsigned short) ((unsigned long long int) var_8));
        arr_40 [i_9] = ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) - (4294967295U))) == (arr_36 [(unsigned char)6]))) || (((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) != (((/* implicit */int) (_Bool)0)))))));
        var_30 = ((/* implicit */unsigned long long int) ((int) max((arr_31 [i_9]), (arr_31 [i_9]))));
    }
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (unsigned short)46256)))));
        var_32 = ((/* implicit */unsigned char) arr_20 [i_10] [i_10] [(unsigned short)6]);
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (signed char)86)), (2088825778U)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) (unsigned short)30649)))))))) : (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)42796))))) / (arr_14 [i_10] [i_10] [i_10])))));
        var_34 -= ((/* implicit */unsigned char) (unsigned short)1);
    }
}
