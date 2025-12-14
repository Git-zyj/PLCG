/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27851
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
    var_14 = ((/* implicit */short) var_12);
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)12))))))) * (((long long int) 1184147091))));
    var_16 = ((/* implicit */unsigned int) -1184147096);
    var_17 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) var_13)), ((+(var_11)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_0))) && (((/* implicit */_Bool) ((max((1184147091), (((/* implicit */int) (signed char)15)))) - (((/* implicit */int) ((signed char) var_8))))))));
                arr_6 [i_0] [i_1] = ((((/* implicit */int) ((_Bool) (~(135543657871797672LL))))) * (((/* implicit */int) (unsigned char)218)));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_5)), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (arr_5 [i_0] [(short)2] [(short)2]))), (((/* implicit */unsigned long long int) ((long long int) var_3)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [i_2 + 2])))));
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((int) ((arr_5 [15] [15] [(short)15]) + (((/* implicit */unsigned long long int) 1184147091)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_16 [i_4 + 1] [i_3] [i_2 - 1] [5LL] [5LL] = ((/* implicit */signed char) arr_2 [i_2] [i_4 + 2]);
                                arr_17 [i_4] [i_4] [i_4] [i_4] [(unsigned char)11] = ((/* implicit */short) (unsigned char)18);
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_21 = ((/* implicit */short) min((min((((/* implicit */long long int) arr_19 [i_5] [i_0] [i_5])), (arr_9 [i_0] [i_5]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1184147091)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_6] = ((/* implicit */int) ((unsigned long long int) -1184147091));
                                arr_27 [i_0] [i_0] [9ULL] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_11 [i_7] [i_6] [i_5] [i_1] [i_0])) + (((/* implicit */int) (unsigned char)192))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_8 [i_6]) : (arr_8 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)142)))))) : (arr_8 [i_0])));
                                arr_28 [i_6] [9LL] = ((/* implicit */_Bool) (unsigned char)49);
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))), (((/* implicit */int) min(((signed char)59), (var_2)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
