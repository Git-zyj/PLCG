/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35027
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10))))) != (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (short)28998))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23714)) ? (((/* implicit */unsigned long long int) var_5)) : (0ULL)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (unsigned char)147)) / (((/* implicit */int) (unsigned short)8467)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_3);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 2147483647)) == (907522199U)));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned short) 4294967295U));
    }
    var_14 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1353449835U)) ^ (var_3)))))))));
}
