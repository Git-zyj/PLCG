/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51211
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (arr_1 [i_0])))), (min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (var_10))))), ((-(max((((/* implicit */long long int) (short)32767)), (var_10)))))));
        var_14 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(2169299442U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (arr_1 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))))) : (((unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    var_17 = ((/* implicit */unsigned char) var_9);
    var_18 = ((/* implicit */unsigned long long int) (+(var_12)));
}
