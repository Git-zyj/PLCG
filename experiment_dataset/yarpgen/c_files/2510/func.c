/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2510
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 |= ((/* implicit */short) var_15);
        arr_2 [i_0] |= ((/* implicit */unsigned char) (-((-(var_4)))));
        var_20 *= ((/* implicit */unsigned short) (+(max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_2] |= ((/* implicit */long long int) arr_7 [i_2]);
            var_21 *= ((/* implicit */unsigned char) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)32742))))) >> (((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_14)))) + (143)))))));
        }
        /* vectorizable */
        for (short i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_3 [i_3]) : (arr_3 [i_3]))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned long long int) arr_19 [i_3 + 4] [i_4 + 1] [i_3 + 4] [i_4])))));
                    }
                } 
            } 
            arr_21 [i_1] [i_3 + 3] [i_3] = ((/* implicit */long long int) arr_9 [i_1]);
        }
        var_25 |= ((/* implicit */short) (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [10]))) : (arr_12 [i_1] [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            var_26 = ((/* implicit */short) (~(min((((/* implicit */long long int) var_16)), (arr_12 [i_1] [i_1] [i_6])))));
            var_27 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)14556)) >= (((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1] [i_6] [(_Bool)1]))))) % ((-(((/* implicit */int) var_13)))))))));
        }
        var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) | (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [(unsigned short)6]))))))) ? (min((((unsigned int) 104402049U)), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])) == (((/* implicit */int) var_6))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [2U] [i_7])) ? (arr_22 [(unsigned short)6] [i_7]) : (arr_22 [6ULL] [i_7]))) - (max((arr_22 [10LL] [i_7]), (arr_22 [(short)10] [i_7])))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((_Bool) (short)(-32767 - 1))))));
                    var_31 *= ((/* implicit */short) (unsigned char)126);
                    arr_33 [i_7] [i_9] = ((/* implicit */_Bool) var_18);
                    arr_34 [i_7] = ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_9] [i_8])) ? (((/* implicit */int) (unsigned char)112)) : (var_5))) == (((/* implicit */int) arr_19 [i_7] [i_8] [i_8] [i_9]))))), ((-(((/* implicit */int) arr_0 [i_7]))))));
                    var_32 ^= ((/* implicit */short) ((_Bool) ((arr_7 [i_9]) / (arr_7 [i_9]))));
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) arr_1 [i_7]);
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_34 |= ((/* implicit */unsigned long long int) (short)1);
            arr_39 [i_7] [i_7] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_7] [i_7] [i_10]))))) ? (((var_6) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)130))))))) == (((((((/* implicit */_Bool) (unsigned short)3)) ? (18446744073709551615ULL) : (arr_32 [i_7] [i_7] [i_10]))) / (((/* implicit */unsigned long long int) var_4))))));
            var_35 |= ((/* implicit */unsigned long long int) (-(((unsigned int) var_17))));
            var_36 |= max((arr_16 [i_7] [i_7] [i_10]), (((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_25 [i_7])))))));
            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) var_0))));
        }
    }
    var_38 = ((/* implicit */short) var_18);
    var_39 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (long long int i_11 = 2; i_11 < 6; i_11 += 1) 
    {
        var_40 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_36 [i_11])))) ? (((/* implicit */int) arr_6 [i_11 + 3] [i_11] [i_11 + 3])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_13)))))) - (((/* implicit */int) arr_23 [i_11 - 1]))));
        var_41 = ((/* implicit */signed char) (-((~(var_2)))));
        arr_42 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) var_16)) : (((arr_32 [i_11] [i_11 + 2] [i_11 + 3]) % (((/* implicit */unsigned long long int) 1071644672))))))) ? ((+(((unsigned long long int) (unsigned char)64)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
}
