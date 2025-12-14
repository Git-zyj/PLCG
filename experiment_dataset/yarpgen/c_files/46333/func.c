/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46333
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_10))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [(short)15] [i_2] [i_3] = ((9223372036854775794LL) / (((((/* implicit */_Bool) -9223372036854775791LL)) ? (9223372036854775788LL) : (((((/* implicit */_Bool) 1601008260767629167ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34830))) : (-9223372036854775795LL))))));
                        arr_13 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */long long int) arr_6 [i_0] [i_3])) : (9223372036854775794LL)))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_0])), (arr_7 [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_11 [i_2])))))));
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */signed char) max(((((~(1601008260767629151ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5213295566334730588LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_7)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((var_3), (((/* implicit */unsigned long long int) var_5))))))));
}
