/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31508
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
    var_12 = ((/* implicit */int) var_0);
    var_13 = ((/* implicit */short) (_Bool)0);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((var_8) + (9223372036854775807LL))) << (((((((((/* implicit */int) (short)-8003)) - ((-(((/* implicit */int) var_0)))))) + (7894))) - (20)))));
        var_14 = ((/* implicit */unsigned char) ((long long int) var_2));
        arr_3 [i_0] [i_0] = min((((/* implicit */int) (signed char)15)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46147)) ? (((/* implicit */int) (unsigned short)19389)) : (((/* implicit */int) (unsigned short)19389))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)19405)))));
    }
    var_15 = ((/* implicit */short) min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (3276531377725180750ULL)))))))));
    var_16 = ((/* implicit */short) (~(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_9)))))));
}
