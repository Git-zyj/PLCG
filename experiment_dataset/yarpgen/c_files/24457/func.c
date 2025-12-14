/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24457
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max(((-2147483647 - 1)), (((/* implicit */int) (signed char)126)))), (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) (-2147483647 - 1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)-123)))))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned char)9] [i_1] [(unsigned short)18] |= ((/* implicit */signed char) ((((/* implicit */int) max((var_4), (((/* implicit */signed char) (_Bool)1))))) | ((((_Bool)0) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) var_6))))));
                    var_11 = ((/* implicit */unsigned long long int) ((2617273805U) & (min((max((((/* implicit */unsigned int) (short)18465)), (var_0))), (((/* implicit */unsigned int) (_Bool)1))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        arr_11 [i_0] [11] [11] [11] = ((/* implicit */short) var_6);
                        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (var_0)))) ? (((/* implicit */int) min((var_4), (((/* implicit */signed char) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)55609)) ? (((/* implicit */int) (short)7007)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7007))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 4) 
                        {
                            arr_18 [(unsigned short)0] [i_2] [i_2] [i_2 + 2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-97)) ? (var_1) : (((/* implicit */int) (short)-32626))));
                            var_13 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))));
                            arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)));
                            arr_20 [i_2] |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)8232)) : (((/* implicit */int) (short)-21682))));
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_4] |= ((/* implicit */signed char) (short)32626);
                        var_14 ^= ((/* implicit */int) 3ULL);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 2; i_6 < 24; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= ((((_Bool)1) ? (var_1) : (var_1)))));
                            arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1750811290) : (((/* implicit */int) (unsigned short)55237))))) ? (((/* implicit */int) (short)6994)) : (((/* implicit */int) (_Bool)1))));
                            arr_25 [i_6] [i_6] = ((/* implicit */unsigned long long int) 192182722U);
                            var_16 -= ((/* implicit */unsigned int) ((var_1) < (((/* implicit */int) (unsigned short)0))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 24; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */short) (signed char)-63);
                        arr_28 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (short)8489)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (short)-4096)));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 1; i_8 < 24; i_8 += 3) /* same iter space */
                        {
                            var_18 ^= ((((/* implicit */_Bool) 9)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-2444)));
                            var_19 *= ((/* implicit */unsigned short) (signed char)80);
                        }
                        for (long long int i_9 = 1; i_9 < 24; i_9 += 3) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [11LL] [i_7] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8270806162175220980ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26741)))))) ? (3565996970894842240LL) : (var_5)));
                            var_20 = ((/* implicit */unsigned long long int) (unsigned short)8067);
                        }
                    }
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((3978958605U), (min((var_8), (((/* implicit */unsigned int) (short)2444))))))) ? (min((311179533), (((/* implicit */int) (unsigned char)53)))) : (((/* implicit */int) (short)-2444))));
                    arr_34 [i_0] [(signed char)18] [(_Bool)1] [(short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) : (2298003327353135345LL)))) ? (max((6114285948588542176ULL), (((/* implicit */unsigned long long int) (unsigned short)65534)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (3565996970894842247LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
}
