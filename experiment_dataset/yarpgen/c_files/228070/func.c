/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228070
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = max(((-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (short)17270)))))), (((/* implicit */int) arr_2 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((arr_1 [i_0]) >> (((2836188441U) - (2836188391U))))) << (((max((arr_1 [i_0]), (arr_1 [i_0]))) - (10207622826633766675ULL)))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((arr_1 [(signed char)11]), (((/* implicit */unsigned long long int) (signed char)21))))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (16385386503259067678ULL)))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((unsigned short) var_9)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((((+(((/* implicit */int) var_3)))) * (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (short)27833)) : (((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) (unsigned short)56655))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (_Bool)0))));
}
