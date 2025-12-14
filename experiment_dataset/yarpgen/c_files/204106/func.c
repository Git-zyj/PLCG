/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204106
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
    var_10 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_2))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)123)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) >= (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))))))));
        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) > (((/* implicit */int) (unsigned short)65535))))))))));
    }
    var_13 = ((/* implicit */_Bool) (-((~(((var_2) << (((((/* implicit */int) var_8)) - (9)))))))));
    var_14 |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned short)65518)) + (((/* implicit */int) var_3)))))), (var_4)));
}
