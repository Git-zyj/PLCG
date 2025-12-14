/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196463
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
    var_18 = ((/* implicit */signed char) var_17);
    var_19 = ((signed char) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */signed char) max(((~(((/* implicit */int) arr_0 [1ULL] [i_2 - 1])))), ((-(((/* implicit */int) arr_0 [i_2] [i_2 - 1]))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32751)) ? (var_10) : (((/* implicit */int) var_9)))))))) != (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_2 - 1])))))))));
                    arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)5)), (1293849592108115115ULL)))) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2])) : ((+(6535582407960880587ULL)))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 11911161665748671028ULL)))) : (min((216172782113783808ULL), (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((var_13), (((/* implicit */long long int) var_9)))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2 - 1] = ((/* implicit */short) ((max((arr_7 [i_2 - 1] [i_2 - 1] [i_2]), (((/* implicit */unsigned int) (short)23671)))) | (((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [(unsigned short)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_7 [i_2 - 1] [i_2 - 1] [i_2])))));
                }
            } 
        } 
    } 
}
