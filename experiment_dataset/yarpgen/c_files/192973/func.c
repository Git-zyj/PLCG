/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192973
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)))) ? (min((var_11), (((/* implicit */unsigned int) var_3)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_11))))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1)))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) % (((var_14) ? (((/* implicit */int) (unsigned short)65535)) : ((-(((/* implicit */int) (short)-32766))))))));
    var_21 = ((/* implicit */unsigned long long int) ((unsigned int) var_18));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0 - 1] [i_0] [i_2] = ((/* implicit */int) ((_Bool) var_3));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [10U])) & (((/* implicit */int) var_3))))) & ((~(arr_8 [11ULL] [11ULL] [i_0] [i_2]))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0)))))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_7 [i_1 - 1] [i_0 + 2])))))));
                }
            } 
        } 
    } 
}
