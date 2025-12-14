/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196994
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
    var_11 = ((/* implicit */unsigned short) min(((+(var_0))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1 - 2])))) ? (((((/* implicit */_Bool) (short)-18169)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)8199)))) : (((((/* implicit */_Bool) 17605829256390830850ULL)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned char)179)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) var_1);
                                arr_17 [i_0] [i_2] [i_0] = ((/* implicit */long long int) 917146075U);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)123))))) & (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18170)) ? (arr_2 [i_0] [i_2]) : (917146075U)))) + (3861880243142847355ULL)))));
                    arr_19 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6924)) ? (var_10) : (max((((/* implicit */long long int) 845472600U)), (((-9223372036854775786LL) + (((/* implicit */long long int) 3449494702U))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_14 ^= ((/* implicit */short) var_6);
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) (unsigned short)27745)), (var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58609))))) << (((((((long long int) arr_11 [i_5] [i_1] [i_1] [(unsigned char)8])) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_2] [i_2] [i_1 - 2] [i_0]))))) - (331789331LL))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_16 = ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7U))))) : (((/* implicit */int) (short)24661)));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2374781641U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1] [i_2])))))) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) arr_12 [i_1 + 1] [i_1] [i_2]))))));
                        arr_25 [i_0] [i_1 - 2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(((arr_12 [i_1] [i_1] [i_1 + 1]) * (arr_10 [i_1] [i_0] [i_1 + 1])))));
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                    {
                        var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [8ULL] [i_0])))))) ? (min((((/* implicit */unsigned int) (signed char)104)), (2374781641U))) : (((((/* implicit */_Bool) 7385852738001561671LL)) ? (3449494687U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (arr_2 [i_7] [i_1])))) ? ((+(8589803520ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)128)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) var_3)) : (0ULL)))) ? (((/* implicit */unsigned long long int) (~(9223372036854775807LL)))) : (((11549851001647766062ULL) ^ (((/* implicit */unsigned long long int) var_1)))))));
                        arr_29 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */signed char) -9223372036854775790LL);
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) min((min((4294967293U), (((/* implicit */unsigned int) (short)(-32767 - 1))))), (((/* implicit */unsigned int) var_8))))) : ((-(((((/* implicit */_Bool) (signed char)-58)) ? (-9223372036854775786LL) : (((/* implicit */long long int) 845472593U))))))));
                        arr_34 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3449494702U)) ? (arr_8 [i_8] [i_2] [i_1] [i_0]) : (min((4606180822108197336ULL), (((/* implicit */unsigned long long int) var_3)))))) << ((((-(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (_Bool)1))))))) + (15)))));
                        arr_35 [i_1 - 1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_1 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)32744))) / (9223372036854775786LL))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)23389))))) : ((((!(((/* implicit */_Bool) 4139486177U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 15372376600497997726ULL)))))) : (4865500700000179412LL)))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (signed char)-77);
    var_21 -= ((/* implicit */unsigned char) 0U);
    var_22 = ((/* implicit */unsigned char) ((long long int) (signed char)69));
}
