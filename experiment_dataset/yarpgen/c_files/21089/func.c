/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21089
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((min((1009769544U), (((/* implicit */unsigned int) (unsigned short)49292)))) >> ((((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) + (132)))))), ((~(((((/* implicit */unsigned long long int) -1)) ^ (var_9))))))))));
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((var_5), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 725363369U)) ? (4377534708695429009ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (-1)))) : (min((((/* implicit */unsigned int) var_1)), (var_4))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) (!(min(((!(((/* implicit */_Bool) -2033220086)))), ((_Bool)1)))));
                var_13 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_2 [i_1]))))));
                var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2164663517184ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6327))) : (0ULL)))))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_5))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (short i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_14 [i_2] [i_2] [i_4 - 2] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_3 [i_2 - 2] [3U] [i_2 + 1])) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_22 [i_6] [i_5] [i_2] [i_2] [i_3] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)6327)) < (949601253))))) : (max((((/* implicit */unsigned long long int) 4294967295U)), (var_9)))))));
                                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) 32767U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_2 - 2]))))) < (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_10 [i_2])) ^ (((/* implicit */int) arr_6 [i_2] [i_2])))))))));
                                var_17 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))), (var_3)));
}
