/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28697
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6))) : (3285858380U))), (3203410733U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((-(4269069184U)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_13 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] [i_4])))) <= (min((3203410718U), (((/* implicit */unsigned int) (unsigned short)38897)))))));
                                var_13 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) var_6)))));
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1091556585U)) ? (3203410733U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (-1751926082))))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))) ? (-265291676) : (((/* implicit */int) (short)5789)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
