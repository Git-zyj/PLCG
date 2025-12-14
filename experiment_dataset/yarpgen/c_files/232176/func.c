/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232176
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
    var_10 &= (+((-(((/* implicit */int) var_6)))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_7))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))) ? (var_4) : (var_4)));
                    var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 3997978369U)) ? (0ULL) : (((/* implicit */unsigned long long int) -2012458298)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_14 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_4))))));
                }
            } 
        } 
    } 
}
