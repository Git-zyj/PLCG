/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40395
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
    var_10 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) (-(((arr_0 [i_1]) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)127))))) : (((/* implicit */int) (signed char)24))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((_Bool) min(((signed char)40), ((signed char)29)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_14 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 2374130274U)) : (var_7))) / (max((var_7), (((/* implicit */long long int) (short)24949))))));
                            arr_13 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-37)) ? (2374130279U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3291))))))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
}
