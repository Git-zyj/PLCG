/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201848
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
    for (signed char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))) > (511ULL))))) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)30))) + (-334838648738581115LL))))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_2]);
                    var_18 -= ((/* implicit */int) (!(min((arr_6 [i_0 - 4] [i_0 - 4]), (arr_6 [i_0 + 1] [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_19 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), (var_9));
    var_20 -= ((/* implicit */signed char) 8388607);
    var_21 &= ((/* implicit */unsigned short) var_16);
    var_22 = ((unsigned short) (signed char)1);
}
