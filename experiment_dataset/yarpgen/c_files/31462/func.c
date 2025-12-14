/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31462
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
    var_10 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_7))))) ? (max(((~(1494301276611984299LL))), (((var_6) ? (var_9) : (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1494301276611984302LL)) ? (var_0) : (((/* implicit */int) var_3)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) min((min((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) : (arr_1 [i_0] [i_1]))), (((/* implicit */long long int) ((5U) >> (((arr_1 [i_0] [i_0]) + (5138892398316944212LL)))))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? ((-(arr_1 [i_1] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -15994728)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
                arr_6 [i_1] [i_0] [2U] &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_3 [i_0])))) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) 8541949535085079682ULL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
            }
        } 
    } 
}
