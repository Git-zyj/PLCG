/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238907
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
    var_17 += ((/* implicit */unsigned long long int) (+(-12259686)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (-7641210769630809225LL) : (((/* implicit */long long int) ((unsigned int) var_14)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        arr_7 [i_1 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) == (6U)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_6)))))), (((/* implicit */int) var_4))));
        arr_8 [i_1] = ((/* implicit */short) (((+(((/* implicit */int) (signed char)34)))) ^ (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned short)50807))))));
        var_18 = ((/* implicit */unsigned int) (+((+((+(arr_1 [i_1 + 1])))))));
        var_19 = ((/* implicit */int) arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [10LL] = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((10916143821347371546ULL) <= (((/* implicit */unsigned long long int) var_3))))))))));
                            arr_23 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */unsigned char) (+(((var_4) ? (7641210769630809224LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 1] [i_2] [i_3])))))));
                            arr_24 [i_2] [i_3] [i_2] [i_3 - 3] [i_2] [i_3] = var_5;
                        }
                    } 
                } 
            } 
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_2] [(signed char)2] [2U] [i_3])) || (((/* implicit */_Bool) (~((+(var_6))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((5419148316329064577LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) ? ((+(((/* implicit */int) (_Bool)0)))) : ((-2147483647 - 1))))) ? ((~(max((var_11), (((/* implicit */unsigned int) (signed char)115)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_2]))))));
            arr_27 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((var_3) >> (((((/* implicit */int) var_16)) - (18323)))));
        }
        for (signed char i_8 = 2; i_8 < 11; i_8 += 3) 
        {
            var_22 = (+(min((((/* implicit */unsigned int) var_2)), (var_6))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min(((+(min((((/* implicit */long long int) var_12)), (7641210769630809220LL))))), (((((((/* implicit */_Bool) 7641210769630809223LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)122))) : (7641210769630809217LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            arr_30 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((var_10) - (arr_1 [i_8 + 1]))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_2])))))));
            arr_31 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_2] [i_8])) ? ((~(((arr_1 [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : ((((~(var_1))) | (((/* implicit */unsigned long long int) (~(7641210769630809225LL))))))));
            var_24 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_8 - 2] [i_8 - 2] [i_2] [i_8 + 1])) ? (((/* implicit */int) arr_16 [i_8 + 2] [i_8 - 2] [i_2] [i_8 - 2])) : (((/* implicit */int) arr_16 [i_8 + 2] [i_8 - 1] [i_2] [i_8 - 2])))));
        }
        arr_32 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max(((_Bool)1), (var_4)))) != (((/* implicit */int) min((((/* implicit */short) arr_16 [(unsigned char)3] [i_2] [i_2] [(unsigned char)3])), ((short)-1)))))) ? ((+(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((((7641210769630809224LL) >= (((/* implicit */long long int) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1719638082))))) : ((~(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
    }
}
