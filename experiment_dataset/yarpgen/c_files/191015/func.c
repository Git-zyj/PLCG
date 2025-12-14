/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191015
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) max((var_3), (var_3)))), (var_9)))) ? (min((((((/* implicit */_Bool) -173409695)) ? (173409694) : (((/* implicit */int) (signed char)119)))), ((-(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 ^= ((/* implicit */long long int) (((!((_Bool)1))) ? ((+(18446744073709551607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned short)21])))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_1 [i_1]))));
                    arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_4 [i_1]))))) & (((((/* implicit */int) (unsigned short)65512)) & (173409724)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0]))), (max((((/* implicit */unsigned long long int) (unsigned short)4275)), (945615659396122713ULL)))))));
                    var_13 = ((/* implicit */short) 4294967295U);
                }
            } 
        } 
    } 
}
