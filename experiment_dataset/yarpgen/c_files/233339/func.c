/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233339
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) arr_0 [5LL]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) 7712200547781957042LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)14))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((signed char) arr_1 [i_0]));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */int) ((long long int) var_3));
                        arr_14 [i_2 + 2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49190)) / (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_12 [i_2]))))) : ((~(arr_4 [i_2 + 1])))));
                        arr_15 [9LL] [i_3] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)59663);
                    }
                } 
            } 
        } 
        var_17 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [6])) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((arr_4 [i_1]), (((/* implicit */unsigned int) (unsigned char)245))))))), (max((((arr_9 [(unsigned char)16] [i_1]) * (arr_9 [(unsigned short)0] [(unsigned short)0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) var_6)))))))));
    }
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) var_14)), (((var_9) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)247))))))) == (-7001101523205813406LL)));
    var_19 &= ((/* implicit */signed char) var_0);
    var_20 = ((/* implicit */signed char) var_9);
    var_21 = ((/* implicit */long long int) var_7);
}
