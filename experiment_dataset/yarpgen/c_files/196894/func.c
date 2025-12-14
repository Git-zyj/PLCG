/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196894
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) var_8)) ? (4053725645576518626ULL) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */long long int) var_5)) : (var_14)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775800LL))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */signed char) 4053725645576518635ULL);
        var_17 = ((/* implicit */_Bool) ((long long int) min((4053725645576518626ULL), (((/* implicit */unsigned long long int) var_13)))));
    }
    var_18 = (_Bool)1;
    var_19 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned long long int) -3613471819696550438LL)) : (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)2), ((unsigned short)16384))))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) -1520108800292626141LL)) ? (4288424833738877392LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10827))))) : (((/* implicit */long long int) var_8)))))));
}
