/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198448
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
    var_10 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */unsigned short) (-((-(-190086728)))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)33)))) < (((((/* implicit */_Bool) var_0)) ? (var_3) : (-190086710))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_3))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)0);
        arr_7 [i_1] = ((/* implicit */int) var_4);
    }
}
