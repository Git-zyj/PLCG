/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3702
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((10278747860569730500ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [15LL]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_1 [(signed char)20]))))))) : (10278747860569730495ULL)));
        arr_5 [i_0] = ((/* implicit */unsigned char) (-(arr_0 [i_0] [i_0])));
        var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [3ULL] [i_0])) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_0])))) : (arr_2 [i_0] [i_0]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)124)) ? (arr_0 [i_0] [i_0]) : (max((var_6), (((/* implicit */long long int) (short)-12530))))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_12 = ((/* implicit */short) var_1);
        arr_10 [(unsigned short)10] |= ((/* implicit */short) -9223372036854775792LL);
    }
    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((long long int) var_1)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))));
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 8167996213139821113ULL)))))) << (((((/* implicit */int) var_3)) - (60399)))));
}
