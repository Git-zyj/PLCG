/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24756
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_2] [i_2] [i_3] = ((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_2]))) | (((((/* implicit */unsigned long long int) ((var_17) ? (arr_3 [i_0] [7U] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_2])))))) | (arr_2 [i_0] [(unsigned char)10] [i_2]))));
                            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_7 [i_1] [i_1] [i_0] [i_1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned short) arr_4 [i_0 + 2]))))) ? (((/* implicit */int) ((arr_4 [i_0 + 2]) && (arr_4 [i_0 + 2])))) : ((~(((/* implicit */int) (_Bool)1))))));
                            arr_9 [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_4 [i_2])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11667)) || (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 + 1] [i_2])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_16 [i_0 - 1] [i_0 - 1] [i_4] [i_4] [i_5] [5ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_5] [i_0] [i_0] [i_0 + 1] [i_0])) : ((~(((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) 85254433U)) : (((long long int) 771485707U))));
                                arr_17 [i_6] [i_5] [i_5] [i_4] [i_4 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_10 [i_1 + 1] [i_1 + 1]), (arr_10 [i_1 + 1] [i_6])))), (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_4])) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_4])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1]))))));
                                arr_18 [(signed char)11] [(signed char)11] [i_4] [(signed char)11] [(unsigned char)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))));
                                var_20 ^= ((/* implicit */unsigned short) var_18);
                                arr_19 [(short)0] [11] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(3906229751537522600ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53865)) / (((/* implicit */int) (unsigned short)53841)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11689))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [(unsigned char)7] [i_4] [i_5] [i_5] [i_6]))) * (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (3459331620U) : (((/* implicit */unsigned int) var_4))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)17671))))))))));
}
