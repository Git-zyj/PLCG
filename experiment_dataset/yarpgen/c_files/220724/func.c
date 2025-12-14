/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220724
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
    var_19 = ((/* implicit */int) (unsigned short)0);
    var_20 = ((/* implicit */int) max((((unsigned long long int) ((1945347515) > (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1945347515)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */short) (((!(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) -1945347515)))))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : ((+(((((/* implicit */int) var_3)) / (-1945347503)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_13 [i_2] [i_3] [i_4]) - (arr_13 [i_0] [i_1] [i_2])))) ? (-1945347515) : (((/* implicit */int) (unsigned short)7))));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_0] = ((((1945347515) - (((/* implicit */int) (unsigned short)65535)))) ^ ((((!(((/* implicit */_Bool) -1945347508)))) ? (1945347512) : (((/* implicit */int) (short)(-32767 - 1))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) (unsigned short)42421)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20767)))))))) ? ((-((~(var_16))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)20768)) ? (1945347515) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
}
