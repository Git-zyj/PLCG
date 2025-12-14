/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4943
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
    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)55)), (min(((unsigned short)5844), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -175942463)))))))));
    var_14 = ((/* implicit */_Bool) (short)-12287);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) max((((unsigned long long int) arr_5 [i_2 + 1] [i_1 + 1])), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0)))))))));
                    arr_7 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_1 [i_0])))) ? (((/* implicit */int) var_10)) : (min((arr_0 [i_0]), (((/* implicit */int) var_0))))))));
                }
            } 
        } 
    } 
    var_16 = (-(((((((/* implicit */_Bool) (unsigned char)0)) ? (-328814501) : (((/* implicit */int) (signed char)-99)))) | (((/* implicit */int) var_0)))));
}
