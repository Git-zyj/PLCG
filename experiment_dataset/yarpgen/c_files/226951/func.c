/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226951
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
    var_12 ^= ((/* implicit */_Bool) var_4);
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((arr_1 [(unsigned char)2]) - (3457124820U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9554823526456522805ULL)) ? (355632210) : (((/* implicit */int) (signed char)127))))) : (var_10)))) : ((+(arr_0 [i_0])))));
        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_1 [0ULL])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (arr_1 [2]))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) -1817174428))));
        arr_4 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_2) : (arr_2 [i_1]))) + ((+(var_10)))));
        var_16 = ((/* implicit */unsigned short) (+((+(2078353566U)))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-25629)) & (((/* implicit */int) arr_3 [i_1]))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_3 [i_1]))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 4; i_2 < 11; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) != ((-2147483647 - 1))));
                    arr_14 [i_2] [i_2 + 4] = (-(2078353566U));
                    var_18 = ((/* implicit */unsigned char) ((arr_10 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))))))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))) & (max((((/* implicit */unsigned long long int) arr_17 [i_4] [i_4])), (arr_16 [i_4])))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ? (14ULL) : (((8046943427170984232ULL) & (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_16 [i_4])))))))) : (arr_16 [i_4])));
        var_21 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) (-(2147483647)))) : (min((((/* implicit */unsigned long long int) arr_17 [(unsigned char)8] [12])), (arr_16 [0ULL]))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 4; i_5 < 12; i_5 += 4) 
    {
        var_22 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1))));
        var_23 = ((/* implicit */short) arr_11 [i_5 - 4] [i_5 - 1] [i_5]);
    }
    var_24 = ((/* implicit */unsigned short) var_8);
    var_25 = (-(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_7))));
    var_26 |= ((/* implicit */signed char) ((4294967282U) + (((/* implicit */unsigned int) (-2147483647 - 1)))));
}
