/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227328
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_1] [i_0]))) : (arr_3 [i_2 + 1] [i_1] [i_2])));
                        var_18 = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                arr_16 [i_5] [i_5] [i_4] = ((/* implicit */short) ((arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2 + 1]) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) var_0))));
                                var_19 = ((/* implicit */short) (+((~(((/* implicit */int) (short)63))))));
                                arr_17 [i_0] [i_5] [i_2 + 3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)3584)) || (((/* implicit */_Bool) var_13))))) ^ (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1]))));
                                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_4] [i_4])) : (((/* implicit */int) arr_6 [i_2 + 2] [i_1] [i_4] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_11)))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)));
        var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) + (var_4)))) ? (((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))))) : (((/* implicit */long long int) ((63) % (((/* implicit */int) (signed char)-1)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_7] [i_7] [i_7] [i_7]))))) < (min((var_11), (arr_20 [i_7] [(unsigned short)12]))))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (short i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */short) min((min((((/* implicit */long long int) arr_15 [i_9] [i_9 + 2] [i_9 - 1] [13U] [i_7] [i_9 + 1] [i_9])), ((-(arr_12 [i_9] [i_9] [(unsigned char)3] [i_8] [i_8] [i_8] [i_7]))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (_Bool)0)))))));
                    var_26 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0)))) | (((/* implicit */int) max((var_0), ((short)-32757)))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) % (var_6)))) >= (var_13))))));
                    var_27 = ((/* implicit */unsigned long long int) arr_26 [i_7] [i_7]);
                }
            } 
        } 
        arr_29 [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)15)), (max((max((var_8), (((/* implicit */unsigned long long int) arr_8 [i_7] [i_7] [i_7] [i_7])))), (((/* implicit */unsigned long long int) ((var_14) ? (98304) : (((/* implicit */int) var_2)))))))));
        var_28 -= ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) 2047)) ? (((/* implicit */int) (unsigned short)14336)) : (((/* implicit */int) (short)10)))), ((~(((/* implicit */int) var_14)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 13; i_10 += 3) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    var_29 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) (unsigned short)6144))))) - (arr_3 [i_7] [i_7] [i_7])));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        arr_38 [i_7] [i_7] = ((/* implicit */short) var_1);
                        var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_36 [i_7]) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) (short)2046))))), (arr_18 [i_10 - 1]))))));
                        arr_39 [0U] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65527)) && (((/* implicit */_Bool) arr_7 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])))) || (((((/* implicit */_Bool) arr_7 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1])) && (((/* implicit */_Bool) arr_7 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1]))))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) (~(var_4)));
                        var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)))));
                    }
                    arr_42 [i_7] [10] [i_11 - 1] [i_7] &= ((/* implicit */short) min((arr_13 [i_11 - 1] [i_10 + 2] [i_11 - 1] [i_11 - 1] [i_10 + 2]), (((/* implicit */signed char) ((arr_4 [i_11 - 1]) < (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)7680)))))) ^ (((/* implicit */unsigned long long int) ((min((4LL), (((/* implicit */long long int) (short)32765)))) | (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
}
