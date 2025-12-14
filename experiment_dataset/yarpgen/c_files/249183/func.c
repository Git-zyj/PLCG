/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249183
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) -4564364411931827963LL)) ? (15910674140561595117ULL) : (18446744073709551595ULL)));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-16)) ? (33554431) : (((/* implicit */int) (unsigned char)0))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (signed char)15))))), (((long long int) var_8))))), (min((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) var_4)), (var_8)))))));
                var_14 = ((/* implicit */long long int) min((((/* implicit */int) ((-4564364411931827963LL) < (min((var_4), (arr_3 [i_1])))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-16)) : (((((/* implicit */int) var_5)) + (((/* implicit */int) (short)1984))))))));
            }
        } 
    } 
}
