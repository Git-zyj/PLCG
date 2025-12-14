/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224091
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) min((var_13), (var_11)));
                                var_14 += ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-40)), (((unsigned short) min((((/* implicit */unsigned int) var_7)), (877715615U))))));
                                arr_16 [i_4] [i_2] [7] [i_2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (arr_10 [(short)7] [i_3] [i_2] [(short)0] [(short)1] [(short)0]))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)32887))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [7] &= ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned char) 3417251676U))) ? (877715637U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 877715615U))))))));
                arr_18 [i_1] [i_0] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((_Bool) 877715619U))))) != (((int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (short)127)))))));
                arr_19 [i_1] [i_0] = (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)22))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (short)130))));
}
