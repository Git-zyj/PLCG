/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199449
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
    var_18 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 61453659U)) ? (((/* implicit */long long int) -1210479857)) : (var_3)))) ? (((((/* implicit */_Bool) 14268994730594346373ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_2))) : (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    var_19 = ((/* implicit */long long int) ((min((((/* implicit */long long int) min((var_17), (((/* implicit */unsigned int) (unsigned short)6))))), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) var_2)))))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)80)))));
    var_20 ^= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 4177749343115205264ULL)))))) + (var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) (~((~(4177749343115205242ULL)))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_3))) : (max((-5693104688619817628LL), (var_3)))))));
                }
            } 
        } 
    } 
}
