/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211378
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((min((max((var_13), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_7)) : (var_16)))))) * (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) : (199705775U)))) ? (-1762066746) : (((((/* implicit */int) (signed char)-73)) * (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */int) max(((unsigned char)227), ((unsigned char)41)))) : (((/* implicit */int) ((signed char) arr_0 [i_0]))))))));
        var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (min((((((/* implicit */_Bool) (unsigned short)50912)) ? (((/* implicit */int) (unsigned short)28)) : (((/* implicit */int) (unsigned char)166)))), (((((/* implicit */_Bool) (unsigned char)64)) ? (-769612316) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_22 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_23 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_16) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((+(((/* implicit */int) var_8)))) : (var_7)))), (((((/* implicit */_Bool) max(((unsigned short)50912), (((/* implicit */unsigned short) arr_2 [i_1]))))) ? ((+(arr_8 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2])))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [(unsigned short)14] [i_3 + 1] = ((/* implicit */unsigned short) var_11);
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_0])) - (((arr_11 [i_1 + 3] [i_1 - 1] [i_2] [i_2] [i_0]) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 4] [i_2] [i_3] [i_0]))))));
                    }
                    for (signed char i_4 = 2; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) arr_9 [9LL] [i_1] [i_1]);
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)75)), (var_1)))), (max((arr_5 [i_0]), (((/* implicit */unsigned short) var_1))))))), (((((/* implicit */unsigned int) 982667792)) % (4294967295U)))));
                    }
                    arr_17 [i_2] [(signed char)10] [0LL] [16] |= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)14624))));
                    var_26 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) ^ (((((((/* implicit */_Bool) -3036864504959457669LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535)))) + (((/* implicit */int) (unsigned short)42323)))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        arr_20 [i_5 - 1] [i_5] = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23213)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23212)) ? (var_7) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_2 [i_5 - 2])) : (((/* implicit */int) ((_Bool) (unsigned char)247)))))));
        arr_21 [(signed char)17] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_6 [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 2] [0U]))) : ((~(arr_18 [i_5]))))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) arr_11 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 2] [12LL]))))) - (min((((/* implicit */long long int) arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [(unsigned char)4])), (var_4)))));
    }
    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        arr_24 [i_6] = max((((/* implicit */unsigned int) ((arr_6 [i_6] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned short)50912))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [(short)8]))))) : (((unsigned int) arr_12 [i_6])))));
        arr_25 [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (arr_6 [(unsigned short)17] [i_6])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_6]))))) && (((/* implicit */_Bool) -8080159862816728821LL))));
    }
}
