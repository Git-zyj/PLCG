/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45808
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
    var_11 &= max((var_8), (((/* implicit */long long int) ((unsigned short) (~(4160749568U))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) ((unsigned long long int) 486606758));
                arr_4 [i_1] [(unsigned char)12] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_0))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 2] [12ULL] [i_1 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (536854528ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23018)))));
                arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8895)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [6U] [i_1] [i_1])))))) ? (max((var_9), (((/* implicit */unsigned long long int) (short)-21495)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (arr_0 [i_0] [i_0]))))) >= (((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */int) ((((/* implicit */_Bool) (short)22320)) || (((/* implicit */_Bool) (short)-21495))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (4017119004323783279ULL)));
    var_14 &= ((/* implicit */unsigned long long int) var_3);
}
