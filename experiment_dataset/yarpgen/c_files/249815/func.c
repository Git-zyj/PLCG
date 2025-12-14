/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249815
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
    var_16 = ((/* implicit */short) ((unsigned int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) != (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((arr_0 [i_1]), (var_12))), (var_10)))) ? (((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (arr_4 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) /* same iter space */
    {
        arr_11 [(short)0] = ((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]);
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_2 + 1] [i_3 + 2])) : (((/* implicit */int) arr_15 [i_2 + 1] [i_3 - 1])))))));
            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_7)))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_3 - 1]))) : (1ULL)))) ? (var_2) : (var_11)));
        }
    }
    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) != (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0)))))))))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) var_12)), (var_3))), (((/* implicit */unsigned short) min((var_13), (var_13))))))) : (((/* implicit */int) var_1))));
}
