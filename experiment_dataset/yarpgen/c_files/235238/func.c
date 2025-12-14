/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235238
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */short) ((arr_2 [i_0 - 3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192)))));
        var_16 = ((/* implicit */unsigned char) var_9);
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((short) arr_3 [i_0]))) : (((((/* implicit */int) (unsigned short)42331)) ^ (((/* implicit */int) (unsigned short)23214))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) >= (arr_2 [i_0 + 1])));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] |= ((/* implicit */int) arr_7 [i_1]);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)42338)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23187)))))) : (arr_7 [i_1 + 1])));
    }
    for (short i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            arr_13 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (arr_11 [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_6 [19ULL] [i_3]))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 1]))) : (var_10)))))));
        }
        var_20 += ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)42319)), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (arr_11 [(short)13] [(short)13] [i_2]))), (((/* implicit */int) max(((unsigned short)23217), (((/* implicit */unsigned short) var_14)))))))));
        var_21 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) max(((unsigned short)23204), (((/* implicit */unsigned short) arr_9 [i_2 + 1] [i_2 + 1]))))), (min((var_1), (((/* implicit */long long int) var_8)))))), (min((((/* implicit */long long int) max((var_3), ((unsigned short)23192)))), (((long long int) var_6))))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_7))));
    var_23 = ((/* implicit */signed char) var_7);
}
