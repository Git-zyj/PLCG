/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204004
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
    var_19 = ((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned int) 828921814))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 = arr_0 [14];
        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1786386133)), (max((4294967295U), (((/* implicit */unsigned int) arr_2 [(signed char)9]))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (signed char)41))))), (((((/* implicit */_Bool) -2490857587772028111LL)) ? (var_3) : (17308530832561125850ULL)))))));
        var_22 += ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8582))))), (((var_14) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_7))))) << (((((/* implicit */int) ((short) (unsigned char)74))) - (52)))));
        var_23 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), (-1779542446)))))) && (((/* implicit */_Bool) ((8274221514612392287ULL) / (((/* implicit */unsigned long long int) (-(arr_2 [i_0])))))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [(signed char)2] [6LL] [4LL] |= ((/* implicit */long long int) ((var_3) << (((/* implicit */int) (!(((((/* implicit */long long int) arr_0 [i_0])) < (arr_8 [i_0] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775806LL)) && (((/* implicit */_Bool) -1779542462))))) << (((((((/* implicit */_Bool) -8368192577074047591LL)) ? (var_4) : (((/* implicit */int) (unsigned short)65522)))) - (745754420)))))) : ((-(max((2824537683U), (((/* implicit */unsigned int) (unsigned short)28)))))))))));
                                arr_17 [i_0] [10ULL] [i_2] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */unsigned long long int) var_1);
                                arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(8957610608691604319ULL)))) ? (((((/* implicit */_Bool) -1779542446)) ? (arr_6 [(signed char)10] [i_1]) : (arr_6 [i_0] [i_1]))) : (((/* implicit */long long int) ((arr_7 [i_0] [i_0] [i_1 - 1]) * (arr_7 [i_0] [i_1] [i_1 - 1]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_0] [13] [i_2])))) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) 1697389399902248637LL)) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 1] [i_0])) : (1138213241148425775ULL)))))) ? (((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [(unsigned short)1] [i_1] [i_0])) ? (14872740244571581781ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) arr_8 [i_2] [(short)12] [i_0])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */unsigned short) arr_22 [i_5]);
        arr_25 [(unsigned char)5] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) var_10)) : (arr_21 [i_5]))), (((((((/* implicit */int) var_0)) + (2147483647))) << (((/* implicit */int) arr_20 [i_5]))))));
    }
    var_25 = ((/* implicit */int) var_17);
}
