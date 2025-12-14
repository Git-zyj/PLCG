/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32658
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [8])) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)10])))))) ? (((/* implicit */int) arr_3 [2ULL] [10ULL])) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(_Bool)1])) == (((/* implicit */int) arr_3 [(_Bool)1] [(unsigned short)8]))))) <= (((((/* implicit */_Bool) arr_0 [0ULL])) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_4 [6])))))))));
                var_11 = ((/* implicit */_Bool) (short)-32758);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)-13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_6 [i_1] [i_2] [0] [i_0])) : (max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])), (((arr_10 [i_0] [i_1] [i_2]) / (((/* implicit */int) arr_14 [i_4] [i_3] [i_1] [i_0]))))))));
                                var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_0 [i_4])))) ? (((unsigned long long int) arr_0 [i_4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_4]), (arr_0 [i_4])))))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned long long int) max((arr_6 [i_1] [i_2] [i_3] [i_4]), (arr_6 [i_0] [i_1] [(short)0] [i_4])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_3);
}
