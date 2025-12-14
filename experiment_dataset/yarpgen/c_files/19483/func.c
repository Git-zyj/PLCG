/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19483
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_16 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
                    var_18 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [12LL]))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_9 [11ULL] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((min(((signed char)106), ((signed char)(-127 - 1)))), (((/* implicit */signed char) arr_5 [i_3] [i_3] [i_3]))))), (max((1638812252295955501LL), (((/* implicit */long long int) 1203268179))))));
        var_20 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])), (arr_4 [i_3])))), (arr_0 [(short)13] [i_3]))), (max((min((arr_0 [i_3] [i_3]), (((/* implicit */long long int) arr_3 [i_3] [i_3] [i_3 - 1])))), (min((arr_0 [(signed char)0] [(signed char)0]), (((/* implicit */long long int) arr_1 [i_3]))))))));
        var_21 = ((/* implicit */_Bool) arr_8 [1LL]);
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_3 [i_3] [i_3] [i_3])), (arr_0 [(short)17] [(short)17]))), (arr_6 [i_3] [i_3 - 1] [i_3] [9ULL])))), (min((((/* implicit */unsigned long long int) arr_4 [i_3 - 1])), (arr_8 [i_3]))))))));
    }
    var_23 = ((/* implicit */long long int) var_9);
    var_24 = ((/* implicit */int) var_7);
    var_25 = ((/* implicit */unsigned int) var_0);
}
