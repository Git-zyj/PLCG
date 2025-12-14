/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200412
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
    var_16 -= ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 *= ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                    var_18 = ((/* implicit */unsigned short) var_7);
                }
                arr_8 [i_1] [i_1 - 1] [i_1] = ((/* implicit */int) arr_3 [i_1]);
                var_19 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [14U] [14U] [4])), (var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_1] [i_1 - 1]), (arr_2 [i_0] [15U] [16U]))))))) : ((~(((((/* implicit */int) arr_5 [(unsigned char)16] [(unsigned char)16] [i_1])) << (((var_3) - (4831875662757113706LL)))))))));
                var_20 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) arr_1 [i_0] [i_1]))));
                arr_9 [i_0] [2U] [4ULL] |= ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [18LL] [i_1 - 1] [10LL]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [(short)18] [i_0] [(short)18])), (arr_1 [i_0] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_15);
}
