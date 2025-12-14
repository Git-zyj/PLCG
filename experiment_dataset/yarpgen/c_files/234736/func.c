/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234736
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
    var_20 = ((/* implicit */unsigned int) var_19);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)26446)) : (((/* implicit */int) (unsigned short)26446))))) < (max((var_12), (((/* implicit */unsigned int) var_8)))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (max((var_5), (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) max((511U), (((/* implicit */unsigned int) var_16))))) ? (min((((/* implicit */unsigned int) var_6)), (1001627968U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39089)))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) var_4);
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_15)));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) + (max((var_10), (((((/* implicit */_Bool) (unsigned short)26446)) ? (1344671705) : (((/* implicit */int) (unsigned short)45779))))))));
}
