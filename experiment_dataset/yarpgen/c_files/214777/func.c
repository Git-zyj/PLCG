/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214777
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
    var_20 = ((/* implicit */_Bool) max((var_6), (var_18)));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) & (((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_16)))))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_13)), (var_19))))) : (((int) (+(var_8))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)2490)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
            arr_9 [i_0] = ((((/* implicit */int) (_Bool)1)) << ((((-(((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_14)))))) + (1668))));
            arr_10 [i_0] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_11)), (min((var_16), (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) (((+(arr_5 [i_0] [i_1]))) != (((((/* implicit */_Bool) var_19)) ? (arr_5 [i_0] [(short)16]) : (((/* implicit */long long int) 4294967266U)))))))));
            arr_11 [i_0] [6U] [i_0] = ((/* implicit */short) ((max((((((/* implicit */int) (signed char)125)) ^ (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_6 [i_0] [i_0])) & (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0])))))) | (((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_0] [i_0])), (var_0))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)-23236), (((/* implicit */short) (_Bool)1))))) | ((-(((/* implicit */int) var_5))))));
            var_23 ^= ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_7)) : (arr_14 [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (arr_5 [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned long long int) arr_3 [(short)0])) : (arr_14 [i_0]))))) != (((/* implicit */unsigned long long int) (~(var_7)))));
            arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967266U), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_18)))))))) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]))));
        }
    }
}
