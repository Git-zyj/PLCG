/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4824
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)16856)) ? (((/* implicit */long long int) 4294967295U)) : (8321499136LL))))))));
    var_15 |= ((((/* implicit */_Bool) max((7758462900395042290ULL), (8521919699407354416ULL)))) ? (var_10) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51458)) << (((((var_4) + (8583880522801263685LL))) - (14LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0)))))) : ((+(4294967277U))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_11 [i_3] [i_0] [i_1 - 2] [i_2 - 1] [i_4] [i_0] [i_2 - 1] = ((/* implicit */unsigned char) ((unsigned int) (~(var_4))));
                                arr_12 [i_0] [i_1 - 2] = ((/* implicit */unsigned long long int) 0U);
                                var_16 = ((/* implicit */unsigned int) var_8);
                                arr_13 [i_3] [i_0] [i_0] [i_3] [(unsigned char)10] [i_2 - 1] = ((/* implicit */unsigned char) ((max(((+(14171289178529701269ULL))), (((/* implicit */unsigned long long int) min((arr_4 [i_2] [i_2] [i_4]), (3U)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0 - 1] [i_2 + 1] [i_2]) < (((/* implicit */unsigned int) arr_1 [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) (unsigned short)32746);
                                arr_23 [i_0] [(signed char)11] [i_1] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) (-(((unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_0] [i_6])) ? (134217600U) : (2854305972U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -674722139)), (4275454895179850347ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) (unsigned short)4095)) ? (var_3) : (var_12)))))));
}
