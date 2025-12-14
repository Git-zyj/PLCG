/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244917
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((arr_0 [i_0]) > (arr_0 [i_0])));
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
        var_17 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_18 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 3960740618U)) : (arr_0 [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (2141069661515906027LL) : (-1LL))))));
    }
    var_19 = ((/* implicit */short) ((unsigned int) 1119308114));
    var_20 &= ((/* implicit */short) max((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), ((-(((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned short)55))))))));
    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-536870912)))) ? ((-(((/* implicit */int) (unsigned short)22)))) : (((/* implicit */int) (short)-2107))));
}
