/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204420
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
    var_17 |= ((((/* implicit */long long int) var_3)) == (((((/* implicit */_Bool) 6162076964670175707LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4611677222334365696LL))));
    var_18 ^= ((/* implicit */int) var_7);
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_11)))) - (var_3))), ((~(((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_20 += (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) -901123893)) : (6796979844045875619LL)))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_3] [i_1])), (max((((/* implicit */long long int) (_Bool)1)), (7083763515900273218LL)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] |= ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [i_1] [i_0])) * ((((!(((/* implicit */_Bool) -6796979844045875620LL)))) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
            arr_15 [i_0] = ((unsigned short) 6796979844045875637LL);
        }
        arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)17678)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)48335)))))) : (((/* implicit */int) var_7))));
        arr_17 [i_0] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_9 [10LL] [i_0] [i_0] [10LL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */long long int) 84464414)) : (110173591923451401LL)))))))));
        var_24 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned short)8)) || (((/* implicit */_Bool) arr_4 [i_0]))))));
    }
}
