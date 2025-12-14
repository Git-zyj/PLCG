/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190341
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_17)))))));
                                arr_17 [i_0] [i_1] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */long long int) var_10);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (arr_0 [i_1]))))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 8; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_6] [i_5 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_5 - 1]), (((/* implicit */unsigned int) (unsigned short)18605))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-11519))) | (6380358155923470354LL))) : (((/* implicit */long long int) (~(((var_14) | (((/* implicit */int) var_16)))))))));
                                var_21 -= ((/* implicit */unsigned long long int) min(((~(arr_10 [i_5] [i_5] [i_5 - 2] [6LL]))), (arr_10 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 3; i_7 < 11; i_7 += 2) 
    {
        for (signed char i_8 = 2; i_8 < 8; i_8 += 1) 
        {
            {
                arr_27 [i_7] [i_7] = var_5;
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1869208100520274303LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18605)))))) ? (max((15322230237079074799ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)173), (((/* implicit */unsigned char) arr_26 [i_7] [i_7]))))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)68)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((_Bool) (signed char)65)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_1)) != (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)45653)) : (((/* implicit */int) var_9))))))))) : (min((((((/* implicit */_Bool) (unsigned short)37721)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_15)))))))));
}
