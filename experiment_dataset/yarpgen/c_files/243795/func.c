/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243795
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
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (max((((/* implicit */unsigned long long int) var_3)), (var_2))))), (var_4)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_0])) >= (var_2))))))) ? (17170991897491964082ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))) > (17170991897491964084ULL))))));
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (signed char)-113)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0 - 2] [(signed char)12])))) > (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) & (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) 5932595080031874935LL)), (13644260295883487465ULL)));
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_0 [i_1] [i_1])) >= (9223372036854775780LL))) ? (((/* implicit */int) ((unsigned char) (signed char)113))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1] [i_1]))) ? (((unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))))))))));
        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [(signed char)8]), ((unsigned char)161)))) && (((/* implicit */_Bool) (signed char)55))));
        var_22 -= ((/* implicit */signed char) (+(((1275752176217587517ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65)))))));
    }
}
