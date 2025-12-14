/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239369
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) (+(1349611219U)));
                arr_6 [i_0] [i_1 - 3] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) 63LL);
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-24)) : (((/* implicit */int) (unsigned short)65535)))))))));
                                var_16 = ((/* implicit */unsigned long long int) (_Bool)0);
                                var_17 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65522))))), (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_4])) ? (var_3) : (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) (signed char)3))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_26 [i_2 + 1] [i_3] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) min((max((((/* implicit */unsigned int) (short)-32757)), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (short)24)))))))) ^ (max((((long long int) 1341064934U)), (((/* implicit */long long int) var_6))))));
                                var_18 = ((/* implicit */short) max((max((arr_16 [i_3] [i_3] [i_3] [i_4] [i_7] [i_8]), (arr_1 [i_8]))), (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) var_2)))))));
                                arr_27 [i_2] [i_8] [i_7] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_15 [i_2] [i_3] [i_7] [i_7 - 2] [i_2]);
                                arr_28 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) arr_1 [i_7])) : (var_9)));
                                var_19 = ((/* implicit */signed char) (short)22474);
                            }
                        } 
                    } 
                    arr_29 [i_3] [0ULL] [i_3] = ((/* implicit */signed char) arr_4 [i_4] [i_4 + 4] [(unsigned char)10]);
                }
            } 
        } 
    } 
}
