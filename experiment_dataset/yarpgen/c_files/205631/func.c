/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205631
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
    var_18 = ((/* implicit */unsigned int) 144106391982833664LL);
    var_19 = ((/* implicit */long long int) var_17);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) >= (((min((((/* implicit */long long int) (unsigned short)25195)), (-144106391982833676LL))) | (max((((/* implicit */long long int) var_0)), (var_10)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_21 = ((unsigned int) 888045255U);
        var_22 = ((/* implicit */unsigned char) ((1747913056U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))));
    }
    for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_23 &= ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)160)), (var_9))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) ((unsigned char) arr_5 [i_1])))));
        var_25 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) : (var_9))) > (((/* implicit */unsigned long long int) var_10)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (8675987623458904240LL)))) ? (((((/* implicit */_Bool) 7916834954586636158ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (max((1375567425102411559ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 1747913038U)) : (arr_4 [i_1])))) : (6004409511101819042ULL)))));
        arr_6 [i_1] = ((/* implicit */int) ((_Bool) -144106391982833665LL));
    }
    var_26 = ((/* implicit */unsigned long long int) (unsigned char)166);
}
