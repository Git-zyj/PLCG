/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2058
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [(signed char)22] = ((/* implicit */short) (+(((/* implicit */int) max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1]))))));
                    var_10 += ((/* implicit */signed char) max((arr_0 [10ULL]), ((~(arr_0 [i_0 - 1])))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((unsigned int) (-(((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) max((var_8), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (max((((/* implicit */int) var_7)), (var_2))) : (((/* implicit */int) var_5)))))));
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(var_4)))) ? (max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)39)))) : (min((((/* implicit */unsigned long long int) (unsigned char)25)), (var_8))))) != (((/* implicit */unsigned long long int) (~(-1))))));
}
