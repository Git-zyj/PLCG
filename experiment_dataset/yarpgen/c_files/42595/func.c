/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42595
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
    var_10 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)214)), ((short)-18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned int) var_3)), (var_4)))))) ? (((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (var_4)))))) : (max((var_2), (((/* implicit */unsigned long long int) var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))));
        var_12 = ((/* implicit */long long int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 1])) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_5) : (((/* implicit */int) arr_0 [i_0]))))));
            arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((arr_0 [i_0]) || (((/* implicit */_Bool) arr_3 [i_1 - 1])))) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [(unsigned short)6])) | (((/* implicit */int) arr_1 [i_1 - 1]))));
        }
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)44))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_2 [(short)9] [(short)9] [i_2]))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)6])))));
    }
    var_15 = ((/* implicit */signed char) var_7);
}
