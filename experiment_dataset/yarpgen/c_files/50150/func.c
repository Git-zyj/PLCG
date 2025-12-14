/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50150
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_19 |= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] = arr_0 [i_0];
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */short) ((arr_1 [i_1 - 2]) != (arr_1 [i_1 - 2])))), (arr_0 [i_1 - 1])));
        arr_6 [i_1] [i_1] = (((+(((/* implicit */int) arr_0 [i_1 - 2])))) << ((((((-(((/* implicit */int) arr_0 [i_1 - 3])))) + (6089))) - (17))));
        var_21 = (((+(((/* implicit */int) var_12)))) >= ((-(((/* implicit */int) (short)32767)))));
    }
    var_22 = ((/* implicit */unsigned short) var_16);
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)236)))))))))));
    var_24 = ((/* implicit */short) 208993943);
    var_25 = ((/* implicit */unsigned char) var_3);
}
