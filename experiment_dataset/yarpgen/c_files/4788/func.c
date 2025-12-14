/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4788
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
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned short)0))));
        var_16 ^= ((/* implicit */int) 3265119260130523514ULL);
    }
    for (unsigned int i_1 = 4; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) (_Bool)1);
        arr_6 [i_1] = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-116)));
    }
    var_18 = ((/* implicit */signed char) var_7);
    var_19 = ((/* implicit */signed char) var_2);
    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_12)), (5933399847449331076LL)))))) ? (((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_4))))) | (((/* implicit */int) (_Bool)1)))) : (((var_10) ? (((((-1941252440) + (2147483647))) >> (((((/* implicit */int) (unsigned char)34)) - (16))))) : (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_4)) + (32427)))))))));
    var_21 = ((/* implicit */unsigned long long int) max((-115918586), (((/* implicit */int) (unsigned short)48942))));
}
