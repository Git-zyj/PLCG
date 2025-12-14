/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23490
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (signed char)-114)) : (0)));
                var_14 = ((/* implicit */signed char) ((((((unsigned long long int) var_2)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (arr_2 [i_1] [i_1]))))))) ^ (((/* implicit */unsigned long long int) -1LL))));
                var_15 = var_0;
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))) : (arr_0 [i_0] [i_2])));
                    var_16 += ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0]);
                }
                for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) 145083054U)) / (var_0)))) ? (min((((/* implicit */unsigned long long int) 7)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (signed char)114)), (arr_12 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (arr_5 [i_0]))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)828))) - (2126103774U))))) < (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (-35320353) : (((/* implicit */int) (unsigned char)51))))) : (min((((/* implicit */unsigned int) (signed char)-25)), (3456071005U)))))));
                                var_17 = ((/* implicit */signed char) ((unsigned short) -8462359048352904317LL));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) 12551580106715391782ULL)) ? (6789065361650516913ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)830))))) % (((((/* implicit */_Bool) -5520229365865127581LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_3)));
                    arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) 16840418426320003402ULL);
                    var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1]))));
                }
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)58)) ? (arr_12 [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7]))))) - (((unsigned int) 2575552111U))))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18414844422899165407ULL)))));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_7] [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((var_12) * (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0])) : (12551580106715391782ULL))) * (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0]))))));
                        var_24 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((208151767) != (643309783))))));
                        var_25 = ((/* implicit */_Bool) ((2575552111U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751)))));
                    }
                    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))))))));
                }
                var_27 = ((/* implicit */unsigned char) max((var_27), (arr_20 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((6663152497689467582LL), ((-9223372036854775807LL - 1LL))))) * (max((((var_11) / (var_12))), (((/* implicit */unsigned long long int) var_8))))));
}
