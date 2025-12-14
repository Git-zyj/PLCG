/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214557
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = (_Bool)1;
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_19 += ((/* implicit */signed char) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((var_15), (((/* implicit */short) var_16)))))))));
                    arr_7 [(signed char)19] [i_2] [i_2] = ((/* implicit */_Bool) max((((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_2]), (((/* implicit */int) arr_2 [i_0]))))) : (max((((/* implicit */unsigned long long int) (short)15961)), (5982672357417673618ULL))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_6 [i_0] [i_0])), (3917513626048628510LL))) < (((/* implicit */long long int) ((int) var_15))))))));
                }
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned int) var_2)))))))) == (var_12)));
    var_21 = var_2;
}
