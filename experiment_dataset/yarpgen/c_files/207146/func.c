/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207146
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
    var_11 = (_Bool)1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned int) arr_0 [i_0]);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = max((((int) ((10978140496420164993ULL) | (((/* implicit */unsigned long long int) -89014933))))), (((/* implicit */int) ((_Bool) ((var_9) <= (((/* implicit */int) (unsigned char)59)))))));
                                arr_12 [i_0] [8] [i_1] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)4235)), ((unsigned short)49764))))) > (((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0 - 1] [i_0] [i_0 + 2])) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (16974850215433124309ULL)))))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(((int) min((((/* implicit */unsigned long long int) arr_4 [i_3] [i_1])), (10728899133707430436ULL)))))))));
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -5251303052740557733LL)) ? (arr_9 [i_4] [i_1] [i_2] [i_1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22991))) : (var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28909))) : (max((10102310985308490801ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)196)) ? (1729615801U) : (var_1))) | (((/* implicit */unsigned int) (-(arr_0 [i_0])))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1]))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) : (2565351495U))))) : (((((/* implicit */unsigned int) arr_2 [i_0 - 1])) ^ (1729615801U)))));
                }
                for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    arr_17 [i_0] [i_0] [i_0] [(_Bool)1] |= ((/* implicit */long long int) var_1);
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        arr_21 [i_1] = ((/* implicit */signed char) var_10);
                        var_16 = ((((((/* implicit */_Bool) min((var_5), (arr_18 [i_0 - 1] [i_1])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) var_5))))) & (((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) arr_0 [i_5 + 1]))))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        arr_24 [i_7] &= ((/* implicit */int) (+(12286481433243931520ULL)));
                        var_17 = ((/* implicit */unsigned long long int) (!(((var_3) != ((-(10978140496420164993ULL)))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_0 - 1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_3 [i_5] [15LL]);
                        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 10431602734486445774ULL)) ? (((/* implicit */int) (short)4222)) : (((/* implicit */int) var_7))))))));
                    }
                    for (unsigned char i_9 = 4; i_9 < 19; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) 1729615801U);
                        arr_30 [i_1] [i_9] [i_5] [i_5] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_5 + 2] [(short)9])) ? (((/* implicit */unsigned long long int) 2565351495U)) : (12286481433243931520ULL))))))));
                        arr_31 [i_0] [i_1] [i_9] [i_9] &= ((/* implicit */int) ((((/* implicit */_Bool) 753459993128890462ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9] [i_0]))) : (((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5 + 1] [i_0] [i_0 - 2] [i_0])) ? (arr_29 [i_0] [14ULL] [i_5 + 1] [i_1] [i_0 - 2] [i_0]) : (((/* implicit */long long int) var_1))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (max((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (arr_19 [i_0]))), (((/* implicit */unsigned int) arr_26 [i_1]))))), ((-(arr_29 [i_0] [i_5 + 1] [i_5 - 1] [i_9] [i_9] [i_9 - 3])))))));
                        var_21 = ((/* implicit */unsigned short) arr_3 [i_5 + 1] [i_9 - 3]);
                    }
                }
                arr_32 [i_0] [i_1] = arr_15 [i_1] [i_1] [i_0];
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((unsigned long long int) var_3));
}
