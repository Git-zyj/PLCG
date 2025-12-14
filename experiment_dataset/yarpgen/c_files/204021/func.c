/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204021
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
    var_16 = ((/* implicit */unsigned short) 17370292279612299338ULL);
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((1632942015), (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (arr_3 [(short)10] [i_0 - 1]))), (((/* implicit */int) ((((/* implicit */_Bool) max((17370292279612299336ULL), (17370292279612299343ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60900)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (17370292279612299332ULL)))))))));
                            var_19 -= ((/* implicit */unsigned long long int) min((max((var_9), (((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_0 + 1])))), (((/* implicit */unsigned int) min((arr_3 [i_0 - 1] [i_0 - 1]), (((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (min((((/* implicit */unsigned short) (signed char)-21)), (arr_8 [(unsigned char)4] [i_1 - 1] [i_1 + 1] [(unsigned char)2] [i_0] [(unsigned char)4]))))))));
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) -1010866249)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65521)))))) + (((/* implicit */int) (((~(17370292279612299345ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) arr_5 [i_0 - 1]))), (((((/* implicit */_Bool) ((unsigned char) (unsigned short)29623))) ? (((((/* implicit */_Bool) 3998269247U)) ? (17370292279612299355ULL) : (17370292279612299336ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_8);
}
