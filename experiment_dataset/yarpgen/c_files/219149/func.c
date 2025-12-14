/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219149
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
    var_16 = ((/* implicit */unsigned int) var_4);
    var_17 = ((/* implicit */unsigned int) (+(2147483647)));
    var_18 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        arr_10 [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) (-(((/* implicit */int) var_13))))));
                        var_19 = (~(((((/* implicit */_Bool) 3221225472U)) ? (2147483647) : ((-2147483647 - 1)))));
                        arr_11 [i_2] [i_1] [i_2] = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_15))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))) & (arr_5 [i_2] [i_2 - 3] [(unsigned short)7] [i_3 + 1]))))));
                        arr_12 [i_2] = ((/* implicit */int) arr_7 [i_2] [(short)1] [i_3 - 1] [i_2]);
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) (unsigned char)31);
                            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)54)), ((-2147483647 - 1))));
                        }
                        arr_20 [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431U)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_2] [i_2] [5ULL])) : (((/* implicit */int) var_0))))) ? (arr_6 [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_4] [i_2 + 1] [i_0]))))))));
                        var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [i_2] [i_2 - 3] [i_2 - 1] [i_2 - 3])))) ? (min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_1])), (max((arr_7 [i_2] [i_2] [16LL] [i_4]), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_18 [i_2] [i_2] [i_2] [i_1] [i_0] [i_2]), (4752597957094168066LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)2] [(signed char)2]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_5 [i_2] [i_1] [i_1] [i_2]))))))));
                    }
                    for (short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        arr_23 [i_0] [(unsigned short)15] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_2] [i_6] [(signed char)11])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3676948625516701485LL)))))))) : ((+((+(((/* implicit */int) arr_19 [i_0] [i_0] [(signed char)4] [i_2] [i_6]))))))));
                        arr_24 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [0] [13U] [i_6]) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_19 [i_0] [i_1] [4LL] [i_2] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_18 [i_2] [i_1] [i_2] [i_6] [i_6] [i_6]))))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2 + 1] [0LL] [i_1] [i_1])))) > (((((/* implicit */_Bool) 5718774826270740619ULL)) ? (((arr_13 [i_0] [i_1] [i_2]) ? (90791727) : (((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_1] [i_2 - 2] [i_6])))) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_2] [i_2]))))));
                        var_23 = ((/* implicit */long long int) arr_9 [i_2 - 2] [i_0]);
                    }
                    arr_25 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_13 [i_2 + 1] [i_2 + 1] [i_2 - 1]);
                    var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)62))) + (4752597957094168071LL)))) ? (((unsigned int) arr_1 [i_2])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4752597957094168066LL)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] [1])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)140)))) || ((!(((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_5))))))));
                                arr_30 [i_8] [i_2] [16U] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(((arr_29 [i_2] [i_2] [i_2 - 1] [3LL] [i_2] [11ULL] [i_2]) / (arr_29 [i_2] [i_2 + 1] [i_2 - 1] [i_2] [13U] [9ULL] [i_2])))));
                                arr_31 [i_2] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1073741824U)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)42))))) <= (arr_7 [i_2] [i_2] [i_2] [i_2 - 3])))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)22)) % (((/* implicit */int) arr_22 [i_8] [i_0] [i_2] [i_7] [i_7]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))) * (var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_8) - (var_1))))))));
}
