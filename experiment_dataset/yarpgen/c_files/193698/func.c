/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193698
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
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [3ULL] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (~((~(var_12)))));
                                var_15 = ((/* implicit */long long int) var_10);
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_0 + 3] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)37777)) ? (((/* implicit */long long int) arr_13 [i_0] [i_1 - 2] [i_2] [i_3] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_2] [i_4])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)12021)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) var_2);
                    arr_16 [(unsigned short)7] [(unsigned short)7] [(unsigned short)1] = ((/* implicit */_Bool) (+(((((_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_1] [i_2])))) : ((+(var_1)))))));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (((/* implicit */int) (unsigned short)21456)) : (arr_12 [i_1 - 1] [(unsigned char)2] [i_0 + 3] [i_0 + 3] [(unsigned char)2]))) << ((((((+(arr_8 [6LL] [i_1] [i_2] [(signed char)4] [i_0 + 1]))) + (445389543))) - (13)))));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((unsigned short) (signed char)7))) : (((/* implicit */int) (signed char)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */int) arr_2 [i_1 - 1] [i_1])) + (2147483647))) << (((((/* implicit */int) (unsigned short)21456)) - (21456))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((var_0) << (((((unsigned long long int) arr_10 [i_0] [i_1] [i_2])) - (53ULL))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) 15108308613809993733ULL)) ? (13385044393807875958ULL) : (((/* implicit */unsigned long long int) -1LL)));
}
