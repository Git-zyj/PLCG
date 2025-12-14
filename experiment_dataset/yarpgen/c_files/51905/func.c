/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51905
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
    var_14 = ((/* implicit */long long int) ((_Bool) var_9));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) -2888981384824264661LL)))), (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) arr_0 [i_0 - 1]))))));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) (~(arr_0 [i_0])));
        var_15 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)240));
    }
    for (int i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-11))))) ? (((arr_6 [i_1 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)108), (var_12))))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        var_17 = ((/* implicit */long long int) var_9);
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((4095LL), (((/* implicit */long long int) var_3))))))) ? ((~(((((/* implicit */int) var_13)) % (((/* implicit */int) var_3)))))) : (((/* implicit */int) (unsigned char)222))));
        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)56)) ^ (((/* implicit */int) (unsigned char)84))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 814120256U)) ? (((((/* implicit */_Bool) var_13)) ? (3480847040U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3480847039U)))))) ? (min(((+(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) 7935815068362150593ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_1))));
}
