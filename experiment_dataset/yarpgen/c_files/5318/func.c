/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5318
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
    var_15 *= ((((/* implicit */_Bool) var_12)) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2)))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) ((unsigned long long int) ((long long int) arr_1 [i_0 - 1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_6 [i_2 - 2])) >> (((min((8168848748887969589LL), (((/* implicit */long long int) arr_5 [i_2])))) - (102LL))))), (((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [12ULL]))))))));
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_3] [(_Bool)1] [i_3] [i_3] [i_3 - 2] [i_3 - 3] [i_3])) ? (arr_14 [1U] [1U] [20] [i_3] [i_3 - 1] [i_3 + 1] [i_3]) : (arr_10 [i_0] [i_1] [i_0 - 2] [i_0]))) << (((arr_2 [i_0 - 2] [i_0] [i_0]) / (arr_2 [i_0 - 1] [i_0] [i_0 - 1])))));
                                var_19 = ((/* implicit */unsigned int) (signed char)-113);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 + 4])))))))));
                                arr_20 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 299853036)) ? (((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_1])) : (16722209380255905306ULL)))))) + (((((/* implicit */_Bool) arr_12 [i_0] [11ULL])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 5776575440800267546ULL)))))) : (min((((/* implicit */long long int) arr_17 [i_0])), (1398312014446875375LL)))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((_Bool) max((max(((unsigned short)55502), (((/* implicit */unsigned short) arr_15 [i_0] [i_5])))), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_0)))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_2 - 2] = ((/* implicit */long long int) var_14);
                }
            } 
        } 
    } 
}
