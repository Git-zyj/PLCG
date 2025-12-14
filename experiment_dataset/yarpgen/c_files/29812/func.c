/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29812
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
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_14 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 4])) ? (arr_1 [i_0 + 2] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 + 3])))));
        var_15 = (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_6)), (arr_2 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1337)) | (((/* implicit */int) (unsigned short)53285))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_17 |= ((short) (~(((/* implicit */int) (short)-1337))));
        var_18 &= ((/* implicit */long long int) arr_1 [i_1] [i_1]);
    }
    var_19 = ((/* implicit */short) var_7);
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 += ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((int) var_1)))) > ((+(((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (short)-3919)) : (var_13)))))));
}
