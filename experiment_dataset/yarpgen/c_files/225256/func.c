/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225256
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
    var_10 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) var_7)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_2 [(unsigned short)16]))));
        var_12 = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)127)))) - (1547622)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        var_13 &= ((/* implicit */signed char) (((-(((/* implicit */int) arr_0 [(signed char)17])))) == (((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
    }
}
