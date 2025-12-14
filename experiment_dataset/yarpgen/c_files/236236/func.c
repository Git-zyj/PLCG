/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236236
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-113)) || (((/* implicit */_Bool) var_12)))))) < (((((-1LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) - (33297))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
        var_16 = ((/* implicit */unsigned char) (~((~(var_4)))));
    }
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3871291123387364430LL)) ? (((/* implicit */unsigned int) -1506614910)) : (1556942370U)));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(959666283903034888LL)))) ^ (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) -3871291123387364423LL)) : (0ULL))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (min((((var_5) << (((4163035169U) - (4163035133U))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (3871291123387364446LL))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (max((((((/* implicit */_Bool) (signed char)-43)) ? (1506614909) : (((/* implicit */int) (_Bool)1)))), (-1107018228))) : (var_12)));
}
