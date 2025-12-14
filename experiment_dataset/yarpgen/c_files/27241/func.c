/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27241
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
    var_16 = ((/* implicit */signed char) ((int) (unsigned short)13280));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_17 += ((/* implicit */signed char) 14322413950949720795ULL);
        var_18 -= ((/* implicit */unsigned char) arr_1 [i_0] [i_0 - 3]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1])) + (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_1]))))));
        var_20 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) arr_3 [i_1]))))));
        var_21 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((unsigned long long int) (signed char)-63))))));
        var_22 = ((/* implicit */int) 14322413950949720786ULL);
    }
}
