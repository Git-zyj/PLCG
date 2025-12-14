/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210158
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_15)), (var_3)))))) ? (min((((/* implicit */unsigned long long int) (~(var_4)))), ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)10519)) ? (4294967295U) : (4294967295U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_5))))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = arr_1 [i_0];
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))) == (((arr_1 [i_0]) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))))) + (((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) ^ (((arr_1 [i_0]) / (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_20 = (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))));
    }
    var_21 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) var_1))))) ? (min((var_14), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) (_Bool)1))))))) <= (2732356076U)));
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))))) + (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_3)) + (var_7))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))))));
}
