/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194371
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
    var_12 -= ((unsigned short) (~(((/* implicit */int) (short)14780))));
    var_13 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (-376460015) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) 2610113274U)) ? (1411589590568932266ULL) : (((/* implicit */unsigned long long int) -7829831922249867302LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_0 + 3]))))))) ? ((~(((arr_1 [i_0] [i_1]) / (6029555894686757496LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-97)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) ((signed char) 17035154483140619334ULL))))))));
                var_15 = ((/* implicit */unsigned short) ((unsigned long long int) min(((unsigned short)20798), (((/* implicit */unsigned short) (signed char)96)))));
            }
        } 
    } 
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((int) -1100270296))) ? (var_7) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_17 += ((/* implicit */short) (~(((/* implicit */int) var_8))));
}
