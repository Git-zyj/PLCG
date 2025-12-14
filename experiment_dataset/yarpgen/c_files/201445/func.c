/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201445
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_4))))) : (var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), ((-(((arr_0 [i_0 + 1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)-8365)) : (arr_1 [i_0])))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_0)) : (arr_0 [i_0] [i_0])))));
        var_16 = (+(var_10));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = arr_2 [i_1];
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1 - 1] [5U])))) ? (var_12) : ((~(((/* implicit */int) var_5))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */_Bool) (((-(((/* implicit */int) arr_4 [i_1] [i_1 - 1])))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (arr_5 [(_Bool)1]))))))) && (((/* implicit */_Bool) -30216348))))));
        var_18 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */int) var_3)), (arr_2 [i_1 - 1]))));
    }
}
