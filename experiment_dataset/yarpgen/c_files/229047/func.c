/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229047
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)118)) < (((/* implicit */int) (signed char)-65)))) ? (min((min((13404223627762863961ULL), (13497780834069904594ULL))), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)138)) && (((/* implicit */_Bool) -1476868520))))) % (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) var_8))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) ((_Bool) arr_1 [(signed char)15])))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (var_9))), (((/* implicit */unsigned int) var_5))))));
    }
    var_14 = ((/* implicit */unsigned short) var_9);
}
