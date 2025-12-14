/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245247
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
    var_14 += ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_4] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0] [i_0]))) : (arr_11 [i_0] [i_3] [i_4]))), (((/* implicit */long long int) arr_3 [i_0] [i_1 - 1] [i_4 - 1]))))) ? (((/* implicit */long long int) max(((+(((/* implicit */int) (short)-3772)))), (((/* implicit */int) (_Bool)1))))) : ((-(((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_4 + 1])) ? (arr_11 [i_4 - 1] [5LL] [i_1 + 1]) : (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2] [i_2]))))))));
                                var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)3772))))) ? (min((arr_0 [i_0] [i_1]), (arr_4 [i_0] [i_2] [(unsigned char)10]))) : (arr_0 [i_0] [i_4])))), (((((arr_5 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_3]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned char)9] [i_0] [i_2] [4LL]))))))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_2]);
                                var_16 = ((/* implicit */unsigned char) ((arr_7 [(signed char)16] [(signed char)16] [i_0]) >= (((/* implicit */long long int) ((arr_12 [i_0] [i_2] [(unsigned char)13] [i_2] [i_0] [i_0]) ? (((/* implicit */int) arr_12 [i_0] [i_4] [i_4 - 1] [i_4] [2ULL] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_4 - 1] [i_4 + 1] [i_4] [i_4] [i_0])))))));
                                arr_15 [(unsigned short)4] [i_3] [(unsigned short)4] [i_2] [(unsigned short)4] [i_0] [(unsigned short)4] &= max((((/* implicit */unsigned long long int) (unsigned char)133)), (10353877399602975686ULL));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-3772)) ? (268435455) : (((/* implicit */int) (unsigned char)40))));
                var_18 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_4 [2ULL] [i_1] [12U]) : (arr_7 [i_0] [i_0] [10U]))) : (arr_7 [i_1 - 1] [i_1 + 1] [(short)14]))), (((/* implicit */long long int) arr_10 [i_0] [(_Bool)1] [(signed char)2] [i_0]))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])))), (arr_7 [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) < (arr_5 [i_0] [i_1]))))) : (max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [(unsigned char)18])) ? (arr_11 [i_0] [i_1] [i_1]) : (arr_7 [(unsigned short)17] [i_1] [i_0]))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + (arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((min((((/* implicit */int) ((var_2) != (((/* implicit */int) var_3))))), (max((268435455), (((/* implicit */int) (short)32762)))))), (((/* implicit */int) var_3))));
}
