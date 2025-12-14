/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249766
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) (-(4607182418800017408LL)));
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */int) var_10);
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((-4607182418800017397LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1])) : (((/* implicit */int) arr_3 [4ULL] [i_1 - 1]))))) : ((+(arr_0 [i_0]))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [6] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((4607182418800017393LL) != (((/* implicit */long long int) arr_8 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 2])))))) <= (((long long int) arr_0 [i_1 - 3]))));
                        var_14 = ((/* implicit */_Bool) var_11);
                        var_15 = ((/* implicit */unsigned short) min((((((/* implicit */int) max((arr_10 [i_0] [1ULL] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */signed char) (_Bool)1))))) % (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(unsigned char)2] [i_1] [i_3])))), (((/* implicit */int) arr_3 [i_2] [i_0]))));
                    }
                } 
            } 
            arr_12 [i_0] [(short)6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 - 2])) ? (((((/* implicit */_Bool) 9096209828970703088ULL)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (short)-21182)))) : (((/* implicit */int) (!(arr_1 [i_0] [i_1])))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-113)) < (((/* implicit */int) (unsigned short)63164)))))));
            arr_13 [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_9 [i_1]);
        }
    }
    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_1)) * (var_3)))) && (((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) 8710314754006867807ULL)))))))))));
}
