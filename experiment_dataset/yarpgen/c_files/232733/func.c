/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232733
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-43)), ((short)16341)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (0LL)))) ? (((/* implicit */long long int) ((int) 2147483647))) : (((long long int) arr_0 [i_0])))) : (arr_0 [10LL]));
        arr_3 [(signed char)8] |= ((/* implicit */short) ((var_8) & (((/* implicit */unsigned int) var_12))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((11042897069272858840ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))) ? (((/* implicit */long long int) max((-1610545056), (1610545055)))) : (((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) var_5)))))) : (min((8225453649099976088LL), (((/* implicit */long long int) -862586088))))))));
    var_16 = min(((~((~(((/* implicit */int) var_10)))))), (var_1));
}
