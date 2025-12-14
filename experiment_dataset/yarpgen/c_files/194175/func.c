/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194175
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (unsigned char)166);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 1] [6ULL])))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_0])))))));
        var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)168))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)76)))));
    }
    var_14 = ((/* implicit */unsigned long long int) (unsigned char)156);
    var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21273))) : (1358047832593670191ULL)))));
}
