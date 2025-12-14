/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40981
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((int) (unsigned char)182));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 4294967295U))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)5))))), (1221997884))))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (+(((((/* implicit */_Bool) ((15429185895603917376ULL) & (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((((-1980366312) + (2147483647))) >> (((3949218474881612381LL) - (3949218474881612354LL)))))) : (3949218474881612387LL))))))));
            }
        } 
    } 
    var_19 |= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((~(min((var_4), (3243835889104050706LL))))));
}
