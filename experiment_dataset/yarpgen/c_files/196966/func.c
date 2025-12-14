/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196966
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
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((980036841) > (((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_3] [i_2]))))));
                        var_21 = ((/* implicit */int) var_3);
                        var_22 = ((/* implicit */long long int) var_14);
                    }
                } 
            } 
        } 
        var_23 = var_4;
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) 6776218039784955874ULL);
        arr_14 [i_4] = ((/* implicit */signed char) var_14);
        var_25 -= ((/* implicit */unsigned short) arr_3 [i_4] [i_4] [(short)1]);
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [1U] [i_4])) ? (min((var_17), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_4] [(unsigned char)10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_27 |= ((/* implicit */signed char) arr_15 [i_5] [i_5]);
        var_28 = var_6;
    }
}
