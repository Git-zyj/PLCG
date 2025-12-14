/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46466
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(3072268407U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-17743)) || (((/* implicit */_Bool) min((459157669U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 1]))))))))) : (((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0 - 4]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)5419)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((459157669U) <= (var_11))))) : (((((/* implicit */_Bool) 0U)) ? (arr_0 [i_0] [(short)7]) : (var_2)))))));
        var_15 = min((((/* implicit */unsigned int) (-(((((/* implicit */int) (short)0)) + (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))))), (507028996U));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1812738237U)) ? (((/* implicit */int) arr_3 [(unsigned char)6])) : (((/* implicit */int) (unsigned char)251))))) || (((/* implicit */_Bool) 1812738238U))));
        var_17 = arr_4 [i_1] [4LL];
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_2 [i_1]))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_4 [i_1] [(unsigned char)6]))))));
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) max((min((var_6), (((/* implicit */unsigned int) arr_13 [i_2] [i_3] [i_2] [i_5])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_15 [i_3] [i_2]) : (var_2)))) ? ((-(((/* implicit */int) (short)6018)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3437225182U))))))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_15 [i_3] [i_3]) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) >> (((arr_8 [i_2] [i_3]) - (2432989402U))))))))), (arr_17 [(short)16]))))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [10LL] [i_2] [10LL] [5U]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) * (var_9)))))));
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((var_7) + (((/* implicit */long long int) 4294967295U))))));
}
