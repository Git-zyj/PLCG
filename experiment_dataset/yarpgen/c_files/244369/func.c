/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244369
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [(unsigned short)15] = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) (unsigned short)4))))), (((((/* implicit */_Bool) arr_1 [(unsigned short)1])) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) arr_0 [i_0])))))) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)9687)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)49733)) != (((/* implicit */int) arr_1 [i_0])))))))));
        var_16 = var_2;
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_5), ((unsigned short)65535)))), (((((/* implicit */int) (unsigned short)55828)) % (((/* implicit */int) (unsigned short)49729))))))) ? (((/* implicit */int) (unsigned short)49741)) : (((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))));
        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) ((unsigned short) arr_1 [i_1])))));
        var_19 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [i_1])))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_1]))))));
    }
    var_20 = var_10;
}
