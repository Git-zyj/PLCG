/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215643
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_0 [i_0 + 3])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_3)));
        var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)0)), (((long long int) (-(((/* implicit */int) var_4)))))));
    }
    for (int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 0ULL))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) (((-(var_11))) / (((/* implicit */int) var_15))))) * ((+((+(var_13)))))))));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */int) arr_7 [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ^ ((~(arr_7 [i_2])))));
    }
    var_19 = ((/* implicit */unsigned long long int) max((var_6), ((~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_2))))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((int) (~(var_7)))))));
    var_21 = ((/* implicit */_Bool) var_1);
}
