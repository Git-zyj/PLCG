/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226441
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
    var_17 = ((((/* implicit */_Bool) 4021951161U)) ? (var_10) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15997585981434418634ULL)) ? (1576220678U) : (3385655108U)))) ? (min((((/* implicit */unsigned long long int) var_12)), (var_15))) : (var_10))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3141218790U)) * (6062868324759019754ULL)));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3289392784U)) ? (4144892960U) : (857883907U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3385655108U)) ? (18296480324312872517ULL) : (((/* implicit */unsigned long long int) 3437083389U))))) ? (857883923U) : (((((/* implicit */_Bool) var_9)) ? (3141218790U) : (var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (253464060U) : (var_11)))) ? (var_6) : (2877390159U)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (4660180397522803170ULL)))) ? (3437083388U) : (((((/* implicit */_Bool) 7295213812421402889ULL)) ? (3221225472U) : (1576220684U)))))) ? (((arr_0 [i_0]) | (((arr_0 [i_0]) ^ (12383875748950531862ULL))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3437083388U)), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) 4095U)) ? (((/* implicit */unsigned long long int) 3437083397U)) : (arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 3793147101U)) : (arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_21 = ((((/* implicit */_Bool) max((((arr_0 [i_0]) & (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) min((439417969U), (2718746624U))))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) 17293822569102704640ULL)) ? (arr_1 [i_0]) : (12ULL))) : (max((((/* implicit */unsigned long long int) 3437083384U)), (16190241452269026384ULL))))) : (arr_1 [i_0]));
    }
}
