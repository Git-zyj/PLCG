/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233739
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_0))), (((/* implicit */unsigned long long int) (-(0))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32748)) / (((/* implicit */int) (unsigned short)496))))))))));
                    var_17 -= (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)8192)) + (((/* implicit */int) arr_1 [i_0 - 1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32750)) != (((/* implicit */int) (short)8192)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (var_4)))) + (36028797018955776ULL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(var_8))))));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << ((((+(((/* implicit */int) arr_1 [i_3])))) - (27113)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_14))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)5)))));
                        var_20 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_6 [i_0 - 1] [i_2] [i_0 - 1]))) >= ((-(((((/* implicit */_Bool) 18410715276690595846ULL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [(unsigned short)6])) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_1 [i_0 - 1])))) >> ((((+(((/* implicit */int) (signed char)-6)))) + (11)))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((-8LL) * (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])))))) && (((var_4) <= (((/* implicit */long long int) -2147483626)))))))) != (((((/* implicit */_Bool) (~(var_12)))) ? (((arr_12 [i_0] [i_1] [i_0] [i_0] [i_4] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)5))))) : ((~(arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))))));
                            var_23 = ((/* implicit */short) arr_1 [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */short) 18446744073709551615ULL);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) / (max((var_12), (((/* implicit */unsigned long long int) 4294967295U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (var_3)))))) : ((-(var_10)))));
                        }
                        for (short i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            var_26 = ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((2097151LL) * (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)2] [i_6 + 2])))));
                            var_27 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6 + 3]))))) | (((unsigned long long int) -1))));
                            var_28 = ((/* implicit */unsigned short) var_8);
                        }
                        var_29 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_7))))) <= ((+(arr_5 [i_0] [i_1] [i_0])))))), (arr_12 [i_0 - 1] [i_1] [i_0] [i_3] [i_2] [i_1])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) (+(((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((signed char) var_8))) : (((((/* implicit */_Bool) (short)25)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-1)))))))));
                    }
                }
            } 
        } 
    } 
    var_32 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_8));
}
