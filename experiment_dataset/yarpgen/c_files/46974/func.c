/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46974
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) | (var_6)))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(unsigned short)3] [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)63))))));
                    var_12 |= ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
}
