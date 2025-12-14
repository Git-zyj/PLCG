/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28700
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
    var_10 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) (signed char)48)))), (((/* implicit */int) (short)13557))))) * (min((min((((/* implicit */unsigned long long int) var_2)), (var_6))), (((/* implicit */unsigned long long int) var_4))))));
    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)13557))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), ((signed char)-56))))) : (((((/* implicit */_Bool) var_0)) ? (2906616022U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_0])))) ? (((unsigned int) 0U)) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)13557)))) != (((0U) | (arr_1 [i_1]))))))));
                                arr_15 [i_3] [i_4] [i_3] [i_4] [i_0] [i_3] = ((unsigned char) (unsigned char)129);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) (((~(((/* implicit */int) var_0)))) / ((+(((/* implicit */int) (unsigned char)127))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((arr_1 [i_0 + 1]) + (arr_1 [i_0 + 1]))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_5]))))) >= (arr_1 [i_1 + 1]))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_8 [i_0] [i_5 - 1] [i_1 - 1] [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0] [i_5 + 4] [i_1 - 1] [i_0 + 1]))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (signed char)-48))));
                            arr_20 [i_0] [i_1] [i_0] [(signed char)10] [i_6] = ((/* implicit */unsigned char) (-((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_0] [i_0]))))));
                            var_18 = ((/* implicit */_Bool) ((arr_16 [i_6] [i_5 + 3] [i_1 - 1] [i_0 + 2] [i_0] [i_0 + 2]) | (arr_16 [i_6] [i_5 + 1] [i_1 + 1] [i_1] [i_1] [i_0 + 2])));
                        }
                    }
                    for (short i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        arr_24 [i_0] [(_Bool)1] [i_2] [i_0] [i_2] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (1088975752) : (((/* implicit */int) arr_2 [i_2] [i_7]))))));
                        arr_25 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_2] [i_2])))))) ? ((-(((/* implicit */int) (unsigned short)16788)))) : ((+(((/* implicit */int) arr_10 [i_0]))))));
                    }
                    for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_19 = (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? ((+(((/* implicit */int) arr_18 [i_0] [i_0])))) : (((/* implicit */int) arr_26 [i_1 + 1] [i_0 - 1])));
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_4 [i_2])));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_21 |= ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_9 [i_0 + 1] [i_2] [i_1] [i_0 + 1])))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (((~(((/* implicit */int) arr_8 [i_2] [i_0] [(unsigned char)0] [i_9])))) % (var_9))))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_10 = 3; i_10 < 21; i_10 += 3) 
    {
        arr_34 [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (_Bool)0)))));
        arr_35 [i_10] = ((/* implicit */unsigned short) (!(arr_33 [i_10] [i_10])));
        arr_36 [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned long long int) min((min((1125899638407168ULL), (((/* implicit */unsigned long long int) arr_33 [i_10] [i_10])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)56))))))));
        arr_37 [i_10] = ((/* implicit */signed char) (!((_Bool)1)));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-((~(((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) arr_33 [3LL] [3LL])) : (((/* implicit */int) arr_32 [i_10])))))))))));
    }
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
    {
        arr_40 [i_11] = ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 18; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28))))) << (((min(((-(((/* implicit */int) arr_30 [i_13])))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)23)), (arr_42 [i_13] [i_12])))))) + (42474)))));
                        arr_48 [i_11] [i_12] [i_11] [i_11] [i_12 + 1] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_19 [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_14])), (1125899638407170ULL)))));
                        var_25 = ((/* implicit */int) max((var_25), (-1)));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_11] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])) - (((/* implicit */int) arr_12 [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_13]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (1125899638407168ULL))))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)127)) % (((/* implicit */int) var_3))))), (var_4))) << (((/* implicit */int) var_5)));
    var_28 = min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
}
