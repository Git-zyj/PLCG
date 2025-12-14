/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218681
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
    var_20 = var_15;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)9] [i_0 - 1]))) : (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)50)) > (((/* implicit */int) arr_3 [4U]))))))), (((/* implicit */long long int) ((((unsigned long long int) 6412158382618244117ULL)) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))))))));
        var_22 ^= ((/* implicit */short) min((17445065532509583458ULL), (((/* implicit */unsigned long long int) var_15))));
        var_23 = arr_0 [i_0 - 2] [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [13ULL] [(unsigned short)18])))) ? (arr_2 [19LL]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)504))))))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0 - 1] [(unsigned short)20])), (((unsigned char) arr_1 [i_0] [(_Bool)1]))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (short i_3 = 3; i_3 < 24; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_16 [(signed char)5] [14] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4]))) != (955922459U))) ? ((-(((/* implicit */int) arr_8 [i_1 - 2])))) : (((/* implicit */int) ((signed char) arr_8 [i_2])))));
                        var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) 17445065532509583469ULL)) ? (((((arr_11 [(unsigned short)8] [i_2] [22U]) << (((18446744073709551615ULL) - (18446744073709551599ULL))))) | (((/* implicit */unsigned long long int) 2147483638)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483627)) || (((/* implicit */_Bool) 1728527410U))))))));
                        arr_17 [i_3] [(_Bool)1] [(_Bool)1] [i_3] = ((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_15 [i_3] [i_1 + 1] [i_3 - 2] [i_3 + 1]) : (arr_15 [i_3] [i_1 + 1] [i_3 - 2] [i_3 + 1]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_10 [(short)2] [(unsigned short)24]))))) ? (((/* implicit */int) arr_8 [i_1 - 2])) : (((((/* implicit */int) arr_10 [i_1] [(unsigned char)13])) >> (((/* implicit */int) arr_10 [(unsigned short)16] [17ULL]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_25 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_5 [i_1 - 2]), (599223135U)))) > (((((/* implicit */_Bool) arr_20 [(_Bool)1] [(_Bool)1] [22] [(short)18] [i_3] [i_5])) ? (((((/* implicit */_Bool) 6412158382618244118ULL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [(short)3]))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            var_26 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [14U] [14U]))));
                            var_27 = ((/* implicit */long long int) arr_8 [20LL]);
                            var_28 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) + (3695744160U))) < (((/* implicit */unsigned int) arr_19 [19LL] [i_2] [i_5]))));
                        }
                        for (signed char i_7 = 2; i_7 < 22; i_7 += 3) 
                        {
                            var_29 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [15])) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_26 [i_7 + 2] [i_7 - 2] [i_7 + 2] [14U] [i_7 + 2]))))) ? (((((/* implicit */unsigned long long int) -3371972281984947928LL)) / (2360449325857606568ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) arr_26 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2]))))))));
                            arr_28 [(short)2] [(short)2] [(short)2] [8ULL] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_11))))))) ? (max((((((/* implicit */_Bool) (unsigned char)245)) ? (1048560LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))))), (max((((/* implicit */long long int) arr_9 [(short)20])), (arr_0 [i_3] [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [15] [i_2] [i_3 - 2] [19U] [i_3 - 2])) ? (1047552U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1 - 2] [i_2] [i_3 - 1] [i_5] [12U]))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_22 [i_1] [i_1 + 1] [i_1] [1U] [i_3] [3U]))))) ? (arr_11 [i_3] [23U] [9U]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (signed char)120))) ? (-2147483617) : (((/* implicit */int) var_15)))))));
                            var_31 = ((/* implicit */int) max((min((arr_2 [i_1 + 1]), (arr_2 [i_2]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [(_Bool)1] [(_Bool)1] [i_1 - 2])) ? (-6594068020615927637LL) : (((/* implicit */long long int) ((/* implicit */int) var_19))))) <= (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                        }
                        var_32 = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((_Bool) arr_11 [i_3] [(_Bool)0] [i_3]))))) > (((/* implicit */int) (signed char)126))));
                    }
                }
            } 
        } 
        var_33 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_0 [i_1] [6U]) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) == (17091784912500596701ULL))))))) > (13907278716277019085ULL)));
        var_34 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_2)) : (arr_0 [(unsigned short)8] [12U])))))) ? (((((/* implicit */_Bool) arr_25 [(short)2] [i_1 - 1] [i_1])) ? (arr_11 [(signed char)4] [(unsigned char)4] [(signed char)4]) : (max((((/* implicit */unsigned long long int) 2573803500U)), (18446744073709551598ULL))))) : (((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1))) + (((/* implicit */unsigned int) -2147483638))))));
        arr_31 [14LL] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (((long long int) arr_15 [(_Bool)1] [i_1 - 1] [i_1 - 2] [i_1 + 1]))));
    }
}
