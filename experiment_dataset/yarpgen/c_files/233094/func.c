/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233094
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
    var_11 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))) * (var_4)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9942487121558785993ULL))));
                    arr_7 [i_0 - 1] [i_0] [i_0] [i_0] = ((unsigned long long int) 18446744073709551615ULL);
                    var_13 = ((((/* implicit */unsigned int) ((int) -1484876670157033268LL))) - (var_3));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((+(var_10))) + (((/* implicit */long long int) ((((/* implicit */int) (short)16368)) + (((/* implicit */int) (signed char)-22)))))))), (var_4)));
    var_15 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_9)), ((~(536870911LL)))))));
    var_16 ^= ((/* implicit */short) max((((/* implicit */unsigned int) ((_Bool) (+(var_3))))), (max((((/* implicit */unsigned int) ((-284264605) >= (((/* implicit */int) var_2))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (3248006272U)))))));
}
