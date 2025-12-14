/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239347
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
    for (short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 -= ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) * ((+(var_2)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_3] [i_3] [i_3] [i_0 + 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_3 [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))))) > (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)63))))))))) * (((-8158779804791039231LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
                                arr_13 [i_0 - 2] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)15885)) ? (arr_9 [i_0 - 3] [i_1 - 1] [i_0 - 3] [i_2 - 1] [i_3] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2])))))) ? ((((-(var_7))) - (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) == (((/* implicit */int) (signed char)79))))))));
                                arr_14 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0 - 3])) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 1])) << (((((/* implicit */int) (unsigned short)1024)) - (1019)))))) : ((-(arr_3 [i_0 - 3] [i_1 - 1])))));
                                arr_15 [i_4] [i_3] [i_2] [i_3] [i_0 - 2] = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                    arr_16 [i_1] = (~(((/* implicit */int) (unsigned char)247)));
                    arr_17 [i_1] |= ((/* implicit */int) max((3206833699U), (((/* implicit */unsigned int) (signed char)79))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ ((-((~(var_2)))))));
}
