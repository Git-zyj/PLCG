/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2884
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
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)-16)), (((((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) < (7118029869454866823LL))) ? (((/* implicit */unsigned int) (~(var_7)))) : (((((/* implicit */_Bool) -7118029869454866806LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (3553350660U)))))));
    var_21 |= max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ ((-(((/* implicit */int) (signed char)15))))))), (var_3));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) < ((+(3553350660U))))) ? (max((((/* implicit */long long int) (!((_Bool)1)))), (arr_8 [i_2] [i_3] [(signed char)10] [i_4 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4 - 2])) && ((!(((/* implicit */_Bool) (unsigned short)52910))))))))));
                                arr_13 [i_0] [i_2] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)15))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-15)) ? (((int) 741616633U)) : (((/* implicit */int) ((((((/* implicit */_Bool) -7118029869454866811LL)) ? (-7118029869454866813LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))))) > (7118029869454866823LL))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 3553350645U)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))) >= (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 4] [i_1 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (-7118029869454866813LL)))));
            }
        } 
    } 
}
