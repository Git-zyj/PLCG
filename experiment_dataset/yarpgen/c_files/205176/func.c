/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205176
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
    var_20 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_12)))) > ((~((-(((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_1 [i_0 - 1])))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((long long int) arr_0 [(_Bool)1]));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_19))));
}
