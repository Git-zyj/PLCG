/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219676
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
    var_15 *= ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_14)), ((unsigned char)8)))), ((unsigned short)10430))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (max((((/* implicit */unsigned long long int) (short)-9668)), (12581276774320500950ULL)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) min(((~(arr_3 [i_1 + 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14))))))))));
                    arr_7 [i_0] [(unsigned short)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    arr_8 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9511))) >= (3811992509U)));
                    arr_9 [(unsigned char)11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_2] [i_0] [5ULL] [i_0])), (0U)))) ? (((((/* implicit */int) (short)11522)) - (((/* implicit */int) arr_2 [(unsigned short)2] [i_1] [i_2])))) : ((+(((/* implicit */int) var_0))))))) ? (min((((/* implicit */int) ((_Bool) (short)-11497))), ((-(((/* implicit */int) (unsigned char)76)))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 2])) : (((/* implicit */int) (short)4)))));
                }
            } 
        } 
    } 
}
