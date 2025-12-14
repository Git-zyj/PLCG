/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221348
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((short) min((var_11), (arr_13 [6U] [6U] [i_1] [i_2] [i_1]))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (var_14))))))) >= (((int) ((long long int) var_8))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6790502552942052882LL)) && (((/* implicit */_Bool) (-(arr_14 [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 3]))))));
                    arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (4194303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53)))));
                }
                for (signed char i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0] [i_1])), (0LL)))), (arr_13 [i_1] [i_5] [i_5] [i_5 + 1] [i_1])))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))) : (-4570865060108019035LL))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -4570865060108019067LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29665))) : (var_11)))) || (((0ULL) >= (var_11))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max(((short)32767), ((short)9105))))))) : (var_9)));
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_5] [i_1 + 1] [i_5] [i_1]) >= (var_12))))) >= (arr_14 [(signed char)4] [i_1] [i_1] [i_0]))) || (((/* implicit */_Bool) ((unsigned char) arr_7 [i_1] [i_5 + 1] [i_1])))));
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_1] = var_8;
                        var_20 = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) var_5)) ? (arr_9 [i_1]) : (-4570865060108019067LL)))))));
                    }
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_16 [i_0] [i_1 + 3] [(unsigned short)10] [22ULL])))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_5 + 1])), (var_9)))))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1]))))) ? (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_5] [i_1]), (arr_6 [i_5] [i_1 + 2] [i_5 - 2] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)25)) && (arr_6 [i_1] [i_1 + 3] [i_1] [i_1]))))));
                        arr_27 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */long long int) (unsigned char)0)), (var_2))));
                        arr_28 [i_1] [i_5] [i_1] [i_0] [i_1] = ((((/* implicit */unsigned long long int) 4570865060108019039LL)) ^ (16857901142093789353ULL));
                    }
                }
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-((+(var_3))))))));
                var_24 = ((/* implicit */long long int) var_11);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 2) 
                {
                    for (long long int i_12 = 2; i_12 < 16; i_12 += 1) 
                    {
                        {
                            arr_42 [4ULL] [i_10] [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4570865060108019059LL)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned short)19593))));
                            arr_43 [i_9] [i_10] = ((/* implicit */short) var_13);
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_19 [i_9] [i_9] [i_11 + 1] [i_11]))))) ? (arr_41 [i_9] [i_9] [i_9] [i_9] [i_11] [i_9]) : (((((/* implicit */_Bool) (short)-10407)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (short)32755)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_39 [i_9 - 1] [i_10] [i_10] [i_14])), (((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_10]))) : ((~(1823368407U)))))));
                            arr_49 [i_10] [i_10] [(short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_10]))))) ? (max((10475752517814106589ULL), (((/* implicit */unsigned long long int) -4570865060108019063LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9] [i_10] [i_13] [i_10])))))) || (((/* implicit */_Bool) var_5))));
                            var_27 = ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) (unsigned char)29)) && (((/* implicit */_Bool) (unsigned short)44187)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) ((unsigned long long int) arr_25 [i_10]));
            }
        } 
    } 
}
