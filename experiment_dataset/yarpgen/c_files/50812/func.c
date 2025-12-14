/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50812
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
    var_15 = max((var_12), ((+(-1LL))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = -1139070320005054676LL;
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1139070320005054656LL)) ? (-1139070320005054679LL) : (8382611408459048276LL)));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_13)))) ? (((long long int) arr_5 [i_1])) : (((/* implicit */long long int) ((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1])))) ? ((~(((long long int) -2763069836846321776LL)))) : (1137030997246315351LL)));
        arr_9 [i_1] = (-(((min((3LL), (var_2))) - ((~(-2763069836846321762LL))))));
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) -1LL))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_13 [i_2] = max((arr_5 [0LL]), (((long long int) arr_5 [0LL])));
        var_17 = ((/* implicit */long long int) ((unsigned char) (-(((((/* implicit */_Bool) 6976649450465384288LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_2])))))));
        arr_14 [i_2] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
    }
    var_18 ^= ((((/* implicit */_Bool) (~(min((var_10), (-5905271537843589287LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((((-(9223372036854775807LL))) & (((/* implicit */long long int) ((/* implicit */int) var_3))))));
}
