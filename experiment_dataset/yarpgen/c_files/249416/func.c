/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249416
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) var_6);
                var_16 = ((/* implicit */_Bool) ((arr_1 [(signed char)13] [2LL]) << (((((int) (~(var_9)))) - (1619670226)))));
                arr_4 [0U] [i_0 - 1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 - 1])))) ? (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
                arr_5 [14LL] [i_1] [i_1] = ((/* implicit */short) max((9869200072797701097ULL), (((9869200072797701083ULL) & (((/* implicit */unsigned long long int) 38443966U))))));
                arr_6 [i_1] [i_1] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 + 1]))))), ((-(arr_2 [i_0 - 1] [i_1 - 2]))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
    var_18 = (~(max((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)95)), (8388096)))), (133693440LL))));
}
