/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32966
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (arr_11 [i_0] [i_1] [i_0])))))));
                                arr_15 [i_3] [i_3] = ((/* implicit */long long int) ((unsigned long long int) (~(arr_1 [i_4 + 2]))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 511)) + (((((/* implicit */unsigned int) 531)) - (802630885U)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) < (var_1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))))) : (((/* implicit */int) var_10))));
                                var_13 = ((/* implicit */long long int) ((unsigned long long int) var_2));
                                var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (var_4)))) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_2] [i_2 + 3] [i_2 - 2])) : (((/* implicit */int) var_0)))) >= ((+(((/* implicit */int) arr_0 [i_2]))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                            {
                                var_15 ^= ((/* implicit */signed char) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (arr_3 [i_2 - 2] [i_2 + 2]))), (((/* implicit */long long int) (((+(((/* implicit */int) arr_20 [i_0] [10LL] [i_1] [i_2 - 2] [i_3] [i_3] [i_6])))) * ((+(((/* implicit */int) var_2)))))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_2]), (((/* implicit */long long int) var_0))))))))) - (((arr_11 [i_2 + 1] [i_2 - 3] [i_2 + 3]) / (arr_16 [i_2 + 2] [i_2 - 2] [i_2 + 3] [i_2] [i_2 + 2] [i_6])))));
                                var_16 = ((/* implicit */unsigned short) (~((~(arr_19 [i_2 + 3] [i_2 - 1] [i_3] [i_6] [(unsigned char)20])))));
                                var_17 = ((/* implicit */signed char) ((((((/* implicit */int) arr_13 [i_0] [i_1] [i_2 - 2] [i_2] [i_2 - 2])) << (((var_5) + (4076394505412985075LL))))) <= (((/* implicit */int) ((short) arr_13 [i_0] [i_1] [i_2 - 2] [(signed char)15] [i_6])))));
                            }
                            var_18 = ((/* implicit */unsigned char) max((((((var_3) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2 - 1] [i_3]))))) << (((var_3) - (5351925080495871654LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) var_0))))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), ((!(((_Bool) arr_19 [11] [24] [i_2 - 2] [11] [i_2]))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (5362032817415513442ULL) : (((/* implicit */unsigned long long int) (~(480))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_6 [i_2 + 1] [i_2 + 3] [(unsigned char)5])))) ? ((~(((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 3] [i_2 - 2])))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                        }
                    } 
                } 
                var_22 ^= max((var_3), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_19 [15LL] [0ULL] [15LL] [i_0] [i_1])))) && ((!(((/* implicit */_Bool) arr_20 [(unsigned short)6] [(unsigned short)20] [i_0] [i_0] [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (max((((var_1) - (var_9))), (((/* implicit */long long int) var_4))))));
}
