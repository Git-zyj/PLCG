/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49589
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) 18446744073709551592ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_5)))) : (var_13)))) || ((!(((/* implicit */_Bool) (short)1497))))));
                        arr_9 [i_3 + 1] [i_2] [i_1] [i_1] [i_0] [0LL] = ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min(((unsigned char)159), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_1))));
        arr_14 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11788653019087042196ULL)) ? (((/* implicit */int) (short)28156)) : (((/* implicit */int) (short)1466))));
    }
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
}
