/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236916
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
    var_19 *= ((/* implicit */int) ((((((/* implicit */_Bool) ((int) var_6))) || (((/* implicit */_Bool) ((signed char) var_17))))) && (((/* implicit */_Bool) max((((/* implicit */int) (signed char)120)), (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (short)14454)))))))));
    var_20 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [5LL] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-14441)) ? (arr_1 [(unsigned char)9] [i_0 - 1]) : (arr_1 [i_0] [i_0 + 1]))), (max((arr_1 [i_0] [i_0 - 1]), (arr_1 [(unsigned short)12] [i_0 - 1])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) && ((!(((/* implicit */_Bool) arr_3 [(signed char)17] [(short)0])))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (var_16)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((4286578688U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))))), (((var_17) ? (((/* implicit */int) (short)14464)) : (((/* implicit */int) var_11))))))) : (max((7748917561197864442ULL), (((/* implicit */unsigned long long int) (short)4095))))));
}
