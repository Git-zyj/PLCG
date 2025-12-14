/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44962
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((unsigned int) 2147483638))) : (((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1] [(short)13] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3 - 2] [i_1])) ? (((/* implicit */int) max((arr_8 [i_0] [i_0] [i_2] [i_3] [i_1]), (arr_8 [i_1] [i_2] [10ULL] [i_1] [i_1])))) : (((/* implicit */int) arr_8 [i_0] [(short)6] [i_0] [i_2] [i_1]))));
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)55)) || ((!(((/* implicit */_Bool) (unsigned char)0))))))) : (((/* implicit */int) (_Bool)1)))))));
                            arr_11 [i_1] [4ULL] [4ULL] [i_3] = ((/* implicit */_Bool) max((((arr_5 [i_1] [i_3] [i_3] [i_1]) / (arr_5 [i_1] [i_3] [i_2] [i_1]))), (((/* implicit */int) ((_Bool) arr_5 [i_1] [i_1] [i_1] [i_1])))));
                            arr_12 [i_1] = ((/* implicit */unsigned int) var_7);
                            arr_13 [i_1] [12U] [i_2] [9U] [i_1] [i_1] = ((/* implicit */short) arr_1 [i_1]);
                        }
                    } 
                } 
                var_13 += ((signed char) ((unsigned int) arr_2 [8] [8]));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_5 [i_5] [i_4 + 2] [i_4 + 1] [i_4 + 3])) ? (arr_19 [i_5] [i_4 + 1]) : (arr_19 [i_5] [i_4 + 2]))));
                    arr_23 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) arr_8 [i_4] [(unsigned char)9] [i_6] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_4] [10ULL] [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_8 [i_4 + 2] [(unsigned char)9] [i_5] [i_5] [i_5])))) : ((((~(((/* implicit */int) (signed char)58)))) ^ (((/* implicit */int) arr_21 [i_4] [6ULL] [i_5]))))));
                }
            } 
        } 
    } 
}
