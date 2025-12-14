/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239271
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
    var_11 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) 3706469477U)) && (((/* implicit */_Bool) (unsigned char)150)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1678692420)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1678692419)) && (((/* implicit */_Bool) 7298992325845418942LL)))))) : (((((/* implicit */_Bool) var_0)) ? (10293395144873338629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6327997205118675468LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63950)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3354696447U))))))), (((min((((/* implicit */long long int) (short)7186)), (4930027441924867612LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))))));
        arr_4 [i_0 - 2] [(signed char)0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1678692419)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24919))) : (var_5)));
        arr_5 [i_0] = ((/* implicit */short) (+(-4888472147203921232LL)));
        var_13 ^= ((/* implicit */unsigned long long int) (+((-((((_Bool)0) ? (((/* implicit */int) arr_3 [(short)4])) : (var_3)))))));
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_14 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned int) (signed char)77))) ? (((((/* implicit */_Bool) 456646439)) ? (3690719573U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8703))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        arr_9 [(short)7] = ((/* implicit */_Bool) ((short) min((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((1949363606) / (((/* implicit */int) (signed char)-64)))))));
        var_15 = -1678692420;
        arr_10 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((-1949363606) & (((/* implicit */int) (signed char)96))))) >= (((((/* implicit */_Bool) var_8)) ? (1168285160U) : (2785685918U)))));
        var_16 ^= arr_7 [i_1];
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        arr_14 [(unsigned short)11] = ((/* implicit */_Bool) (~((~(1253045893)))));
        arr_15 [i_2] = ((/* implicit */short) ((signed char) ((5042115925142389005LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2]))))));
        arr_16 [i_2] = ((/* implicit */int) ((_Bool) (-(5042115925142389005LL))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        arr_19 [(unsigned short)8] [i_3] = ((/* implicit */short) (~(((/* implicit */int) max((arr_7 [i_3]), (((/* implicit */short) (_Bool)1)))))));
        arr_20 [i_3] = (+(((/* implicit */int) ((((/* implicit */_Bool) (-(1678692420)))) && (((/* implicit */_Bool) arr_7 [i_3]))))));
        arr_21 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)8685)) < (((/* implicit */int) ((((/* implicit */_Bool) 464856400U)) && ((_Bool)1)))))))));
    }
}
