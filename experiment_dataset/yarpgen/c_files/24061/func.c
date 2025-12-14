/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24061
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = 0;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
            var_18 = var_14;
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((arr_0 [i_0 - 1]) & (((/* implicit */unsigned long long int) var_15)))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) max((arr_2 [i_3]), (((/* implicit */unsigned int) var_7))))) : (max((((/* implicit */long long int) var_14)), (-3724751650809895951LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514)))));
                    arr_14 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) 3724751650809895943LL)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 14777849829887092053ULL))))));
                    var_20 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_14)), (1415407675587880909ULL))), (((/* implicit */unsigned long long int) max((arr_5 [i_0 - 1] [i_2 - 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(short)12])) && (((/* implicit */_Bool) (signed char)0))))))))));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_7)))) + (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned int) arr_7 [i_0]);
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4])) | (((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) var_16);
        var_22 *= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_11 [i_4] [i_4]))))));
    }
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (unsigned short)35171)), (14660655257136744926ULL))))))));
}
