/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29950
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
    var_16 = ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (-1502020292)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) 1502020291))))), (arr_0 [i_2])));
                    var_19 = ((/* implicit */unsigned int) (((((_Bool)1) ? (max((((/* implicit */long long int) var_8)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))))) << (((((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)87)))) ^ (((/* implicit */int) var_14)))) - (50256)))));
                }
            } 
        } 
    } 
}
