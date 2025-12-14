/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236082
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
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)47372))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_2] [i_0]))));
                    arr_10 [i_0] [i_0] [i_0] [(unsigned char)4] &= ((unsigned char) (-(3829171894U)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_13 &= ((/* implicit */unsigned char) (((((+(var_1))) - (((/* implicit */int) var_9)))) <= ((~(((/* implicit */int) var_6))))));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_4 [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)80)) ? (((((/* implicit */_Bool) (signed char)76)) ? (538181972U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))))) : (538181945U))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 4; i_8 < 10; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned char) arr_9 [i_6] [i_5] [i_7] [i_9 + 1]);
                                arr_29 [i_6] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] &= ((/* implicit */unsigned char) (~(arr_24 [i_7 - 1] [i_7 - 1] [i_7] [i_8 - 1])));
                                var_17 |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                                arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */int) (short)-24596)) + (2147483647))) >> (((538181972U) - (538181960U)))));
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_17 [i_5]) % (((/* implicit */unsigned long long int) arr_5 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_7 + 1] [i_5] [i_9 + 1]))) : (arr_1 [i_9])));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (465795406U))));
                    arr_32 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_6] [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_14 [i_5] [i_6] [i_6] [i_5] [i_5])))) || (((/* implicit */_Bool) arr_22 [i_7] [i_5] [i_5] [i_5]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_10 = 1; i_10 < 9; i_10 += 3) 
        {
            for (unsigned char i_11 = 1; i_11 < 8; i_11 += 2) 
            {
                {
                    var_19 = ((538181972U) << ((((~(((/* implicit */int) arr_34 [i_11] [i_10 + 1] [i_5])))) + (69))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((+(((/* implicit */int) var_4)))) & (arr_13 [(unsigned short)12] [i_11 + 3] [i_11 - 1] [(unsigned short)12]))))));
                                var_22 = ((short) arr_42 [i_13] [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_5]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 3; i_15 < 9; i_15 += 3) 
                        {
                            {
                                arr_52 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((_Bool) (signed char)-78));
                                arr_53 [i_5] [i_10] [i_11 - 1] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_46 [i_5] [i_10] [i_10 - 1] [i_5] [i_11 + 1]))));
                                arr_54 [i_11 + 3] [i_5] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
    {
        var_23 *= ((/* implicit */signed char) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_13 [i_16] [i_16] [i_16] [i_16]))))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(((/* implicit */int) arr_37 [i_16] [i_16])))))));
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (short)-24601)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_27 [i_16] [i_16] [i_16] [i_16])) : (((((/* implicit */int) (short)-2488)) * (((/* implicit */int) var_2)))))) << (((max((var_1), (((/* implicit */int) var_3)))) - (1239369723)))));
        arr_57 [i_16] = ((/* implicit */long long int) arr_46 [i_16] [i_16] [i_16] [i_16] [i_16]);
    }
    var_26 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) var_1)), (((var_10) | (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))))))));
}
