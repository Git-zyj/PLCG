/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47376
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 -= max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_5 [i_0 + 1]), (arr_1 [i_1 + 1])))) < (var_17)))), (arr_6 [i_0]));
                    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)7))));
                    var_22 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (signed char)60)))), ((!(((/* implicit */_Bool) var_4))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_19);
    var_24 ^= ((/* implicit */unsigned short) (signed char)-66);
}
