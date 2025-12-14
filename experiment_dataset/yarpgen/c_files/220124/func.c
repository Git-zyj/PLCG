/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220124
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(var_0))))));
    var_14 = ((/* implicit */unsigned long long int) var_3);
    var_15 ^= ((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((5870994073400346816LL), (5133231691133836222LL))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) min(((short)-27416), (((/* implicit */short) (signed char)-35)))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-115)) ? (min((7ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) (-(var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(1737706527))) >= (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_5))))))))));
                arr_5 [(short)12] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-29)) : (269891654)))) ? (var_2) : (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)2])))));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned char) (+(var_9)));
}
