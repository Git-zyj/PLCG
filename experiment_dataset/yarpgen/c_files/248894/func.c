/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248894
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (18061552496736610217ULL)))))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) 13ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (-2657073906492479167LL))) : (min((2657073906492479167LL), (((/* implicit */long long int) (signed char)127))))))));
    var_11 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((short) (unsigned short)65535))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) (unsigned short)65535))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) var_2)))))) : (max((18446744073709551603ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) >> ((((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) <= (var_9)))))) + (27)))));
        arr_3 [i_0] [i_0] = var_6;
        arr_4 [i_0] = ((/* implicit */int) 1229932240U);
    }
}
