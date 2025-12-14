/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190346
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
    var_10 = ((/* implicit */unsigned int) (unsigned short)11723);
    var_11 = ((/* implicit */unsigned short) var_9);
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)112))), ((+(((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 664660565U)) : (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_3 - 2] [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_1]))) : (arr_0 [i_0]))))))) & (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (signed char)-33))))));
                                var_14 = ((/* implicit */signed char) (~(min((3010326484U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3448561289U)) || (((/* implicit */_Bool) (short)-20360)))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_1] [i_1 + 1] [i_1]);
                var_16 -= ((/* implicit */short) max((((max((var_8), (var_8))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_1] [i_0] [i_0])))))))), (((/* implicit */unsigned int) (signed char)-7))));
            }
        } 
    } 
}
