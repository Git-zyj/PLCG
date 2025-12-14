/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210833
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        var_18 += ((/* implicit */unsigned short) ((arr_2 [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_13 [(short)11] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [(signed char)15] [i_1] [i_2]))));
                            var_19 = ((/* implicit */long long int) arr_6 [i_0] [15] [2U]);
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)31473)) == (((/* implicit */int) (short)2040))));
                        }
                        for (short i_5 = 2; i_5 < 16; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (unsigned short)35694))));
                            var_22 ^= ((((arr_9 [i_0 - 1] [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_5]))))) << (((/* implicit */int) ((72057594037927935LL) != (var_3)))));
                            arr_17 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)21700))));
                            arr_18 [i_0] [i_5] [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_1 [i_5 + 2]))));
                        }
                        for (long long int i_6 = 4; i_6 < 17; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_3] [i_0] [i_1 + 3] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_16 [i_0] [(_Bool)1] [i_2] [(_Bool)1] [i_2] [i_0]))))));
                            arr_22 [i_0] = ((/* implicit */short) arr_19 [i_0 + 2] [i_1] [i_1] [i_3] [(unsigned short)1] [i_6 - 1]);
                            arr_23 [i_2] [i_3] [(signed char)6] [i_2] [i_2] &= ((((/* implicit */int) arr_16 [i_1 - 2] [i_6 - 2] [(signed char)12] [i_6] [i_6] [i_2])) / (((/* implicit */int) arr_16 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_6] [i_1])));
                            arr_24 [i_0] [i_2] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */short) (unsigned short)20536);
                        }
                        arr_25 [i_0 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_20 [i_0] [i_0] [i_1] [i_2] [(short)12])))) ? (((/* implicit */int) ((arr_20 [i_0] [i_1] [i_2] [i_2] [i_3 + 1]) >= (arr_10 [i_0] [i_2] [12LL] [i_1] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)45009)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2])) : (((/* implicit */int) (unsigned short)20536))))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20536)) & (((/* implicit */int) (short)2845))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)45019)) ^ (((/* implicit */int) (unsigned short)63072))))) : (((((/* implicit */_Bool) (unsigned short)511)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)20516)) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) (unsigned short)65025))))))))));
                        var_24 = ((/* implicit */unsigned int) (short)8847);
                    }
                    for (unsigned char i_8 = 1; i_8 < 17; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0 - 2] [i_1] [i_0] [i_8] = ((/* implicit */short) (unsigned short)45020);
                        arr_31 [(_Bool)1] [i_1] [i_2] [(_Bool)1] [i_2] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (unsigned short)45019)) * (((/* implicit */int) (_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) (short)20)) : (1065353216)))))) || (((/* implicit */_Bool) arr_28 [11LL] [15LL] [15LL] [i_8 - 1]))));
                        arr_32 [i_0] [i_2] [(unsigned short)6] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_8] [i_0] [i_0] [i_0])) & (((/* implicit */int) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_8] [i_8] [i_8 - 1])) ? (((/* implicit */int) arr_8 [i_8] [i_2] [i_1 - 2] [i_0])) : (((/* implicit */int) var_14)))))), ((((-(((/* implicit */int) (unsigned short)65025)))) / (((/* implicit */int) min(((unsigned short)45009), (((/* implicit */unsigned short) arr_16 [i_0 + 1] [14] [i_2] [i_2] [i_8 + 1] [i_0])))))))));
                        var_25 *= min((min((var_13), (((/* implicit */unsigned int) var_4)))), (((unsigned int) var_5)));
                    }
                    for (unsigned char i_9 = 1; i_9 < 17; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 1; i_10 < 17; i_10 += 4) 
                        {
                            arr_38 [i_0] [13] [i_0] [i_9 - 1] [i_10] = ((((unsigned int) (signed char)-102)) == (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_9] [i_0])) && (((/* implicit */_Bool) (signed char)-20))))), (min((-677300704), (((/* implicit */int) (unsigned short)20543))))))));
                            arr_39 [i_0] [i_9] [i_0 - 2] [i_2] [i_1] [i_0] = ((/* implicit */int) (_Bool)0);
                            arr_40 [i_0] [i_1] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) (signed char)-71)))) / (((/* implicit */int) (unsigned short)44986)))) ^ (((((/* implicit */_Bool) 677300703)) ? ((~(((/* implicit */int) (short)-6175)))) : (((/* implicit */int) (signed char)63))))));
                        }
                        for (unsigned int i_11 = 3; i_11 < 17; i_11 += 1) 
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_34 [i_0] [i_1] [i_2] [(unsigned short)2] [i_11]))));
                            arr_44 [i_0 + 2] [i_1] [i_2] [i_1] [i_0 + 2] &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27069)) & (((/* implicit */int) (unsigned char)255))));
                            var_27 = ((/* implicit */short) ((max(((~(((/* implicit */int) arr_15 [i_0] [i_9] [9] [i_0])))), (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_1 + 3] [i_11 - 3])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1 + 3] [i_0])))))));
                        }
                        var_28 = (+((+(((/* implicit */int) (short)-7)))));
                    }
                    arr_45 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_2] [i_1 + 1] [i_0]))))) ? ((-(((/* implicit */int) arr_15 [i_0 - 3] [i_0 - 1] [i_2] [i_0])))) : (((/* implicit */int) max((arr_15 [i_0] [i_2] [i_1 + 4] [i_0]), (arr_15 [i_0] [i_1] [i_2] [i_0]))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) var_16);
}
