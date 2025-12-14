/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41716
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0 - 1] |= ((/* implicit */int) min((arr_0 [i_0 + 2] [i_0 + 2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1501547293451444534ULL)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) var_4))))) && (arr_0 [i_0 - 1] [i_0 - 1])))));
        arr_3 [i_0 + 2] [(unsigned char)9] = ((/* implicit */unsigned long long int) max((var_6), (((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_6))) : (min((arr_1 [i_0 - 2]), (((/* implicit */long long int) var_7))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) var_3);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4115869436U)))));
        arr_8 [i_1] = ((unsigned long long int) (_Bool)1);
    }
    var_13 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((unsigned short) var_12)))))));
    var_14 ^= var_1;
}
