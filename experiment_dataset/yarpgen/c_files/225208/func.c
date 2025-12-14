/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225208
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (signed char)-1))));
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_12 [i_3] [i_0] [i_4 - 2] [i_4 - 1] [i_4 - 2])))) ? (min((((/* implicit */unsigned long long int) var_17)), (((arr_10 [i_0] [i_1] [i_1] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) min((arr_12 [i_3] [i_4] [i_4 - 1] [i_4 - 2] [i_3]), (arr_12 [i_3] [i_4] [i_4 - 2] [i_4 - 2] [i_3]))))));
                                var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_4] [i_4 - 2])) ? (((var_0) / (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)0))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(unsigned char)2])))))));
                                var_24 = ((/* implicit */_Bool) (unsigned short)65521);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_12);
    var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) 16776960LL)) ? (-7055365517681821354LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
}
