/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49101
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_14 ^= ((/* implicit */_Bool) var_5);
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 2060115922805564273LL)) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (18446744073709551615ULL)))));
        }
        var_16 = var_13;
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        var_17 = ((unsigned long long int) arr_7 [i_2] [i_2]);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        arr_15 [i_2] = ((/* implicit */unsigned short) 0ULL);
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_8);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) ^ (18446744073709551608ULL))));
    }
    /* LoopSeq 3 */
    for (long long int i_6 = 2; i_6 < 9; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    arr_25 [i_6] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) var_8);
                    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17664343594503512379ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (min((((/* implicit */long long int) arr_18 [i_7])), (var_6)))))) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_17 [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187)))))) && (((/* implicit */_Bool) var_4)))))))));
                    arr_26 [i_8] [i_8] = ((/* implicit */signed char) ((((arr_12 [i_6 - 1] [i_7] [i_7] [i_8]) > (((/* implicit */int) (signed char)-46)))) && (((18446744073709551600ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_6 + 3] [i_6 - 1] [i_6 + 1])) ? (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) & (arr_12 [i_6] [i_6] [i_6] [i_6])))), (-2085118290872281962LL))) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1856359917790651196LL))) % (((/* implicit */long long int) 1855242134))))));
        var_21 = ((/* implicit */short) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) (~(var_9)));
        var_23 ^= ((/* implicit */unsigned long long int) ((var_4) <= (((/* implicit */long long int) arr_28 [i_9]))));
    }
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0LL)), (arr_24 [i_10] [i_10] [i_10])))) ? (arr_24 [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551587ULL) * (((/* implicit */unsigned long long int) 1099511627775LL))))) ? (min((0ULL), (17ULL))) : (9650689360298731860ULL)))) || (((/* implicit */_Bool) ((unsigned char) ((short) 18446744073709551608ULL))))));
    }
    /* LoopNest 3 */
    for (int i_11 = 3; i_11 < 20; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            for (unsigned char i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */int) (short)-12442)) + (((/* implicit */int) var_2))))))) | (-7675969538226041649LL)));
                        arr_42 [i_11] [i_12] [i_13] [i_13] [i_13] [i_11] = ((/* implicit */int) arr_33 [i_11] [i_11]);
                    }
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)89))));
                        var_28 ^= ((/* implicit */unsigned int) var_10);
                    }
                    var_29 ^= ((/* implicit */long long int) ((int) ((((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned long long int) var_6)) : (5535566563660265463ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)152)), ((unsigned short)20764))))))));
                    arr_46 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (~(5253710716745593693LL)))) ? (((((/* implicit */_Bool) arr_41 [i_13 + 2] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)13318)) || (((/* implicit */_Bool) var_7))))))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 19; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10629013316840684232ULL)) ? (arr_29 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))))))));
                                arr_52 [i_11] [i_17] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_18 = 0; i_18 < 16; i_18 += 2) 
    {
        var_31 ^= ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */int) (unsigned char)74)) / (((/* implicit */int) (short)-12442))))), (((/* implicit */long long int) var_5))));
        var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((9223372036854775800LL) == (((/* implicit */long long int) var_9))))), (((((/* implicit */_Bool) ((unsigned int) 14714117588595647251ULL))) ? (((unsigned long long int) 9223372036854775800LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_53 [i_18]))))))))));
        var_33 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)201));
    }
    for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
    {
        var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_5))) != (((/* implicit */int) ((3579502334U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)114)) > (((/* implicit */int) (_Bool)1)))))))))));
        arr_57 [i_19] [i_19] = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) (short)12442)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_56 [11LL])))) / (((/* implicit */int) (short)-12443))))));
        arr_58 [i_19] [i_19] = ((/* implicit */unsigned char) (signed char)127);
    }
}
