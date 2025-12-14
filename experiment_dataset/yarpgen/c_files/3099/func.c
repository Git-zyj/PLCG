/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3099
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned short)54378)) : (((/* implicit */int) (signed char)-122))))));
                    var_13 = ((/* implicit */long long int) var_2);
                    arr_9 [i_0] = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & ((~(((/* implicit */int) (signed char)-110))))));
    var_15 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11894262610695611668ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) var_4)))) : (var_0))) : ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65535)))))));
}
