/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194032
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) (-(((var_3) ? (((/* implicit */int) (unsigned short)53371)) : (1206917439))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] |= var_9;
                    var_10 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) var_1)))));
                }
            } 
        } 
        var_11 = ((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(6727997539933782379LL))))))))));
    }
    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        var_12 &= ((/* implicit */long long int) (+(((((/* implicit */int) arr_13 [i_3])) + (var_6)))));
        var_13 = ((/* implicit */unsigned int) 6727997539933782379LL);
        arr_16 [i_3] [i_3] = ((/* implicit */_Bool) (~(((((var_6) > (((/* implicit */int) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))));
    }
    var_14 = ((/* implicit */int) ((signed char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2396)))))));
}
