/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196057
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            arr_5 [6U] [12ULL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)5503)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7260)))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) var_8)) ? (arr_3 [i_1 - 1]) : (((/* implicit */unsigned int) var_1))))));
            var_13 = ((/* implicit */int) max((var_13), ((~((-(((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */long long int) -1458444188)))))))))));
        }
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((((/* implicit */_Bool) ((int) (signed char)-64))) ? (((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) arr_3 [i_0])) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (short)15225))))))))));
        var_15 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_0 [i_0] [i_0])))))))), (arr_1 [i_0])));
    }
    var_16 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_1)) : (var_8)))) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) < (var_10))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))));
        var_18 = ((/* implicit */short) ((((/* implicit */int) var_5)) == (var_0)));
        var_19 = ((/* implicit */signed char) arr_8 [i_2] [(short)15]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_27 [i_3] [i_4] [i_3] [i_3] [6LL] [8U] [9ULL] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_21 [2] [i_4] [i_4] [i_4])) ? (18446744073709551615ULL) : (var_4))) == (arr_11 [i_4]))) ? (((((/* implicit */_Bool) arr_13 [5ULL] [i_5])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [i_3] [4ULL] [i_3] [i_3])))));
                            arr_28 [i_3] = ((/* implicit */int) arr_25 [i_3] [i_5] [i_6] [i_7]);
                            var_20 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_4]))) < (var_9)))) == (((/* implicit */int) ((((/* implicit */int) (short)-21689)) < (arr_9 [i_3])))))) ? (((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */long long int) arr_18 [i_3])) : (var_8))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)19774)))))));
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551615ULL) : (16515072ULL)))) ? (((/* implicit */int) (short)18736)) : (((/* implicit */int) ((((/* implicit */int) (short)-16383)) == (((/* implicit */int) (signed char)-67)))))));
                            var_22 = ((/* implicit */long long int) var_9);
                            arr_31 [i_3] [i_4] [i_4] [i_3] [i_3] [i_6] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 3059858872U)) ? (((/* implicit */unsigned long long int) 1287408822U)) : (18446744073709551593ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)16382))))));
                            var_23 = ((/* implicit */signed char) var_1);
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 4; i_9 < 9; i_9 += 2) /* same iter space */
                        {
                            arr_34 [i_3] [i_3] [i_5] [i_6] [i_9] = ((/* implicit */unsigned long long int) arr_4 [(short)9] [i_6]);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((arr_26 [i_9 + 3] [i_9 + 1] [i_9]) == (((/* implicit */int) arr_14 [i_9])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 4; i_10 < 9; i_10 += 2) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)49109)) : (1697263655)));
                            arr_38 [i_3] [i_4] [i_3] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_17 [i_6] [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_6]))) : (((unsigned long long int) var_10))));
                        }
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_4] [i_6])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)92))))) ? (((((/* implicit */_Bool) arr_30 [i_4] [i_5] [i_4] [i_4] [i_4] [i_3])) ? (arr_12 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [10ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))) : (((/* implicit */unsigned long long int) (+(var_8))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_3 [i_3]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (signed char i_12 = 4; i_12 < 11; i_12 += 1) 
            {
                {
                    arr_46 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)16] [i_12]))) < (var_3))))) == ((+(arr_30 [i_12] [i_12] [i_11] [i_11] [i_11] [i_3]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_13] [i_11] [i_13] [i_13])) ? (-4880615391329022378LL) : (((/* implicit */long long int) arr_9 [i_3])))) - (((/* implicit */long long int) ((var_1) + (((/* implicit */int) var_12)))))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_11] [i_11] [i_13]))) == (arr_40 [i_3] [i_11]))) ? (((((/* implicit */_Bool) (short)27461)) ? (arr_45 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_35 [i_3] [i_11] [i_12 + 1] [i_13] [i_13])))) : (((/* implicit */unsigned long long int) min((-6236346858739641999LL), (((/* implicit */long long int) arr_19 [i_3] [i_11] [i_12]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11] [i_11] [i_11])))))));
                        arr_49 [i_3] [i_3] [i_3] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49109)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_43 [i_12])) < (((/* implicit */int) (short)-15225))))) == (((/* implicit */int) ((9223372036854775792ULL) == (((/* implicit */unsigned long long int) 8388607)))))))) : (((/* implicit */int) var_5))));
                    }
                    arr_50 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12] [i_12] [i_12 - 1] [i_12 - 2])) ? (arr_37 [i_12 - 2] [i_12] [11U] [i_12 - 3] [i_12 - 2]) : (((/* implicit */long long int) arr_30 [i_12] [i_12] [i_12] [i_12] [i_12 - 1] [i_12 - 2])))));
                }
            } 
        } 
    }
}
