/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51983
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
    var_20 ^= ((/* implicit */short) var_3);
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))))) >> (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -21LL))))), ((unsigned short)10)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) var_0);
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((21LL) > (27LL))))) / (((((/* implicit */_Bool) 14LL)) ? (2085225329716898022ULL) : (((/* implicit */unsigned long long int) 14LL)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (20LL)))))))))))));
            }
        } 
    } 
}
