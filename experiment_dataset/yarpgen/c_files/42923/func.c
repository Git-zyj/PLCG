/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42923
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) (short)-32757);
                    var_20 = ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) > (-6660131269114821626LL));
                    var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (signed char)-11))) ? (max((arr_6 [i_0] [i_0 + 2] [i_0] [(signed char)3]), (min((1125899906842623ULL), (((/* implicit */unsigned long long int) 4064U)))))) : (((((/* implicit */_Bool) max((4074U), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [13U]))))) ? (min((((/* implicit */unsigned long long int) -2616710612587622320LL)), (18445618173802708992ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (1255388760541279946ULL) : (((/* implicit */unsigned long long int) 3811044942U)))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-31)) + (2147483647))) >> (((18445618173802708993ULL) - (18445618173802708968ULL))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)-32766))))))) : (((/* implicit */int) (unsigned short)31679))));
    var_23 = ((/* implicit */unsigned long long int) var_4);
}
