/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208382
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
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-31)) || (((/* implicit */_Bool) 10599128477075744608ULL)))) || (((/* implicit */_Bool) (unsigned short)862)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] [4LL] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-31))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) + (((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((unsigned int) (signed char)31)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) || (((/* implicit */_Bool) var_7)))))))))));
                var_22 &= ((/* implicit */unsigned long long int) min((((long long int) arr_1 [i_1 + 2])), (((/* implicit */long long int) var_1))));
            }
        } 
    } 
}
