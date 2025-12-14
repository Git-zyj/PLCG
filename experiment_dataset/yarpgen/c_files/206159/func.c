/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206159
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) (-((-(min((-2137548557), (((/* implicit */int) arr_0 [i_0]))))))));
        var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) max((var_8), (((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned short)4])))))) && (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-119)) < (((/* implicit */int) arr_2 [i_1])))))) >= (-705962152917724221LL)))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1]))));
        var_22 = ((/* implicit */int) -705962152917724244LL);
    }
    var_23 = (~(((/* implicit */int) (short)16513)));
}
