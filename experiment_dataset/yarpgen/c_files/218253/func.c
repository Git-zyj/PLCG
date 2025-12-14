/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218253
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
    var_14 *= ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_2);
                                var_15 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 2561013597U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) : (arr_10 [i_0] [(unsigned char)8] [i_2] [i_3]))) != (((/* implicit */unsigned long long int) var_3)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-11982)) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_2))));
                                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) arr_11 [i_0] [i_2 + 1] [i_0] [i_3] [14U])) - (((/* implicit */int) arr_11 [i_0] [i_2 - 2] [i_2] [i_2 - 2] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_17 |= arr_9 [i_0] [i_0] [i_1] [i_1] [i_1];
            }
        } 
    } 
    var_18 = (-(var_8));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_22 [i_5 + 1] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_11)) >> (((/* implicit */int) var_11)))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5 - 1])) || (((/* implicit */_Bool) var_6))))))))) + (var_5)));
                var_19 = ((/* implicit */unsigned int) (unsigned char)33);
                var_20 *= ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        for (long long int i_8 = 2; i_8 < 16; i_8 += 4) 
        {
            {
                arr_29 [i_7] [i_7] = ((/* implicit */unsigned char) var_3);
                var_21 = ((/* implicit */unsigned long long int) arr_20 [i_8]);
            }
        } 
    } 
}
