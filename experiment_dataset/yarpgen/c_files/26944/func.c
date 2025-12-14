/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26944
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
    var_20 = ((/* implicit */signed char) 2147483647);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) (((-(1943426699240273982ULL))) << (((/* implicit */int) ((((/* implicit */_Bool) -2532288506663816841LL)) && (var_4))))));
        arr_2 [i_0] = ((/* implicit */_Bool) var_17);
        arr_3 [(unsigned char)13] = ((/* implicit */unsigned long long int) (((+(var_3))) > (var_3)));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)104)) ? (830371337879512689ULL) : (((/* implicit */unsigned long long int) 4960034533451936690LL)))))));
    }
    var_23 = ((/* implicit */int) ((unsigned char) (((-(var_19))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 9223372036854775807LL)))))));
    var_24 = ((/* implicit */signed char) var_18);
    var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_18))) | (((/* implicit */int) var_5))));
}
