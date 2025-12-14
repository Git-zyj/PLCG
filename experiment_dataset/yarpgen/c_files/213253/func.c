/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213253
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (3812673359U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((var_9) ? (arr_1 [(unsigned short)12]) : (((/* implicit */unsigned long long int) -5047982125273173861LL))))))) ? (((((((/* implicit */_Bool) arr_3 [i_0])) && (var_3))) ? (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -540108316144059243LL)))))) : (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) (short)-5299))))))));
        arr_4 [i_0 - 1] = ((arr_0 [i_0 + 1]) ? (min(((+(arr_1 [i_0 - 1]))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])))) : (((/* implicit */unsigned long long int) var_4)));
        var_12 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((1127710873U), (var_0)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((((/* implicit */_Bool) 506896381U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)73))) : (3481300707U))) > (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_2 [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25631))))))))));
    }
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2430326968U)) ? (((/* implicit */int) (short)-24072)) : (((/* implicit */int) (unsigned short)16930)))))));
}
