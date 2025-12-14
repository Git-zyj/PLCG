/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246221
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */short) arr_5 [i_1]);
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((short) var_1))) % (((/* implicit */int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))))) ^ (arr_5 [i_0])));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (((!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */int) arr_3 [i_1] [5LL]))))))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) arr_0 [i_1])) : (arr_5 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_13))))))) : (((/* implicit */long long int) var_8)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_5] [i_3] [i_2])) ? (arr_11 [i_6] [i_3] [i_3]) : (var_4)))))) ? (((/* implicit */unsigned int) var_14)) : (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [(short)10] [i_3] [18]) != (((/* implicit */int) arr_15 [i_5] [i_3] [i_4] [i_5] [(short)15] [i_4])))))) * (((unsigned int) arr_9 [i_3]))))));
                                arr_19 [i_3] [i_5] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) var_1)) & (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_17 [i_2] [i_3] [i_3] [i_5] [i_6])) ^ (arr_9 [i_2])))) ? (((/* implicit */unsigned int) ((arr_11 [i_6] [i_3] [i_3]) << (((arr_14 [i_6] [i_3] [i_4] [i_5]) - (305708646U)))))) : (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_5] [(short)21] [i_4] [i_3] [i_2]))) : (var_6)))))));
                                var_19 = (((-(((arr_14 [i_2] [i_2] [10] [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15))))))))));
                            }
                        } 
                    } 
                    arr_20 [i_3] [18] [i_4] = ((/* implicit */_Bool) max(((-((-(((/* implicit */int) arr_13 [i_2] [(unsigned char)1] [i_4])))))), (((int) arr_12 [i_2] [i_3]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 2; i_7 < 14; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            {
                arr_25 [i_7] [i_8] [i_8] = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) arr_13 [21LL] [i_7 - 2] [i_7]))))), ((~(((long long int) arr_11 [i_7] [i_7] [i_7]))))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        {
                            arr_32 [13] [i_8] [i_8] [(_Bool)1] [(unsigned char)7] [i_7 + 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((arr_11 [i_7 + 4] [i_7] [i_10]) | (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((int) var_9))) : (min((((/* implicit */unsigned int) var_14)), (arr_17 [i_7] [i_8] [i_8] [i_8] [(short)2])))))));
                            var_20 = arr_11 [i_7] [i_8] [i_9];
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (var_11) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (var_4)))) : (((/* implicit */int) var_0))))), (var_5)));
}
