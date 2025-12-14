/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211533
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)60)))))) < (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)38))))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) < (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38627))) : (15564435125495967041ULL)))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)32767)), (2961237000U)))) ? (((long long int) (signed char)81)) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) % (3593779594U))))));
                var_17 = ((/* implicit */unsigned int) (~(1754401568)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (+((~(((/* implicit */int) ((_Bool) (_Bool)1)))))));
}
