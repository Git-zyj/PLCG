/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37326
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
    var_14 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_4 [5] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 274750878)) ? (-274750878) : (-274750879))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 60851801)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) var_1)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)157)) ? (var_10) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) 274750896))))))))))));
        var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)22))));
    }
    var_17 = ((/* implicit */int) var_1);
}
