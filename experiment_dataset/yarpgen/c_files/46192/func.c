/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46192
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
    var_13 *= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((11536648108580565787ULL) > (((/* implicit */unsigned long long int) var_8)))))))));
    var_14 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
    var_15 = ((/* implicit */signed char) var_7);
    var_16 = ((/* implicit */signed char) (~(var_10)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) (unsigned char)255);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_9))));
        arr_2 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4398046511103LL)) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (unsigned char)4);
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)15)) % (((/* implicit */int) (short)-29400))));
    }
}
