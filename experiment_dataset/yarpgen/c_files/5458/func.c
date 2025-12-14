/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5458
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) (-(min((var_11), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_3 - 1]))))));
                            var_15 = var_6;
                            var_16 = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) 5039940578254703719ULL))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 1635254054)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : (var_8)))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
}
