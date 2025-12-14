/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28400
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_10) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10))))))))));
    var_14 = ((/* implicit */int) max((var_14), ((~((~(((/* implicit */int) var_6))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (unsigned char)31);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_2);
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) var_7);
        arr_6 [i_1] [i_1] = arr_5 [i_1 + 4];
        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1 + 1])) && (((/* implicit */_Bool) (unsigned short)1907)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) || (var_2))))) : (max((arr_4 [i_1]), (var_9)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min(((short)-12098), (var_3))))))), (((long long int) min((((/* implicit */unsigned long long int) 3176349932054640156LL)), (arr_7 [i_2]))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_5 [i_2]))));
        var_19 = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned long long int) ((long long int) arr_4 [9]))), (((((/* implicit */unsigned long long int) -1048576)) * (arr_7 [i_2]))))));
    }
}
