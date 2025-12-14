/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215236
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
    var_18 = ((/* implicit */long long int) ((short) var_1));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)1936)) && (var_3))))) % ((+(((/* implicit */int) ((short) 5566833305083544901ULL)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), ((~(arr_5 [i_0] [i_1] [i_2] [i_0])))));
                        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_2]))));
                        var_20 += ((/* implicit */long long int) ((((/* implicit */int) (short)-6568)) >= (((/* implicit */int) (short)18905))));
                        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 2176006225U)) : (8048968323770249503ULL)))))))) + (((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */long long int) var_0)) : (9223372036854775807LL)))));
                    }
                    for (long long int i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)24379)))) : (max((((/* implicit */unsigned int) var_8)), (arr_4 [i_0] [i_0])))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((var_15) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2] [i_0])) : (14244771305334980626ULL))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-10329)))))))));
                        var_24 = ((/* implicit */short) min((var_24), (((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16383U)) ? (var_0) : (3615806197U)))) && (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) 1056964608U)))))))));
                    }
                    var_25 = ((/* implicit */short) arr_12 [i_0] [i_0] [(unsigned short)2] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
