/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42425
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */int) ((short) (signed char)-73))), (arr_1 [i_0 + 2]))));
        var_15 = ((/* implicit */unsigned char) (signed char)-71);
        arr_6 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) ^ (((var_3) | (((/* implicit */unsigned int) arr_1 [i_0 - 2])))));
    }
    var_16 = var_11;
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) ((0U) >= (1212985949U)))))))));
}
