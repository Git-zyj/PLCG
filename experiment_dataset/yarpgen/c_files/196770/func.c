/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196770
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
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (1190711282)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_21 = min((max((arr_12 [i_3]), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_7))))))), (arr_4 [i_2]));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_13 [i_0] [i_0] [i_2] [i_0]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 24; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_1))));
                            var_24 = var_15;
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                            {
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_7))));
                                arr_21 [i_4] [(short)24] [8ULL] [i_4] [i_1] [8ULL] |= arr_6 [i_0];
                            }
                            var_26 = ((/* implicit */unsigned short) var_15);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        for (signed char i_8 = 1; i_8 < 20; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 2) 
            {
                {
                    arr_29 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) arr_13 [i_7] [i_8] [i_7] [(unsigned char)21]);
                    arr_30 [i_9] [i_8 + 2] [i_8] [i_9] = ((/* implicit */unsigned short) var_15);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_14))));
}
