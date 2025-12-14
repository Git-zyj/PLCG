/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48692
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)205)) && (((/* implicit */_Bool) (unsigned char)50)))))));
    var_16 += ((/* implicit */_Bool) var_0);
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)231)) - (((/* implicit */int) (unsigned char)205))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (unsigned char)223)))));
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)84)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59238))) & (614154547171099953ULL))))));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_20 &= ((/* implicit */unsigned short) ((((((((/* implicit */int) var_6)) >> (((9489133037626133383ULL) - (9489133037626133380ULL))))) - (((/* implicit */int) (_Bool)0)))) ^ (((((/* implicit */int) (unsigned char)141)) >> (((((/* implicit */int) arr_4 [i_1 + 2])) + (19)))))));
        var_21 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1])))), (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 2]))))));
    }
}
