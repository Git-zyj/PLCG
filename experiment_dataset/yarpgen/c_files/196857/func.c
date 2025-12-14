/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196857
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)0)))))));
    var_19 = ((_Bool) var_5);
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_12))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))));
        var_22 = ((/* implicit */long long int) (((+(((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1)))))) != ((+(((/* implicit */int) ((12063991478762621532ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((unsigned long long int) min((var_16), (((/* implicit */unsigned int) arr_1 [i_0]))))) <= (((/* implicit */unsigned long long int) var_12)))))));
        arr_3 [18ULL] &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
    }
}
