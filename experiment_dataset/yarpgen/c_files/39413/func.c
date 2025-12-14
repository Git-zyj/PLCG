/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39413
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0 + 3] [i_0 + 4] = ((/* implicit */unsigned short) 18446744073709551615ULL);
        var_12 = ((/* implicit */int) max((max((35184372088832ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 3])))), (((/* implicit */unsigned long long int) max((arr_0 [i_0 - 1]), (arr_0 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) (unsigned short)38487)) ? (var_5) : (((/* implicit */int) arr_4 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) (short)0)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) > (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (18446744073709551611ULL))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 2])) ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 + 2])))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_2]) < (4))))) : (arr_3 [i_2 - 2]))) : (((/* implicit */unsigned int) ((int) ((int) (unsigned short)33964))))));
        arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4) > (arr_6 [i_2 + 2]))))) : ((-(arr_3 [i_2])))));
        arr_9 [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_2])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)12))) : (2097151LL)))))) ? (((((((/* implicit */_Bool) 3984207019192137144ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1)))) ^ ((-(0))))) : (((((/* implicit */_Bool) 4294443008U)) ? (arr_7 [i_2 + 2]) : (arr_7 [i_2 - 2])))));
    }
    var_15 = ((/* implicit */int) var_6);
}
