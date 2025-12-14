/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45899
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
    var_10 |= ((/* implicit */unsigned int) ((var_7) < (var_5)));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(1073741824U)))), (((unsigned long long int) var_1))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (16777215) : (((/* implicit */int) var_1)))) % (((((/* implicit */int) var_4)) & (((/* implicit */int) var_2)))))))));
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_9))) : (max((-594512476111664784LL), (4622176959812117278LL))))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_2)) - (49))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) -16777216)), (1099511627772LL))), (((/* implicit */long long int) (~(4294967293U))))));
                    var_14 = ((/* implicit */long long int) min((((int) ((unsigned int) -628675860))), ((+(arr_3 [i_0 + 1])))));
                    var_15 &= ((/* implicit */_Bool) arr_0 [4ULL]);
                }
            } 
        } 
    } 
}
