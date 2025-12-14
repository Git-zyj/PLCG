/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19372
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) - (((long long int) (_Bool)1))))));
    var_12 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) 2866841450U)) ? (1846982886666932941LL) : (((/* implicit */long long int) arr_1 [i_1] [i_1])))) : (((/* implicit */long long int) 1428125845U)))));
                arr_5 [(signed char)3] = ((/* implicit */int) max((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_10)))), ((~(((/* implicit */int) (short)13721))))))), (((unsigned int) var_1))));
            }
        } 
    } 
}
