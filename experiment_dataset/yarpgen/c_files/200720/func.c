/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200720
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 17421899522770871251ULL))));
    var_14 = ((/* implicit */unsigned int) 17421899522770871251ULL);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [10U] = ((/* implicit */unsigned long long int) ((unsigned int) (-(17421899522770871256ULL))));
        var_15 = ((/* implicit */unsigned int) 1024844550938680380ULL);
    }
    for (unsigned int i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3])) | (((/* implicit */int) var_10))))));
        arr_6 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) 1125899906842623ULL)) ? (((/* implicit */int) (short)-12967)) : (((/* implicit */int) (unsigned short)3955))))))), (max((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1 - 1] [(short)21]))))), (arr_5 [i_1 - 1])))));
        var_17 ^= var_2;
    }
    var_18 = ((/* implicit */unsigned long long int) 4190293639U);
    var_19 |= ((/* implicit */unsigned short) var_2);
}
