/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228457
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_15) >= (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) & (-727776744985878740LL)))) ? (min((((/* implicit */unsigned int) var_0)), (var_15))) : ((-(var_15)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) arr_1 [i_0])))))));
        var_19 = ((/* implicit */unsigned char) ((var_17) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 0ULL))))))))))));
        var_20 = arr_1 [i_0];
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1 + 2] [i_1] = arr_6 [i_1];
        var_21 = ((/* implicit */long long int) arr_5 [i_1 + 1] [i_1 + 1]);
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) arr_5 [10LL] [i_4 - 1]);
                    arr_15 [i_2] [4U] [i_4 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_12 [3U] [i_3] [i_4 - 2]) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) min((arr_10 [i_2] [(short)0]), (arr_13 [i_2] [(_Bool)0] [0LL] [i_4 - 1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_6)) : (arr_11 [i_2] [i_3 + 1] [13U])))) ? (((arr_8 [i_2]) ? (arr_11 [i_2] [i_3] [(_Bool)1]) : (((/* implicit */long long int) 1367910614)))) : (((/* implicit */long long int) arr_5 [i_3] [i_3])))) : ((-(max((arr_11 [i_2] [i_3 + 2] [(unsigned short)0]), (((/* implicit */long long int) arr_13 [i_2] [i_3 + 1] [i_3 + 3] [i_4]))))))));
                    var_23 = ((/* implicit */long long int) arr_5 [i_2] [i_2]);
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((15792366521705332208ULL), (((/* implicit */unsigned long long int) ((arr_9 [i_2] [12]) || (arr_9 [i_2] [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [(signed char)1] [i_2]))) : ((-(arr_11 [(signed char)11] [i_2] [i_2])))));
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        var_25 = ((/* implicit */long long int) arr_17 [i_5]);
        arr_18 [i_5] = ((/* implicit */_Bool) -1367910627);
        var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (7425529976437070698LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))))) >> (((((((/* implicit */int) arr_6 [i_5])) ^ (((((/* implicit */_Bool) 4058833367U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_5])))))) - (24413)))));
        var_27 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 15792366521705332208ULL)) ? (((/* implicit */int) arr_16 [(unsigned short)5])) : (((/* implicit */int) arr_17 [i_5]))))))) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) var_16)));
        var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min(((_Bool)1), (var_13)))), (min((((/* implicit */unsigned int) arr_16 [i_5])), (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_17)))))));
    }
}
