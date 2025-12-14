/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195778
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1 + 1] [i_1]) | (arr_1 [i_1 - 2] [i_1 - 2])))) ? (((((/* implicit */_Bool) 1421968280U)) ? (arr_1 [i_1 + 2] [i_1]) : (arr_1 [i_1 + 1] [i_1 + 1]))) : (((arr_1 [i_1 + 1] [i_1 + 1]) & (arr_1 [i_1 + 3] [i_1 + 3])))));
                            arr_13 [i_0] [i_3] [i_2] = arr_6 [i_0] [i_2] [i_3];
                            var_16 ^= ((/* implicit */unsigned short) ((2872999010U) + (1421968280U)));
                            var_17 = ((/* implicit */long long int) ((min((((((/* implicit */unsigned long long int) var_5)) / (var_13))), (((/* implicit */unsigned long long int) 2872999023U)))) >> ((((~((+(arr_12 [6] [(_Bool)1] [i_2] [i_2]))))) - (3609883283275411079LL)))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */signed char) arr_0 [i_1]);
                arr_14 [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) ((long long int) 4294967295U));
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_7) + (((/* implicit */long long int) var_9)))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 2872999016U)) ? (var_1) : (var_7))), ((~(-7861974884194233582LL))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((690435171) << (((max((((/* implicit */int) (!(var_12)))), (var_2))) - (1180037155)))));
}
