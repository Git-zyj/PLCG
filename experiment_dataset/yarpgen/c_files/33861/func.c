/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33861
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
    var_11 = ((/* implicit */_Bool) var_2);
    var_12 &= ((/* implicit */_Bool) var_6);
    var_13 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_10))) : ((+(((/* implicit */int) (signed char)89)))))) - (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
                                arr_12 [i_1] [i_1] [i_1] [5U] [i_4] = ((/* implicit */long long int) ((signed char) arr_10 [i_0] [i_2] [19] [i_3] [i_1]));
                                var_14 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) -75517387)) : (-8072996861866886019LL)))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 2222737486415552010LL))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!((_Bool)1)));
                        arr_17 [i_5] [i_2] [i_2] [i_0] &= ((/* implicit */_Bool) ((((((arr_6 [i_0] [i_1] [i_2] [0]) || (((/* implicit */_Bool) 3323595724U)))) ? (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_9 [i_0] [i_0]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_2] [i_1 + 1]))) == (var_1)))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)50973)))) ? (6396265424047752648ULL) : (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_1] [i_2] [i_6]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_5)))) || (((((/* implicit */_Bool) 75517386)) || (((/* implicit */_Bool) 3186471139U))))))))));
                        arr_22 [i_0] [i_1] [i_2] [i_1] [i_2] [(unsigned char)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((long long int) -1776312337))))) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) (unsigned char)216)), (-9223372036854775796LL))))) : (((/* implicit */long long int) ((arr_7 [i_0] [i_1 + 1] [i_2] [i_1] [i_1 + 1] [i_1 + 1]) << (((((((/* implicit */int) (signed char)-102)) + (123))) - (20))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_8] [i_8]))) : (arr_26 [i_8])))))) : (((((/* implicit */_Bool) (short)14514)) ? ((-(arr_24 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0))))))));
                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_7] [i_7] [i_8])) << (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
}
