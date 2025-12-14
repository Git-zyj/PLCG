/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208636
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
    var_10 = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2 + 1] [i_2 + 1]))) != (var_9)))) > (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -5150321779994782331LL)), (7431722238224304686ULL)))) ? (((/* implicit */int) (short)-8720)) : (((/* implicit */int) (!((_Bool)1))))))));
                }
            } 
        } 
    } 
    var_12 = (-(((((/* implicit */_Bool) (+(0U)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -8867398705369612377LL)) ? (((/* implicit */unsigned int) var_4)) : (var_6))) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
}
