/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207855
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
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)222);
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_11 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29412)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_10 = (+(((unsigned long long int) arr_9 [i_2 - 3] [i_2 + 1] [i_2 + 4] [i_2 - 3])));
                        var_11 = ((/* implicit */unsigned char) -4809866588788925614LL);
                    }
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned char) (-(max(((+(arr_6 [i_1] [i_2] [i_5]))), ((+(arr_7 [i_0] [i_0] [i_0])))))));
                        arr_19 [i_0] [i_1 + 1] [i_5] [i_5] = ((/* implicit */unsigned char) (+((-(-2886698601362631080LL)))));
                    }
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [(unsigned char)6] [i_6] [i_6] = (unsigned char)17;
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)100)))))));
                    }
                    arr_23 [i_0] [i_1 - 1] [i_0] &= ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [(signed char)0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                    var_14 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_17 [2ULL] [2ULL])))) ? (((/* implicit */unsigned long long int) (((-(-7274490451081079685LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_2 + 4])))))) : (((unsigned long long int) (!((_Bool)1))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) var_4)) + (((unsigned int) var_4)))))));
    var_16 = max((var_1), (((/* implicit */long long int) var_3)));
}
