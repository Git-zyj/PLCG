/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48491
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
    for (int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = (((+(((((/* implicit */_Bool) arr_1 [(unsigned short)9] [(unsigned short)9])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned char)237)))))) ^ ((+(((/* implicit */int) (unsigned short)10812)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((+((-9223372036854775807LL - 1LL)))) == (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        var_18 = min((min((((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))))), (((/* implicit */unsigned long long int) var_14)));
        var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) 2147483647))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) != ((-(((/* implicit */int) (unsigned char)134))))));
        arr_6 [i_1] = ((unsigned char) ((unsigned short) (unsigned char)245));
    }
    var_21 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned short) var_6))));
}
