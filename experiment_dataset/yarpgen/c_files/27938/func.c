/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27938
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
    var_10 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) >> (((/* implicit */int) ((((((/* implicit */int) var_1)) > (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) var_1)))))));
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (signed char)-124)) ? (-1857717525) : (-3))))) % (((/* implicit */int) max((((/* implicit */short) (signed char)40)), (var_7))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (unsigned short)0);
                var_13 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((2442978871978369069LL), (((/* implicit */long long int) var_4))))))) ? (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (signed char)-24)) : (var_4))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)15687)) : (((/* implicit */int) (signed char)126))))));
            }
        } 
    } 
    var_14 |= ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)128)))))));
    var_15 = ((/* implicit */unsigned long long int) 1857717512);
}
