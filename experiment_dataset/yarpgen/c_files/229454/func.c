/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229454
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) var_6);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 4; i_4 < 19; i_4 += 4) 
                            {
                                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (arr_2 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) ? (arr_2 [i_0 + 1] [i_0]) : (arr_2 [i_0 + 1] [i_0])))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_14 [i_2] [i_3] [i_1] [6U] [i_0] [i_1] [i_2])))) >> ((((+(((/* implicit */int) (unsigned short)45126)))) - (45097)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((min((arr_0 [13U] [13U]), (4294967295U))), (((/* implicit */unsigned int) max(((unsigned short)45126), (((/* implicit */unsigned short) (signed char)-114))))))))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2]))))), (((/* implicit */unsigned int) (unsigned char)184)))))));
                                arr_18 [i_1] [i_0] [(signed char)6] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            }
                            arr_19 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((unsigned int) var_5)), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (unsigned short)58819))))))));
                        }
                    } 
                } 
                var_17 |= ((/* implicit */_Bool) (-(((((/* implicit */int) ((_Bool) arr_17 [(short)2]))) << (((((((/* implicit */_Bool) arr_5 [i_0] [(short)1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [(signed char)6])) : (((/* implicit */int) arr_9 [(signed char)12] [i_1] [i_1])))) + (85)))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) max((((unsigned int) var_7)), (var_10)));
}
