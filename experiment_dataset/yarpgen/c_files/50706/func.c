/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50706
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
    var_18 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) var_9)))) * (((((/* implicit */int) var_5)) / (var_16)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_6)))));
    var_19 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2457135315U))));
        var_21 = ((/* implicit */unsigned short) var_12);
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_22 = ((((/* implicit */_Bool) ((arr_1 [i_1]) * (arr_6 [i_1])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_6 [i_1]) : (arr_6 [i_1]))) : (((((/* implicit */_Bool) var_14)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) 3487075071450000769LL)))));
        arr_7 [i_1] = ((((/* implicit */_Bool) -399431719)) ? (8852886505615187996ULL) : (((/* implicit */unsigned long long int) 2147483647)));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned long long int) arr_8 [i_2])))))));
        var_24 *= min((((((/* implicit */_Bool) (unsigned char)129)) ? (max((9593857568094363620ULL), (((/* implicit */unsigned long long int) (unsigned short)6285)))) : (((((/* implicit */unsigned long long int) -3883346756687176611LL)) * (arr_9 [i_2]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_2 + 3])), (var_10)))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_9 [i_2]))));
        var_26 |= max((arr_9 [i_2 - 2]), (((/* implicit */unsigned long long int) 1202037014U)));
    }
}
