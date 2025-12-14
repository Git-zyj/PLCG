/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249573
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
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-23))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)19143)), (var_8))))))), (-9223372036854775781LL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_17 |= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> ((((-(arr_1 [i_0 + 1]))) - (672745904545226526LL)))));
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)))) << (((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [(signed char)10])))) - (54189)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15936))))) ? (max((var_6), (arr_1 [i_0]))) : (max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0])))))));
    }
}
