/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247342
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
    var_14 = ((/* implicit */unsigned short) (~(2214164799U)));
    var_15 += ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1195572403577835654ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)61))))), (var_1)))));
    var_16 -= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) var_5);
                        var_18 = ((/* implicit */int) arr_9 [i_3 + 1] [17LL] [17ULL] [i_0] [(unsigned short)14] [i_0]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 4) 
                        {
                            var_19 |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_4] [i_5])) ? (var_8) : (((/* implicit */int) var_13)))));
                            arr_14 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 444610104U)) ? (((/* implicit */int) ((unsigned short) -6536988604075720533LL))) : (((/* implicit */int) ((unsigned short) (unsigned short)53348)))));
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)16384)) && (((/* implicit */_Bool) arr_8 [i_1 - 1]))));
                        }
                        var_21 ^= ((/* implicit */int) var_10);
                        var_22 = ((/* implicit */unsigned int) ((short) var_13));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) 3850357191U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1918203974U)))));
                        var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)23))))) << (((3850357191U) / (2006250780U))));
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_1 - 2] [(signed char)17] [i_6] = ((/* implicit */unsigned long long int) 3850357191U);
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) ((unsigned long long int) arr_10 [i_6] [i_6] [(signed char)6] [(_Bool)1] [19ULL] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) 1755999459U))));
                    }
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                    arr_23 [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_1]);
                    var_28 += ((/* implicit */signed char) arr_12 [i_1] [i_1] [16U] [i_1] [7U] [i_1] [i_1 - 1]);
                }
                for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [(short)4] [(unsigned short)5] [i_8] [(signed char)7]))))) - (3850357187U)));
                    var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 444610084U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2046))) : (2006250790U)));
                    var_31 = ((/* implicit */signed char) ((_Bool) 1918203959U));
                }
                for (signed char i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    var_32 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_9 - 1] [i_9] [i_1])) ? (arr_12 [(signed char)15] [i_1 - 1] [i_9] [i_1] [i_1 - 1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 3850357199U))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) : (3850357198U)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44394))) ^ (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [5ULL] [i_1 - 4] [(unsigned short)7] [i_9] [5ULL])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)18]))))))))))));
                    var_33 |= ((/* implicit */unsigned short) arr_27 [(unsigned short)10] [i_1] [i_9]);
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2139095040ULL), (((/* implicit */unsigned long long int) 3789857130949002914LL))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48106)) | (((/* implicit */int) arr_3 [i_0] [i_1 - 4]))))) : (min((4294967291U), (((/* implicit */unsigned int) arr_25 [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (((2288716515U) << (((3850357217U) - (3850357204U)))))))) : (((13522778590575209386ULL) & (((/* implicit */unsigned long long int) arr_28 [i_1 - 1] [i_1 - 4]))))));
                    var_35 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)64120)), (((15044008304439698777ULL) | (18446744073709551615ULL)))));
                }
                arr_32 [i_0] [(unsigned short)15] [(unsigned short)3] = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned short) (signed char)58)), ((unsigned short)19557))));
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((unsigned short) (unsigned char)165)))));
                var_37 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) ((((/* implicit */_Bool) (short)-15065)) ? (8U) : (((/* implicit */unsigned int) var_8))))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned short) (signed char)42);
}
