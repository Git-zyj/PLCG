/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233906
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_6 [i_1])) : (3072)))) ? (((/* implicit */unsigned long long int) -234947685)) : (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (12989291705081952791ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_10 [i_2] [i_4 - 1] [i_4 - 1] [i_1] [i_4 + 1]))))), ((+(arr_10 [i_0] [i_4 - 1] [i_4 - 1] [i_1] [i_4 - 1])))));
                                var_13 = ((/* implicit */unsigned char) arr_2 [i_2]);
                                var_14 = ((/* implicit */long long int) ((((-234947685) > (min((((/* implicit */int) arr_0 [i_2] [i_2])), (-77125200))))) ? (((unsigned long long int) arr_6 [i_1])) : (((/* implicit */unsigned long long int) -77125200))));
                                var_15 += ((/* implicit */unsigned short) max(((+((+(12989291705081952791ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_6 [i_0]), ((unsigned char)210)))))))));
                                var_16 *= ((/* implicit */unsigned long long int) arr_8 [i_0] [8ULL] [i_0] [0ULL]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 11; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) (unsigned char)31);
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_5 - 2] [i_5 + 1]) << (((arr_15 [i_5 + 1] [i_5 + 1]) - (10265266810451083725ULL)))))) ? (((/* implicit */unsigned long long int) min((3072), (((/* implicit */int) (unsigned char)25))))) : (var_11)));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */unsigned int) (unsigned char)101);
}
