/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25311
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) (+(((int) (short)1536))));
                    arr_7 [(signed char)14] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_4 [i_0] [(_Bool)1] [(short)23])) < (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-1537)))) >= (((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) (short)-1552)))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                arr_22 [i_3] [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) + (arr_15 [i_3] [i_6] [i_5] [i_3])))) ? ((-(arr_6 [i_4] [i_4] [i_4] [i_6 - 2]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
                                var_14 = ((/* implicit */short) ((signed char) (-(4194288))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_7))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_24 [3LL])) != (((/* implicit */int) var_4))))))))));
                                var_17 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((long long int) (short)1536)) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(short)21] [i_4] [i_4]))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_17 [i_8] [i_5] [i_5] [(short)14])) ? (((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [(short)12])) : (var_8))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) arr_19 [(short)20] [i_4] [i_3])) : (((/* implicit */int) var_5))))), (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_1 [i_3] [i_4])) - (18212))))))))));
                }
            } 
        } 
    } 
}
