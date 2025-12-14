/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40985
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_18 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_17))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_7))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) var_14)) & (var_15)))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned long long int) -4905999116065721542LL)) : (2191272383279781775ULL)))))) ? (((/* implicit */int) max((((var_7) >= (((/* implicit */int) var_0)))), (((var_15) != (((/* implicit */unsigned int) var_11))))))) : (((/* implicit */int) ((((((/* implicit */long long int) var_7)) + (var_6))) != (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
                    }
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        var_22 ^= ((/* implicit */signed char) var_1);
                        var_23 -= ((/* implicit */long long int) max((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-1)), (min((var_15), (((/* implicit */unsigned int) (unsigned char)7)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) 
                        {
                            var_24 -= (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned short)25862)))));
                            var_25 -= ((/* implicit */unsigned long long int) var_6);
                            var_26 |= ((/* implicit */int) ((min((var_4), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-102)), ((unsigned char)11)))))) + (((/* implicit */long long int) ((-1441484087) % (((/* implicit */int) (short)1)))))));
                        }
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_17))))) ? (max((-1294976022), (((/* implicit */int) (signed char)-102)))) : (((/* implicit */int) min((((/* implicit */short) var_10)), (var_16)))))) != (((/* implicit */int) ((max((((/* implicit */unsigned int) var_16)), (1256787281U))) != (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)23), (((/* implicit */unsigned char) (_Bool)0))))))))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_28 -= ((/* implicit */short) min((min((((/* implicit */int) max((((/* implicit */short) var_12)), (var_16)))), (((((/* implicit */int) var_13)) % (((/* implicit */int) var_10)))))), ((-((+(((/* implicit */int) var_8))))))));
                        var_29 += ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned short)26717))))), (((short) var_3)))));
                        arr_18 [i_0] [i_0] [i_1 + 1] [i_1] [i_0] [i_6] &= ((/* implicit */unsigned long long int) min((min((0U), (((/* implicit */unsigned int) -673143157)))), (3038180003U)));
                        var_30 &= ((/* implicit */short) (-(434258546U)));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        var_31 ^= max((((((unsigned long long int) var_3)) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)29795))))), (var_15)))));
                        var_32 += min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 244912587)) / (var_4))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_15))))))), (((((/* implicit */_Bool) var_7)) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))));
                        var_33 *= ((/* implicit */signed char) max(((~(((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41705))))))), (2513308661U)));
                        var_34 &= ((/* implicit */signed char) var_0);
                    }
                    arr_22 [i_0] [i_1 - 1] [i_2] &= ((/* implicit */long long int) ((unsigned short) ((signed char) (signed char)37)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        var_35 ^= ((/* implicit */long long int) var_7);
        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2114677668)) ? (((/* implicit */unsigned long long int) -4905999116065721542LL)) : (18446744073709551607ULL))))));
        var_37 |= ((/* implicit */short) 98826984);
        arr_26 [i_8] [i_8] |= ((/* implicit */unsigned char) ((unsigned long long int) var_10));
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))))))));
    }
    for (int i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 4; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_39 &= (~(((/* implicit */int) ((min((((/* implicit */long long int) (_Bool)0)), (var_6))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)102)))))));
                                var_40 ^= ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */long long int) 11050582621632650400ULL);
                }
            } 
        } 
        var_42 *= ((/* implicit */signed char) ((short) min((((/* implicit */unsigned int) var_8)), (var_15))));
        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 9ULL)))) : (max((((/* implicit */unsigned long long int) var_4)), (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (var_4)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))))));
    }
}
