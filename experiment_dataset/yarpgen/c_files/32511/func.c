/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32511
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) -5947543404037001899LL)) ? (((/* implicit */unsigned long long int) -709144226)) : (10548755418863721142ULL))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_13)) : (10548755418863721142ULL)))))) ? ((~((-(33554431ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) -6LL))))))));
    var_21 = ((/* implicit */unsigned short) var_17);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((((_Bool) arr_1 [i_0])) ? (((((/* implicit */int) (unsigned char)107)) / (((/* implicit */int) (unsigned short)56355)))) : ((~(((/* implicit */int) (unsigned char)72)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)26)))))));
                    var_23 = (-(arr_1 [i_1]));
                }
            } 
        } 
    }
}
