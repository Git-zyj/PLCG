/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49493
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] [(unsigned char)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)15))));
                arr_8 [i_0] = max((((/* implicit */unsigned long long int) (unsigned char)7)), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)240))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : ((~(17794760565375021891ULL))))));
                var_12 = ((/* implicit */unsigned char) (~(min((var_11), (var_9)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0ULL) : (var_7)))))))));
                    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_0)), (min((((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (var_6))), (var_4)))));
                    var_15 -= ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
    } 
}
