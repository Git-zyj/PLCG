/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234294
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((unsigned char) ((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned char) (signed char)64)))))))));
                var_18 |= ((/* implicit */short) (-((-(-8992822785466440492LL)))));
                var_19 -= ((/* implicit */short) (~((((~(((/* implicit */int) var_10)))) & (max((((/* implicit */int) var_14)), (262143)))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) 63LL)) || (((/* implicit */_Bool) (signed char)-2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-2)) * (((/* implicit */int) (signed char)15))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) & (11093254166177355696ULL))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_16), (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) ((signed char) 4294967278U))) : (((/* implicit */int) (signed char)23)))))));
    var_22 = ((/* implicit */_Bool) var_2);
}
