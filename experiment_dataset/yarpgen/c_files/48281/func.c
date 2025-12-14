/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48281
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))))) ? (max((((/* implicit */int) (unsigned short)56194)), ((~(((/* implicit */int) arr_1 [i_0 - 1] [i_1])))))) : ((-(((/* implicit */int) arr_1 [i_1 + 1] [i_0 - 2]))))));
                var_16 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_3 [i_1 + 1])))) <= ((~(((/* implicit */int) arr_3 [i_1 - 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_13)) | (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))))), (((/* implicit */int) (signed char)59))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(arr_0 [i_2]))))));
        arr_8 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_2 + 2]))));
    }
    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (((~((~(((/* implicit */int) var_1)))))) & (((/* implicit */int) min((arr_10 [i_3 + 2]), (((/* implicit */unsigned char) var_4))))))))));
        arr_11 [4U] = ((/* implicit */long long int) arr_9 [i_3 - 1]);
        var_20 = ((/* implicit */short) arr_3 [i_3 + 1]);
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) arr_1 [16ULL] [i_3])), (12U)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)103)) && (((/* implicit */_Bool) arr_1 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_3])))));
    }
}
