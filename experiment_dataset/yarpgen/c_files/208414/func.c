/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208414
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
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_1 [i_0]))));
        var_14 = ((/* implicit */signed char) ((unsigned long long int) (short)-1));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                var_15 |= arr_12 [i_1] [i_1] [(signed char)10] [i_1];
                                arr_17 [i_1] [i_1] [i_1] [i_1] [(short)18] [i_5] [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */int) var_10);
                            }
                            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                            {
                                var_16 = ((/* implicit */_Bool) (-(min((var_9), (((/* implicit */unsigned int) var_10))))));
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = max(((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))) : (var_9))))), (((/* implicit */unsigned int) var_3)));
                                arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 6337329855219167392ULL))) ? ((-(((/* implicit */int) (unsigned short)27635)))) : (((((/* implicit */int) arr_19 [i_6])) / (((/* implicit */int) arr_19 [i_1]))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                            {
                                var_17 = ((/* implicit */long long int) min((374357049), (((/* implicit */int) (unsigned short)37902))));
                                arr_26 [i_1] [i_1] [22U] [i_1] [i_4] [i_1] &= ((/* implicit */unsigned long long int) arr_13 [i_4] [i_2] [i_2] [(signed char)16]);
                            }
                            arr_27 [i_2] = ((/* implicit */unsigned long long int) (+(max((var_9), (((/* implicit */unsigned int) min((374357049), (((/* implicit */int) (unsigned short)27635)))))))));
                            /* LoopSeq 3 */
                            for (signed char i_8 = 3; i_8 < 21; i_8 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_29 [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 1] [i_8 + 4]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((signed char) 2060977893))) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned short)27361))))));
                                arr_30 [i_1] [i_2] [i_1] [i_8] [18U] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 12109414218490384223ULL)) || (((/* implicit */_Bool) arr_24 [(short)24] [i_8 + 3] [i_8] [i_8] [i_8 + 3])))));
                            }
                            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_7))))) <= (var_2)))) << (((max((((/* implicit */long long int) arr_16 [i_1] [i_1] [i_3] [i_1] [i_4] [i_4] [i_9])), (min((-3505199142846181309LL), (((/* implicit */long long int) (unsigned short)1851)))))) - (1911140426LL)))));
                                arr_33 [i_1] [i_1] [i_1] [i_4] [i_1] [23LL] [i_1] = ((/* implicit */short) arr_29 [(short)2] [(short)2] [(short)2] [(short)2] [i_9]);
                                arr_34 [i_1] = max((((((/* implicit */_Bool) (signed char)63)) ? (3830545543U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1])));
                                var_20 = ((/* implicit */long long int) (signed char)-125);
                            }
                            for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                            {
                                var_21 += ((/* implicit */unsigned long long int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1]);
                                arr_39 [(signed char)2] [i_2] [i_2] [(short)4] [20LL] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_38 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] [i_10])))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_4))));
                            }
                            var_23 *= ((/* implicit */short) arr_8 [i_2] [i_2]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)18118)) ? (((/* implicit */int) var_5)) : (min((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (2147483647))), (((/* implicit */int) var_5))))));
                arr_40 [i_2] = (~(1006632960));
                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(583217610))))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)21366)) ? (max(((+(((/* implicit */int) var_10)))), (arr_31 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((int) ((((/* implicit */_Bool) 8796093022207ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_5))));
}
