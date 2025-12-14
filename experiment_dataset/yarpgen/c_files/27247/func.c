/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27247
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (1502026580U) : (min((((/* implicit */unsigned int) var_10)), (1502026585U)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) var_3);
                                arr_13 [i_4 - 1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (short)-12559);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_7))))) ? (var_9) : (((arr_0 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 1502026595U)) ? (1502026556U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_15 [i_2 + 1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) (!(((/* implicit */_Bool) 1502026579U)))))));
                    var_14 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 2]))));
                }
            } 
        } 
    } 
}
