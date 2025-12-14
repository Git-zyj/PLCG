/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225351
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-26)) != (((/* implicit */int) min((((((/* implicit */int) (signed char)-26)) == (((/* implicit */int) var_13)))), (arr_3 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned int) (unsigned char)250);
                                arr_16 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)11386))));
                                var_18 = ((/* implicit */unsigned int) ((_Bool) (~(((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (unsigned char)68)) : (var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (unsigned char i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 4; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                arr_29 [i_8] [i_5] [i_5] [6ULL] [i_5] [i_8] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((signed char) max((arr_17 [i_7]), (arr_17 [i_6])))))));
                                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (+(3694801338U))))) >> (((((/* implicit */int) arr_20 [i_6 - 1])) - (57634)))));
                            }
                        } 
                    } 
                    arr_30 [i_6 - 2] [i_7] = ((/* implicit */int) arr_27 [i_5] [i_7] [i_6 + 3] [(unsigned short)9] [i_5]);
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) & (((((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> ((((~(((/* implicit */int) var_7)))) + (64)))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)25)) > (((/* implicit */int) var_7))))) : ((~(((/* implicit */int) var_12)))))) : (((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15)))))))));
    var_22 = ((/* implicit */long long int) var_15);
}
