/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194715
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) <= (8243500099412436441ULL)));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((2750056484470391710ULL) ^ (461689613106634510ULL)));
        arr_6 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_14 = (-(((/* implicit */int) (unsigned short)26742)));
        arr_10 [i_1] [i_1] = ((/* implicit */short) ((15696687589239159922ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1])) >> (((((/* implicit */int) arr_8 [i_1])) - (238))))))));
    }
    var_15 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((((/* implicit */int) (signed char)32)) >= (((/* implicit */int) var_1)))))))));
    var_16 = ((/* implicit */int) var_7);
}
