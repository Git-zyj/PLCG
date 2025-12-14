/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244190
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (1099511562240ULL))) + (((/* implicit */unsigned long long int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1099511562233ULL)) ? (((((/* implicit */_Bool) 1099511562238ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((signed char) var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) var_5);
                                var_17 += (signed char)-59;
                                var_18 -= (-(((/* implicit */int) (signed char)-113)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
