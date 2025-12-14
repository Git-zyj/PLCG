/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39882
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
    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3208281504248287192LL)) ? (((/* implicit */int) (signed char)68)) : (1580309539)));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_1))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-41)), (var_0)))) >> (((unsigned int) var_3))))) ? (max((var_2), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */short) (+((-(((/* implicit */int) (unsigned char)155))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_23 *= (!(var_4));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_2))));
                    }
                } 
            } 
        } 
    }
}
