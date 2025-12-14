/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249383
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
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = (unsigned char)42;
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((unsigned char) var_1)))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((long long int) min((((long long int) var_2)), (((/* implicit */long long int) ((arr_2 [i_2]) ? (-2013265045) : (2013265045))))))))));
                    var_19 = ((/* implicit */_Bool) max((((arr_2 [i_0 + 1]) ? (((unsigned int) var_1)) : (max((((/* implicit */unsigned int) -2013265023)), (var_16))))), (((/* implicit */unsigned int) var_11))));
                    var_20 = ((/* implicit */unsigned char) -2013265023);
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) ((long long int) 2013265023));
}
