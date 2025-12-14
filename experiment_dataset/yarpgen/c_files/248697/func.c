/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248697
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
    var_11 = ((var_5) | (var_3));
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) ((2097151LL) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_1)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */long long int) 3997725596U)) != (arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (unsigned short)33787)) : (((int) (+(arr_0 [i_0])))));
        arr_5 [i_0] = ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0])), ((unsigned short)33787)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [i_0] [(short)11])))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
    }
    var_13 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
    var_14 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */short) max((((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))))), (((var_3) > (var_3))))))));
}
