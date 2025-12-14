/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249842
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)11552))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        var_19 = ((/* implicit */short) (-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((long long int) var_17));
                    arr_14 [i_1] [(short)14] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1152919305583591424ULL)))) : (((arr_11 [i_1] [i_1] [i_1]) | (arr_8 [i_3] [i_2])))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 787934071670096219LL)))));
    }
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((~(17293824768125960193ULL))) << (0U))))));
    var_23 |= ((/* implicit */unsigned short) ((1152919305583591397ULL) << (((((/* implicit */int) (unsigned char)216)) - (155)))));
    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((_Bool) (~(16597922623764694408ULL))))), (((((/* implicit */unsigned long long int) ((unsigned int) var_15))) * (var_17)))));
}
