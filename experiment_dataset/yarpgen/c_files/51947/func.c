/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51947
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
    var_13 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_15 = (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) arr_6 [(short)13] [(signed char)2] [(short)13] [i_4 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_4 - 2])))) : ((-(((/* implicit */int) arr_1 [i_4 - 3])))));
                                var_16 = ((/* implicit */int) var_4);
                                var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-24218))))) / (6293605585559256374LL)))), (((5103362908983597298ULL) / (((/* implicit */unsigned long long int) 429089446))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            {
                arr_17 [i_5] [i_5] [i_6 - 2] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)244))))) >= (((((/* implicit */_Bool) arr_13 [i_6 - 2] [i_6 - 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                var_18 |= ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            {
                arr_23 [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_3 [i_7] [i_8]), (arr_3 [i_8] [i_7]))))));
                var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-1914685944) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_20 [i_7] [i_7] [(unsigned char)8])) : (arr_15 [i_7] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) arr_22 [(_Bool)1])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_31 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_21 [i_7] [i_7]);
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_10 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 1])), (var_12)))) <= (arr_27 [i_7] [i_10 - 1] [10]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
