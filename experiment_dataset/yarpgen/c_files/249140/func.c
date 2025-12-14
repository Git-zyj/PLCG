/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249140
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_18 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
        arr_6 [7U] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12873))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */long long int) var_3))))));
    }
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967296ULL)) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) ((unsigned char) var_11)))))) ? (var_1) : (((/* implicit */int) ((short) var_10)))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 10698398293210086755ULL)) ? (var_1) : (var_4))), (var_1))))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((+((~(((/* implicit */int) var_10)))))) : ((~(((/* implicit */int) var_10)))))))));
}
