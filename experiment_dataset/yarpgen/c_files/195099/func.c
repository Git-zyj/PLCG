/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195099
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_10 = ((((/* implicit */_Bool) 15968636338025501756ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_4 - 1])) == (var_9))))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26)))))));
                                arr_13 [i_1] [i_2] = ((/* implicit */int) (unsigned short)39848);
                            }
                        } 
                    } 
                    var_11 = (!(((/* implicit */_Bool) (~(288230376151711743ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    arr_21 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned char) 1008765181U);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_12 = (!(((/* implicit */_Bool) min((min((10332398072500504715ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_2))))));
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_26 [15]))));
                                var_14 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)6)), (0ULL)));
                                var_15 = max((((/* implicit */int) ((max((var_9), (((/* implicit */int) arr_14 [i_8])))) <= (((((/* implicit */int) (unsigned char)250)) * (((/* implicit */int) arr_26 [i_8]))))))), (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_7] [i_8] [i_9])) ? (arr_23 [i_9] [i_9] [i_8] [i_7] [i_6] [i_5]) : (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
                                var_16 = ((/* implicit */short) (-(min((((10721318047502183023ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_3)))));
    var_18 = ((/* implicit */int) min((var_18), ((-2147483647 - 1))));
}
