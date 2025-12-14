/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5316
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
    var_17 ^= ((/* implicit */int) ((signed char) var_9));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-26505))))), (var_16)))) ? (((((((/* implicit */_Bool) var_6)) || ((_Bool)1))) ? ((+(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */long long int) var_16)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (1988291166)))) ? (min((((/* implicit */unsigned long long int) var_14)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_8)) ? ((+(var_15))) : (((/* implicit */unsigned long long int) max((var_4), (1912833407)))))), (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) 15433023694988038072ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)25)), (var_2))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) /* same iter space */
    {
        var_21 = ((_Bool) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_0 [(short)2]), (arr_0 [i_1])))) ? (max((((/* implicit */int) arr_1 [i_0])), (arr_3 [9ULL]))) : (min((-336738606), (-1988291166))))), (((/* implicit */int) ((signed char) (short)64)))));
            arr_4 [i_0 - 1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((short)-1), (arr_1 [i_0])))))), ((+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_9)))))))));
            arr_5 [i_1] = ((/* implicit */unsigned short) arr_1 [i_1]);
        }
        arr_6 [i_0] = arr_1 [i_0];
        var_23 = ((/* implicit */signed char) var_9);
    }
    for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 4) /* same iter space */
    {
        arr_10 [4] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_11 [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_13)), (arr_1 [i_2])))) ? (arr_2 [i_2 + 1] [i_2]) : (((/* implicit */long long int) var_5)))))));
    }
}
