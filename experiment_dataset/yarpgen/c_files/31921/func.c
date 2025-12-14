/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31921
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
    var_16 = ((/* implicit */int) (~(var_2)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_1] [i_1 + 1])), ((+(arr_2 [i_0])))))) ? (((/* implicit */int) ((short) ((short) arr_4 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 148855924)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0]))))) ? (max((-148855913), (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_4 [i_0]))))))));
                arr_6 [i_0] [i_1 + 2] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (6433216993415925264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2])))))) ? (((/* implicit */int) ((short) arr_3 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (-148855901) : (((/* implicit */int) arr_3 [i_1 - 1]))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -148855911)) || (((/* implicit */_Bool) 148855891))))), (464300616U)))) ? (var_7) : ((-(var_13)))));
    var_19 ^= ((/* implicit */long long int) var_3);
}
