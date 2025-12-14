/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220267
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
    var_20 = ((/* implicit */signed char) min((var_20), (max((((/* implicit */signed char) (((+((-9223372036854775807LL - 1LL)))) <= (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)61230)), (var_9))))))), (var_13)))));
    var_21 *= ((/* implicit */unsigned char) var_16);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned short) (((!(((/* implicit */_Bool) arr_1 [(signed char)4] [5])))) && ((!(((/* implicit */_Bool) var_1)))))));
        arr_3 [i_0] [(signed char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_0 [(signed char)7] [i_0]), (arr_0 [i_0] [i_0])))) - ((-(((/* implicit */int) arr_0 [(unsigned short)5] [(unsigned short)4]))))));
        var_22 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [11ULL])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned short)8] [(signed char)11])) > (((/* implicit */int) (signed char)43))))))))));
    }
    var_23 = ((/* implicit */signed char) max(((((-(((/* implicit */int) var_14)))) + (((/* implicit */int) max(((unsigned short)61237), (((/* implicit */unsigned short) (signed char)-94))))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)61230))))));
}
