/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44280
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
    var_17 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) -5354525051726196698LL)) : (18446744073709551615ULL)))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */long long int) ((unsigned int) min((arr_0 [i_0 + 1]), (((/* implicit */long long int) arr_1 [i_0]))))))));
        var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) <= (min((var_0), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))), (((((/* implicit */_Bool) 1274880569)) ? (((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) var_12)))))) : (((((/* implicit */int) (unsigned short)23322)) << (((arr_1 [i_0]) - (3564869178U)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                        {
                            var_20 &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_0))))));
                            var_21 |= ((/* implicit */unsigned int) 4418030098237655553LL);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_2 - 1] [i_2] [21] [i_0])) ? (((/* implicit */int) arr_9 [i_3 + 3] [i_2 - 1] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_3] [i_2 - 1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_2] [i_1] [i_1])) : (((/* implicit */int) min((arr_9 [i_3] [i_2 - 1] [i_2] [11LL] [i_0 + 1]), (arr_9 [i_4] [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2]))))));
                            var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) (signed char)-94))))) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) 132120576)))))), (((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) var_1)), (-9223372036854775790LL)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_0] [i_0] [i_3]);
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37872))))) && (((/* implicit */_Bool) arr_1 [7LL]))));
                        }
                        var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(short)22])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [23] [i_3] [20ULL])) : (((/* implicit */int) (unsigned short)3225))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */_Bool) (signed char)-94)) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_0] [i_0] [i_0 - 1] [i_1] [i_2 - 1] [i_3 + 2]))) <= (5354525051726196697LL))) ? (arr_6 [i_3] [i_2] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37883))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((var_4), (((/* implicit */long long int) -1827886690)))) > (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [6LL] [i_2] [i_1] [i_3 - 1]))) + (arr_6 [i_2] [i_1] [i_0 - 1])))))))))));
                        var_28 = ((/* implicit */_Bool) var_13);
                    }
                    for (long long int i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        var_29 = min((max((((/* implicit */unsigned long long int) ((unsigned short) arr_16 [i_0 + 1] [i_0] [i_0] [i_2 - 2] [i_6]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) : (arr_7 [i_0] [i_6 + 1]))))), (((/* implicit */unsigned long long int) (~(max((-1827886690), (((/* implicit */int) (unsigned short)27663))))))));
                        var_30 += ((/* implicit */short) 9129349122433408428LL);
                    }
                    var_31 = ((/* implicit */long long int) ((((min((arr_13 [i_0] [(unsigned short)4]), (((/* implicit */unsigned long long int) arr_1 [i_1])))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)21837))) : (arr_15 [i_0] [i_0 - 1])))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0] [23])), (var_3)))) : (((/* implicit */int) arr_12 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_16))));
                                arr_24 [i_8] [i_1] [i_1] [i_7] [i_8] [14ULL] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))))) > (min((170522005172661082ULL), (((/* implicit */unsigned long long int) 664011060))))))), ((unsigned short)52190)));
                                var_33 = ((/* implicit */unsigned int) ((unsigned long long int) ((min((arr_15 [i_0] [22U]), (((/* implicit */long long int) var_8)))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 ^= ((/* implicit */long long int) ((max((arr_19 [i_0] [i_0 - 1] [i_0] [i_0]), (arr_19 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))) % (max((arr_19 [i_0] [i_0 - 1] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) var_15))))));
        var_35 = ((/* implicit */unsigned short) ((long long int) max((min((((/* implicit */long long int) arr_20 [i_0] [i_0] [9ULL] [i_0] [i_0 - 1])), (arr_2 [i_0]))), (((/* implicit */long long int) ((unsigned short) (unsigned char)6))))));
    }
    var_36 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) var_4))), (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-9064024536360971862LL) != ((~(4304612066203769597LL))))))) : (max(((+(var_15))), (((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42214))) : (var_4))))));
    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-20321)))))) ? ((+(max((var_15), (((/* implicit */long long int) var_14)))))) : (((/* implicit */long long int) var_9))));
}
