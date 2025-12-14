/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30498
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) var_3);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
            {
                arr_9 [i_0] [i_0] [19LL] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((arr_2 [i_0] [i_0]) | (((/* implicit */int) (_Bool)0)))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                arr_12 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                arr_13 [i_0] [(short)16] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 511U)) ? (((/* implicit */long long int) arr_2 [12U] [i_0])) : (var_2)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-2))));
            }
            arr_14 [(unsigned char)11] [i_0] [i_0] = ((/* implicit */unsigned int) 0ULL);
        }
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            arr_17 [(unsigned char)18] [21ULL] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_14), (4138776149U))), (((/* implicit */unsigned int) 1385445660))))) ? (arr_2 [(signed char)22] [(signed char)22]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            var_19 = ((((/* implicit */_Bool) ((long long int) (unsigned short)52007))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_4]))) : (((unsigned int) max((((/* implicit */unsigned int) -887578924)), (4294966785U)))));
            var_20 = ((/* implicit */signed char) var_4);
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294966784U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13529))) : (2933110944236946540LL)));
        }
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))))))) ? ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [(signed char)18] [(unsigned short)17] [i_0] [i_0]))))) <= (arr_11 [i_0] [22U] [i_0])))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [1U] [i_0] [i_0])) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_4))));
        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_8 [2] [23ULL] [2] [i_5]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned char)218)))))))))));
        var_26 = ((((_Bool) (unsigned short)13529)) ? (((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_3))))) ? (((arr_10 [i_5] [7U] [14U]) % (((/* implicit */unsigned long long int) arr_21 [(short)11] [i_5])))) : (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) var_8))))))) : (((/* implicit */unsigned long long int) -887578924)));
        arr_22 [(signed char)2] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_2 [i_5] [i_5])) : ((+(var_16))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [12ULL] [(signed char)3])))) ? (887578924) : (((/* implicit */int) ((4294966784U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)84)))))))))));
        arr_23 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_5] [i_5]))))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 1610612736U))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_18 [i_6] [9U])) : (((/* implicit */int) arr_1 [(short)8])))) & (arr_2 [i_6] [i_6])))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (var_14))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6] [i_6]))) : ((~(arr_8 [i_6] [i_6] [i_6] [i_6]))))))))));
        var_28 *= 1294706217592892343ULL;
    }
    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 2) 
    {
        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7 - 1]))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_7 - 3] [i_7 + 2])) ? (2147483647) : (((/* implicit */int) (signed char)23))))) ? (arr_25 [i_7 + 1] [i_7]) : (4294966776U)))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (int i_9 = 3; i_9 < 14; i_9 += 2) 
            {
                {
                    arr_32 [i_7] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)29)) % (((/* implicit */int) (signed char)71))))) ? (((((/* implicit */_Bool) arr_4 [i_9 + 2] [i_9 + 2] [i_9 + 2])) ? (887578923) : (((((/* implicit */_Bool) (short)16376)) ? (((/* implicit */int) arr_3 [0U] [19])) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8] [i_8])))))) ? (((((/* implicit */_Bool) (short)-24220)) ? (887578924) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_15 [i_9] [i_7 - 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_37 [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_10] [i_8])) ? (((((/* implicit */_Bool) ((unsigned short) var_2))) ? (4294966785U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9 + 3] [15U] [i_9 + 3]))))) : ((~(arr_11 [i_9 + 2] [(unsigned short)0] [(unsigned short)0])))));
                        arr_38 [9ULL] [i_9] [(short)12] [9ULL] = ((/* implicit */unsigned int) arr_31 [(short)11] [(short)11] [i_9] [i_10]);
                    }
                }
            } 
        } 
    }
    var_31 = ((/* implicit */int) ((short) (+(((var_4) + (((/* implicit */unsigned int) var_0)))))));
}
