/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244229
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */int) var_5)), ((+(-1985363473)))))), (((((/* implicit */_Bool) (signed char)-119)) ? (-4171038533692929934LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((+(((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (signed char)-119))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [1U] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [4LL] [i_1]))))), (((((/* implicit */int) arr_2 [i_1] [i_0])) / (((/* implicit */int) (signed char)100)))))));
                                arr_16 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */signed char) (~(16630983908151798497ULL)));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (short)127)))), (((_Bool) arr_11 [i_0] [i_1] [(short)2] [i_1] [i_2] [i_0]))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
}
