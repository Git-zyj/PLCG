/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209346
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
    var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) var_12))))) >> ((~((-(((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_1 [i_0])) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))))))));
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((int) arr_1 [i_0 - 2]))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_0 [i_0 + 2]))))) : ((-(((/* implicit */int) var_1)))))) != (((/* implicit */int) var_2))));
    }
    var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)13)) ? (1210892568191981479ULL) : (17451448556060672ULL))), (((/* implicit */unsigned long long int) (unsigned char)211))));
    var_22 -= ((/* implicit */int) var_10);
}
