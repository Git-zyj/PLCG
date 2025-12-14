/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212528
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
    var_19 = ((/* implicit */long long int) var_2);
    var_20 -= ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((var_12) || (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))), (((/* implicit */long long int) var_16))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) var_6);
                        arr_11 [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_2] [i_2] [i_2 - 1]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) -9223372036854775802LL)) : (arr_4 [i_2] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_1 [i_3] [i_3]))))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)65528))))))), ((~(arr_9 [i_2 - 1]))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) arr_5 [i_0]);
        var_23 = ((/* implicit */signed char) max((max((17624142765810039828ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
    }
}
