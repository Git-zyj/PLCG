/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217708
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_3] [(short)2] = ((/* implicit */long long int) max((min((9), (1))), (((/* implicit */int) ((unsigned short) var_9)))));
                            var_20 = ((/* implicit */unsigned short) ((unsigned char) min((min((((/* implicit */unsigned long long int) var_13)), (var_11))), (((/* implicit */unsigned long long int) var_9)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) var_17);
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_11)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10)))))));
                arr_12 [3LL] [i_1] [i_1] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned int) var_0)), (var_2)))))) : (max((((/* implicit */unsigned long long int) -10)), (14194200085662942042ULL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 3) 
        {
            {
                arr_19 [i_4] &= max((((/* implicit */unsigned long long int) max((var_9), (min((var_18), (var_15)))))), (((unsigned long long int) 4294967295U)));
                var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_18), (((/* implicit */unsigned short) var_14)))))) == (((long long int) var_10))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))))))))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((min((var_2), (((/* implicit */unsigned int) var_14)))) + (max((min((var_3), (((/* implicit */unsigned int) var_18)))), (((/* implicit */unsigned int) var_9)))))))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (short i_7 = 2; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((((/* implicit */int) var_14)) / (((/* implicit */int) var_4)))), (((/* implicit */int) min((var_4), (var_5)))))))));
                            var_26 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_15)), (var_7))), (((/* implicit */long long int) max((var_6), (var_6))))));
                            arr_26 [i_4] [i_5 - 1] [i_6] [15U] [19LL] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((250601343U), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) ((((_Bool) var_4)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
