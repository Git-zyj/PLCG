/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205527
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-27859))))))))));
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3692936369U)) ? (min((892852288U), (3097074364U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (max((((/* implicit */unsigned long long int) var_3)), (2673871480613312270ULL)))));
    var_14 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_0)))) ? (((arr_5 [i_0] [i_1] [i_1] [21LL]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))));
                    var_15 = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
    var_16 &= var_7;
}
