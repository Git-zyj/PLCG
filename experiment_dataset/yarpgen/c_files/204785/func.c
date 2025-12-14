/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204785
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
    var_20 -= ((/* implicit */unsigned int) var_12);
    var_21 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((max((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) arr_5 [i_2] [i_2] [i_2])), (arr_4 [14] [(unsigned short)5]))))) == (((arr_7 [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [(signed char)1]))) == (arr_7 [i_0] [(signed char)21] [(signed char)21]))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned char) min(((unsigned short)44918), (((/* implicit */unsigned short) (signed char)-1))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) ((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [5LL])) % (arr_4 [i_1] [i_1]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_24 = arr_15 [i_0] [i_0] [i_1] [i_2] [(signed char)4] [i_6];
                                var_25 = ((/* implicit */unsigned short) min((var_1), (((/* implicit */int) arr_20 [0U] [14LL] [(_Bool)1] [17ULL] [i_1] [(unsigned char)13]))));
                                arr_22 [i_5] [(short)15] [(short)15] [i_0] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_15))))), ((+(((var_5) * (((/* implicit */unsigned long long int) var_18))))))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] = ((((((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [21]))))) / (min((arr_9 [16ULL] [i_1] [(unsigned char)4]), (((/* implicit */long long int) arr_11 [i_0] [(unsigned char)21] [i_0] [(signed char)19] [i_0])))))) | (((/* implicit */long long int) max((((((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0])) & (var_7))), (((/* implicit */unsigned int) arr_19 [i_2] [i_0] [i_1] [i_1] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) var_5);
}
