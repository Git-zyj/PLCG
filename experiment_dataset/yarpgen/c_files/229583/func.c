/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229583
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((var_0) - (((/* implicit */unsigned long long int) var_12))))))) ? ((~((~(-2024732941))))) : (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) ((arr_6 [i_1] [i_1 + 1] [i_0] [i_1]) | (((/* implicit */int) var_2))));
                arr_8 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) var_15)) ? (var_9) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2])))));
            }
            for (unsigned int i_3 = 3; i_3 < 17; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 17; i_4 += 4) 
                {
                    for (int i_5 = 4; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)99)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5 - 4] [i_1 + 1])))));
                            arr_16 [i_5] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_11 [i_0] [i_1] [i_0] [i_4] [i_5])))) ? ((-(((/* implicit */int) arr_5 [i_1] [i_3] [i_1])))) : (((/* implicit */int) var_15))));
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_21 [i_0] [i_1] [i_6] |= ((((arr_13 [i_0] [i_0] [i_0] [i_1 + 2] [i_3 - 2]) + (9223372036854775807LL))) >> (((arr_13 [i_1] [i_1] [i_6] [i_1 - 1] [i_3 - 1]) + (4300947507475781514LL))));
                    arr_22 [i_0] [i_1] [i_3] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_3 + 1] [i_3]))) + (var_0)));
                    arr_23 [i_1] [i_1] [i_0] [i_6] [i_6] [i_3] = ((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1]);
                }
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) (~((-(((/* implicit */int) var_13))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((unsigned long long int) var_3)))))));
                }
                for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    arr_31 [i_1] = ((/* implicit */signed char) arr_25 [i_1] [i_1]);
                    var_21 = ((/* implicit */int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        var_22 &= ((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0] [i_8]);
                        arr_36 [i_0] [i_1] [i_3] [i_8] [i_9] [i_1] = ((/* implicit */_Bool) var_12);
                        arr_37 [i_9] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_8 - 2] [i_8 - 2] [i_3 + 1])) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))));
                    }
                    arr_38 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12576)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_3] [i_8])) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_20 [i_1] [i_1] [i_1] [i_8])));
                }
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_41 [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
                arr_42 [i_10] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)157))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1842721633))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_10] [i_10])))))));
                var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)166)) ? ((+(((/* implicit */int) (short)-12576)))) : (((/* implicit */int) (_Bool)1))));
                arr_43 [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) var_15);
            }
            var_24 = ((/* implicit */unsigned long long int) ((_Bool) (short)-12576));
            var_25 = ((/* implicit */unsigned short) ((var_10) / (arr_7 [i_1 - 1] [i_1])));
        }
        arr_44 [i_0] [i_0] = min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_13)) % (((/* implicit */int) var_13))))))), (((unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0])));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_4)))))))) : (max((var_6), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        for (unsigned int i_12 = 4; i_12 < 7; i_12 += 3) 
        {
            {
                arr_49 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (~(max((((((/* implicit */int) (short)-12576)) + (((/* implicit */int) var_11)))), (((((/* implicit */int) var_15)) + (((/* implicit */int) var_4))))))));
                arr_50 [i_11] [i_12] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_14))))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_39 [i_12] [i_12]))));
                            arr_57 [i_11] [i_12] [i_12] [i_13] [i_11] [i_14] &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_0))))));
                            arr_58 [i_11] [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_40 [i_12 + 1] [i_13] [i_12 + 1])) == ((+(((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
                var_28 ^= (+(max((((/* implicit */unsigned long long int) arr_14 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])), (min((((/* implicit */unsigned long long int) 1173587446U)), (arr_17 [i_12] [i_12] [i_12] [i_11]))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-8211)))))))));
}
