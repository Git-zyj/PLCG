/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41823
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
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)29))))) % (((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */short) max(((-(((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34827)))))))), (((/* implicit */int) var_14))));
    var_17 = (signed char)32;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */short) max(((((~(18446744073709551610ULL))) & ((~(arr_5 [(_Bool)1] [(unsigned char)4]))))), (min((1206429064685144045ULL), (11181454470200405018ULL)))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) ((unsigned char) var_6)))))));
            }
        } 
    } 
}
