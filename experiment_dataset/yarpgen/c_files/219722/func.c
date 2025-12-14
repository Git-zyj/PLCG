/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219722
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) (signed char)-116);
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)231)), (18446744073709551615ULL)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) -16))) ? (-16) : (max((((/* implicit */int) arr_0 [i_0] [i_0])), (19)))));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) arr_1 [i_1] [i_1]);
        var_22 = ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_4 [6U]))))))) : (max((min((arr_3 [5ULL] [i_1]), (((/* implicit */unsigned long long int) 2147483647)))), (max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))))));
    }
    var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) var_1)), (var_6)));
}
