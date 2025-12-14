/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235630
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
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4280)) + (((/* implicit */int) var_9)))))))), ((unsigned char)0)));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) var_10)))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))) * (max((((((((/* implicit */int) var_8)) + (2147483647))) >> (((-1058649663) + (1058649675))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)14110)))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_15 |= ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14110)) && (((/* implicit */_Bool) arr_1 [i_0]))))) * (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (unsigned short)51426))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((((/* implicit */_Bool) arr_0 [12U])) ? (arr_0 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) (+(((arr_5 [(short)7] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        var_17 = ((((/* implicit */_Bool) arr_0 [4ULL])) ? (((/* implicit */long long int) 3984484696U)) : (arr_0 [(signed char)6]));
    }
    /* vectorizable */
    for (unsigned short i_2 = 4; i_2 < 14; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_6))));
        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14110))) - (1201533563U)))));
    }
}
