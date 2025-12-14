/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226350
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
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1 + 2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73))) | (4294967295U)))));
                var_17 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (signed char)3))))), (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 15; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((9567260876350471865ULL), (((/* implicit */unsigned long long int) arr_7 [i_2]))))) && (((/* implicit */_Bool) var_4))))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_12 [i_4] [i_2] [i_4] = ((((/* implicit */_Bool) ((arr_8 [i_2] [i_2 + 2] [i_2 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2 + 3] [i_2 - 4]))) : (var_9)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                    arr_13 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2]);
                }
            }
        } 
    } 
    var_20 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))));
    var_21 = ((/* implicit */long long int) var_10);
}
