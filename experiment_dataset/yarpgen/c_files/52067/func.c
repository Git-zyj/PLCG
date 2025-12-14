/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52067
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)0))))), ((+(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1 + 2]))));
                        arr_11 [i_0] [2ULL] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) 9705611346355879150ULL);
                    }
                    for (short i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_2))));
                        arr_16 [i_2] [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((arr_8 [i_4 - 1] [i_2 - 1] [i_1 - 1]) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_8 [i_4 + 1] [i_2 - 2] [i_1 + 2])))) >= (((/* implicit */int) arr_2 [i_0] [i_0]))));
                        var_15 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) -53380109)) : (((((/* implicit */_Bool) -53380109)) ? (((arr_7 [i_0] [i_0] [i_2] [i_1]) << (((((/* implicit */int) (short)-30791)) + (30809))))) : (((/* implicit */unsigned int) 698735816))))));
                        var_16 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (arr_6 [i_2 - 1]) : (arr_6 [i_2 - 1]))) << ((((+(arr_6 [i_2 - 1]))) - (496705887)))));
                        var_17 ^= arr_4 [i_4];
                    }
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1])) ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) arr_6 [i_1 + 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_5] [i_5 + 1])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2 - 2] [i_5])) : (((/* implicit */int) var_5))))) : (((arr_7 [i_0] [i_0] [(unsigned short)5] [i_1]) << (((((/* implicit */int) var_7)) + (45)))))));
                        arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)-30791)) - (-1)))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_7)) + (24)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 7; i_7 += 3) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0])) ? (((/* implicit */int) arr_10 [i_7])) : (arr_6 [i_2])))) >= (min((var_0), (((/* implicit */unsigned long long int) var_10)))))))));
                                var_21 ^= (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)46)), ((unsigned short)9807)))));
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_5 [i_7] [i_6] [i_2] [i_0])))) >= (((/* implicit */int) min((var_6), (var_2)))))) ? (((13807380706680700686ULL) << (((((/* implicit */int) (unsigned char)144)) - (122))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))));
                            }
                        } 
                    } 
                    arr_24 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_0] [i_0] [i_0]);
                    arr_25 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
                }
            } 
        } 
    } 
}
