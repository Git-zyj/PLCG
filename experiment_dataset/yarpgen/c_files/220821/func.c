/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220821
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
    var_14 ^= ((/* implicit */long long int) (unsigned short)65535);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) (short)20622)) : (((/* implicit */int) (short)-20615))));
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_4)))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) -1408798373301130017LL)) ? (5374353898772538756LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46770))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) arr_8 [(unsigned short)1]);
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_1])), (((((/* implicit */_Bool) arr_3 [(unsigned short)10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [5LL]))) : (5374353898772538756LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned short) arr_8 [i_1])), (arr_2 [(unsigned short)10])))))) : ((+(min((var_4), (((/* implicit */long long int) arr_3 [(short)10]))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_6 [i_1]))));
    }
}
