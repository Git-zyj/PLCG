/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226840
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
    var_20 = ((/* implicit */unsigned char) var_13);
    var_21 = ((/* implicit */int) var_1);
    var_22 = max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((1768843791606780210LL) - (1768843791606780210LL)))))) : ((~(5198558993505154537LL))))), (((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)-23))))))));
    var_23 = ((/* implicit */unsigned long long int) ((signed char) 1714625531U));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_4 [4U] = ((/* implicit */int) 1714625525U);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_19)) ? (var_4) : (6978378002936008458LL))))), (((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_8))))) ^ (((arr_5 [i_0 - 1]) - (((/* implicit */int) arr_3 [(_Bool)1]))))))));
                            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_10)))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(signed char)14] [i_1] [i_3] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)14)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_15))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) ((signed char) -5067628592032294596LL))) ^ (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (signed char)6))))))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            arr_22 [i_0] [17U] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) var_4);
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(var_4))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_3 - 1] [i_3 - 2] [11LL] [11LL] [i_3 + 1])) / (((/* implicit */int) arr_21 [i_3 + 1] [i_3 - 1] [(signed char)0] [i_3 - 2] [i_3]))));
                            arr_23 [i_0] [i_1] [i_2] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        var_28 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */long long int) ((2580341757U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12)))))) : (((((/* implicit */_Bool) arr_16 [i_3] [i_0 - 1] [(signed char)21] [i_1] [i_0 - 1] [(signed char)21])) ? (arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) && (((/* implicit */_Bool) (short)0))))) * (((/* implicit */int) ((_Bool) arr_18 [22] [22] [i_6] [i_6])))));
        var_30 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_15)))));
        var_31 = ((int) max((arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (((long long int) arr_26 [i_6] [i_6]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6696464568401493744LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)65))));
        arr_30 [i_7] |= ((/* implicit */signed char) var_15);
        var_33 = ((/* implicit */unsigned int) ((arr_18 [i_7] [i_7] [i_7] [i_7]) == (((/* implicit */long long int) arr_13 [i_7] [5LL] [5] [i_7]))));
        arr_31 [2U] = ((/* implicit */int) (!(((/* implicit */_Bool) 1714625526U))));
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 21; i_8 += 1) 
    {
        var_34 = ((/* implicit */signed char) ((unsigned char) ((int) var_3)));
        arr_34 [i_8] [i_8 - 1] = ((/* implicit */short) var_10);
        var_35 = ((/* implicit */unsigned long long int) var_3);
        var_36 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_8] [i_8] [i_8]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */int) arr_6 [i_8 + 1] [i_8 + 1] [i_8])) : (((/* implicit */int) var_1))))) : ((-(var_0))));
        arr_35 [i_8] = ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (1762146972U)))) : (((((/* implicit */long long int) ((/* implicit */int) var_16))) - (arr_18 [i_8] [i_8 + 1] [i_8 + 1] [i_8]))));
    }
}
