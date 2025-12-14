/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194654
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) min((min((-2115754911), (2115754888))), (((/* implicit */int) ((short) var_12)))))) ? (((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)14099))))))) : (((int) (~(((/* implicit */int) var_0))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9270061947624687154ULL)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (short)8847))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_12 [(unsigned short)16] [(unsigned short)16] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0 + 1] [i_3 + 3] [18ULL] [i_3 + 1] [(signed char)15]))));
                        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_16 [i_0] [(signed char)11] [(unsigned char)2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_3)));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)26275)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_0]))))) : (-4778329431028171247LL))))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned int) ((var_6) ? (arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (9223372036854775807LL)))))));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((arr_8 [i_0] [i_0 - 1] [i_0] [20LL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73)))))));
        arr_18 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2196229658U)) ? (266459179480815561LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30)))));
    }
    for (int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
    {
        var_23 -= max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) -266459179480815561LL))))), (arr_19 [i_5 + 4])))));
        arr_22 [i_5] [i_5 + 4] = ((/* implicit */long long int) 1457548315);
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (arr_19 [i_5 + 1]) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_19 [i_5 + 3])) ? (arr_19 [i_5 + 3]) : (((/* implicit */int) var_16)))))))));
    }
    for (int i_6 = 1; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) var_17);
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243)))))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))) : (18446744073709551615ULL)))));
            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(5206336582029706480ULL))), (((/* implicit */unsigned long long int) arr_24 [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_7)))))) : (2091258124)));
            var_28 = ((/* implicit */unsigned char) min((((unsigned int) arr_13 [i_6] [i_7] [i_6] [i_6] [i_7] [i_6 + 1] [i_6])), (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_6 + 4] [i_6] [(unsigned short)5] [i_6 + 2] [i_6]))))), (max((((/* implicit */unsigned int) var_11)), (arr_9 [i_6] [i_6 + 3] [i_6] [i_6])))))));
        }
        /* vectorizable */
        for (long long int i_8 = 3; i_8 < 12; i_8 += 4) 
        {
            arr_29 [i_6] [i_8 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (arr_4 [i_6] [(_Bool)1])));
            arr_30 [6U] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_8 + 3])) ? (((/* implicit */int) arr_25 [i_8 - 2])) : (((/* implicit */int) arr_25 [i_8 - 1]))));
        }
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((int) (-2147483647 - 1))))));
    }
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)37008)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_9))))) ? (var_3) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8821)))))));
}
