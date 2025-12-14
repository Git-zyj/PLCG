/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241568
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(unsigned char)22]))))));
        var_14 |= ((/* implicit */unsigned char) ((short) (-(18312667374881351816ULL))));
        var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_7 [11LL] = ((/* implicit */unsigned char) ((long long int) (~(((((/* implicit */int) (unsigned char)9)) % (((/* implicit */int) arr_4 [(unsigned char)5])))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_5 [i_1]))));
    }
    var_17 = ((/* implicit */unsigned int) var_10);
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((_Bool) 134076698828199800ULL)))));
}
