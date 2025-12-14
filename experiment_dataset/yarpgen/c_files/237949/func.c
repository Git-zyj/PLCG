/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237949
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((var_5) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_11))))) ? (var_5) : (((((/* implicit */int) (!((_Bool)1)))) & (var_8)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [6U] [i_2] = ((/* implicit */int) min((arr_7 [i_0] [i_0]), (((/* implicit */short) var_6))));
                    var_13 = ((/* implicit */_Bool) -1464930784);
                }
            } 
        } 
        var_14 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) == (10269304754641844510ULL)));
    }
    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_1))))) : ((-(505743331646014857ULL))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 1]))) - (0ULL))), (((((arr_2 [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13687))))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned long long int) var_3);
        arr_17 [i_4] &= (unsigned char)255;
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) (-(((((_Bool) arr_14 [i_4] [24U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) arr_15 [i_4])))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (((~(((10269304754641844510ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))))) ^ (var_0)));
        arr_22 [i_5] = ((/* implicit */signed char) (+((~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_20 [i_5] [(signed char)9]))))))));
    }
}
