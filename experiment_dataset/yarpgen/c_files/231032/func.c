/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231032
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [(_Bool)1] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2]))));
        var_16 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (short)26452)) == (((/* implicit */int) (signed char)0)))));
        var_17 = ((/* implicit */long long int) arr_0 [i_0 + 2]);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_4 [i_1] [i_1])))) <= (((/* implicit */int) ((signed char) arr_1 [i_1] [i_1])))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1377333883)), (6920614966699958902ULL)))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (11526129107009592697ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) ((_Bool) (signed char)-14))) : (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_3)))))));
        arr_10 [i_2] = ((((/* implicit */_Bool) ((11526129107009592697ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_1)));
        /* LoopSeq 3 */
        for (int i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            var_20 = (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0)))));
            var_21 = ((/* implicit */unsigned short) (unsigned char)207);
            arr_13 [i_2] [(_Bool)1] = ((/* implicit */signed char) (~(arr_7 [i_2])));
        }
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_16 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (+((-(1010708332908427145LL)))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (signed char)-20))) ? (arr_9 [i_2]) : (-4118058814994949158LL))))));
            arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_3 [i_2])) - (58)))));
            arr_18 [i_2] [i_2] = ((/* implicit */int) (signed char)4);
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_23 *= ((/* implicit */short) 1834353343);
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_2])) || (((/* implicit */_Bool) var_11))));
        }
        var_25 ^= ((/* implicit */unsigned int) var_8);
    }
    var_26 = ((/* implicit */int) var_4);
}
