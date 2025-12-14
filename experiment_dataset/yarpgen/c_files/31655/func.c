/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31655
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
    var_18 = ((/* implicit */unsigned char) var_0);
    var_19 = ((/* implicit */signed char) min((8064461362985816900ULL), (((/* implicit */unsigned long long int) (unsigned short)6615))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_3)) ? (3743265178U) : (((/* implicit */unsigned int) 788018370)))) << (((5497016195304597813LL) - (5497016195304597808LL))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [11LL] [11LL] [i_0])) ? (((/* implicit */int) (unsigned short)6941)) : (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_10)))))))));
                    arr_8 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) -1962640399)) : (170030982U)));
                }
            } 
        } 
    } 
}
