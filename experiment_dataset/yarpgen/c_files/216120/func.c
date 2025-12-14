/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216120
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(var_1))))));
    var_17 = ((/* implicit */signed char) var_2);
    var_18 = ((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))) != (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (90405720U))), (((/* implicit */unsigned int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3739900779U)))))) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_9) ? (var_4) : (((/* implicit */unsigned long long int) 555066492U)))))))));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (short)1)))))) ^ (arr_2 [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])))) ? (var_3) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))))))))));
    }
}
