/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231219
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 3310894533U))) ? (((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_2] [i_4 - 1])) ? (arr_11 [i_3 - 1] [i_1 - 4] [i_2] [(signed char)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)43)))))));
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)62718)), (984072762U)))) ? (((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30882))) : (arr_6 [i_1 - 3] [i_3 - 2]))) : (((var_4) * (3310894533U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_20 [4] [i_2] [i_1] [i_0] [4] = ((/* implicit */unsigned char) ((unsigned short) ((arr_10 [i_5] [i_1 - 4] [i_2 - 3] [i_1 - 4]) & (((/* implicit */long long int) 2693329237U)))));
                                var_12 -= ((/* implicit */unsigned int) max(((!(((984072768U) == (3310894528U))))), (((((/* implicit */int) arr_15 [i_2 - 1] [i_5] [i_1 - 1] [i_1] [i_1] [i_5] [i_1])) <= (arr_16 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1])))));
                                arr_21 [i_6] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_16 [7LL] [i_1] [(_Bool)1] [(unsigned char)3] [7LL] [(unsigned char)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_6 [i_5] [i_6]))))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3310894528U)) ? (80127694) : (((/* implicit */int) (_Bool)1))))) : (((984072762U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))))))) - (80127675U)))));
                                arr_22 [i_2] = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_7 [i_0]))))))) * (min((984072763U), (((/* implicit */unsigned int) (unsigned short)2047))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_2);
}
