/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45896
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), ((((!(((15) == (-39))))) ? (((((/* implicit */_Bool) ((signed char) 1U))) ? (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned short)8685)))) : ((~(((/* implicit */int) var_17)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-113)), ((unsigned short)49314))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_3] [i_3] [i_3])))) || (((/* implicit */_Bool) min((67108863U), (((/* implicit */unsigned int) (signed char)-113)))))))), ((unsigned short)24859)));
                            var_21 = ((/* implicit */unsigned short) min(((-(var_18))), (min((arr_4 [i_2] [i_3] [i_2]), (arr_4 [18LL] [i_1] [18LL])))));
                            arr_15 [i_3] [i_4] [(signed char)15] [i_3] [(signed char)15] = ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) arr_8 [i_0 + 1] [i_0 - 2])), ((+((-9223372036854775807LL - 1LL)))))));
                            arr_16 [i_4] [i_0] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((int) ((_Bool) -1713227763)));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((max(((+(15))), (((/* implicit */int) var_8)))) >= (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_5])));
                            var_23 = ((/* implicit */unsigned char) 153816420);
                            var_24 = ((/* implicit */unsigned short) arr_5 [i_0 - 2]);
                            arr_20 [i_5] = ((/* implicit */unsigned char) 4227858432U);
                        }
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) ((unsigned short) 2051655229U))))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1773947036))))) | (((int) arr_19 [i_2] [i_1] [i_2]))))) ? (((((/* implicit */long long int) 762662469U)) + (max((((/* implicit */long long int) var_8)), (arr_18 [i_0] [i_1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((((/* implicit */signed char) min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2])))), (var_13))))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((arr_0 [i_0 - 2]), (((/* implicit */int) arr_5 [i_0 + 1]))))) < (arr_19 [i_6] [i_2] [i_0 - 1]))))));
                        var_29 |= ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_0 - 2])) : (((/* implicit */int) var_15)))) << (((var_11) + (5795350215412537718LL)))))), (max((3925106456U), (((/* implicit */unsigned int) arr_1 [i_0 + 1]))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [i_7]))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), ((((((!(((/* implicit */_Bool) -1773947037)))) ? (((/* implicit */long long int) arr_12 [i_0] [i_7] [i_2] [i_7])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_18 [i_7] [i_2] [i_0 + 1]))))) ^ (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)53645)) ? (((/* implicit */int) (unsigned short)22342)) : (((/* implicit */int) var_15)))))))))));
                            var_32 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_28 [i_8] [i_0] = ((unsigned char) ((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) > (((/* implicit */int) ((_Bool) var_18)))));
                        }
                        for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
                        {
                            arr_31 [i_7] [(signed char)11] [i_7] [i_7] [(signed char)11] [(unsigned short)15] [i_7] = ((/* implicit */_Bool) min((((arr_25 [i_0 + 1] [i_9 + 1] [i_9 - 1] [i_0 + 1] [i_0 + 1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1]))) : (arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 2]))), (((/* implicit */long long int) ((_Bool) arr_5 [i_0])))));
                            var_33 &= ((/* implicit */unsigned short) (_Bool)1);
                            var_34 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)1881)) : (((/* implicit */int) (signed char)-102)))));
                        }
                        for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned short) var_13);
                            var_36 = ((/* implicit */long long int) ((unsigned int) arr_21 [i_10] [i_10] [i_2] [(unsigned short)9] [i_10] [i_7]));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_32 [i_7] [i_0];
                        }
                        arr_36 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((_Bool) var_1));
                        arr_37 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] &= ((((unsigned int) arr_9 [i_0 - 1] [i_2] [i_2] [i_1] [i_0 - 1])) - (((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) << ((((~(762662475U))) - (3532304791U)))))));
                    }
                    var_37 = ((/* implicit */signed char) var_1);
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 3; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)52)), (3199364535U)))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (1095602749U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) 1252587874U))));
                                var_40 *= (!(((((/* implicit */long long int) arr_21 [i_1] [i_12] [i_11 + 4] [i_1] [i_1] [i_0 + 1])) <= (min((((/* implicit */long long int) (unsigned short)39836)), (var_2))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_41 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)27)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7)))))));
}
