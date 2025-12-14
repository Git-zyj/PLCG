/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2953
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (arr_1 [i_4]))))) <= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_14 [i_2]) : (((/* implicit */unsigned long long int) var_11)))))) ? (min((((/* implicit */long long int) var_18)), (var_1))) : (((5677521113097525366LL) ^ (2529107001705555954LL)))));
                                arr_15 [i_0] [i_1] [i_1] [6ULL] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) 221663734U))));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */long long int) var_9);
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_14)) <= (((unsigned long long int) arr_14 [i_2]))))), (var_2)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}
