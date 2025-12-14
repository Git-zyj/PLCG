/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217128
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (signed char)88))) ? (((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ (arr_5 [i_1 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_1 - 2] [i_2] [i_2])))));
                    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)23241)) : (((/* implicit */int) (signed char)88)))) >= ((-(((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 3] [i_1 - 1]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-23264)) / (1473133468))) * (((/* implicit */int) (!(((/* implicit */_Bool) 18212135673351938195ULL)))))))) % (max((((234608400357613406ULL) >> (((/* implicit */int) var_17)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                        var_23 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-23264))))), (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0 - 2])))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 841312189)) ? (-1473133476) : ((~(arr_7 [i_3])))))), (18212135673351938182ULL)));
                            arr_11 [i_0 - 2] [i_1 - 2] [i_2] [i_3 + 2] [i_4] = ((((/* implicit */_Bool) -1473133453)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)));
                            var_25 = ((/* implicit */unsigned int) 841312195);
                        }
                        var_26 ^= ((/* implicit */int) ((long long int) (~((+(((/* implicit */int) var_0)))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_27 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) ((_Bool) 841312189))) << (((min((5760699136888780843ULL), (((/* implicit */unsigned long long int) var_0)))) - (3839ULL)))))));
                        var_28 ^= ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_14)), (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 3] [i_5])))))), (((/* implicit */int) (!((_Bool)1))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_29 += ((/* implicit */unsigned short) (((+(((/* implicit */int) ((unsigned short) var_10))))) ^ (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 + 1] [i_0] [i_1] [i_1] [i_2] [i_1])))))))));
                        arr_19 [10U] [(unsigned char)9] [i_1] [(unsigned char)9] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) (short)32761)))))) ? (((/* implicit */int) ((arr_0 [i_1 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_17 [i_1 + 1] [i_1] [i_2] [i_0 - 1] [i_1] [(signed char)23]))))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) var_14))), (var_11)));
}
