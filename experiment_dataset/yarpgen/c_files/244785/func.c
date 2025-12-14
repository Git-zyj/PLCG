/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244785
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_17 *= ((/* implicit */signed char) (+(17504344969728581157ULL)));
        arr_2 [i_0] [i_0] |= ((/* implicit */short) (+(((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)175)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)174)) >> (((((/* implicit */int) (short)32640)) - (32615)))));
            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
        }
        var_19 = ((/* implicit */unsigned char) (unsigned short)62862);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17504344969728581156ULL)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned char)175))));
        var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) / (((long long int) (unsigned char)3))));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)6)))) : (arr_13 [16ULL]))))));
        var_24 = ((/* implicit */short) (+(((/* implicit */int) ((arr_13 [i_3]) >= (arr_13 [i_3]))))));
    }
    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
    {
        var_25 += ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_13)) ? (-4826164931701380553LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)146)), ((short)31868))))))));
        arr_16 [i_4 + 1] = ((_Bool) (((_Bool)0) ? (-27596521) : (((/* implicit */int) (short)32639))));
    }
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) 210045304497674860ULL))));
}
