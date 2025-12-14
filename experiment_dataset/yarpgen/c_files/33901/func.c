/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33901
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
    var_14 = ((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)40649);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((arr_4 [i_1] [i_1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) -5208361102366447837LL)) ? (((/* implicit */int) (short)-8900)) : (((/* implicit */int) (unsigned short)256)))))));
                                arr_17 [i_1] [3ULL] [i_2] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((9858850818590852684ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [i_1])) <= (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((9858850818590852680ULL) * (((/* implicit */unsigned long long int) 16777215))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_9 [i_1]))))) ? (-2861370425534236444LL) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) > (4194304ULL)))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7538919245840437343LL)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) 16383U))))) ? (((/* implicit */int) (unsigned short)3968)) : (-1874973747)))));
                    var_17 = ((/* implicit */int) (_Bool)1);
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) 15213026U))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) / (arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [3U]))) : (((arr_15 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) / (((/* implicit */unsigned long long int) var_6)))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (var_7)))) * (((((/* implicit */_Bool) -6763577288318489919LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) arr_15 [i_5] [i_1] [i_1] [(unsigned short)8] [i_0] [i_0] [i_0]);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) ^ (arr_7 [i_0] [i_1] [i_5])));
                }
                var_21 = ((/* implicit */short) 137438953471LL);
                arr_22 [i_0] [8LL] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((var_8), (-99057998)))), (max((((unsigned long long int) arr_19 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) && ((_Bool)1))))))));
            }
        } 
    } 
}
