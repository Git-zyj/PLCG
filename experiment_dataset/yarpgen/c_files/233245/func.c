/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233245
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
    var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-7107)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)154))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) (-(((/* implicit */int) arr_0 [i_0])))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 1197237628U)) ? (3097729658U) : (3097729668U))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) : (var_10)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) var_10)) ? (((unsigned int) arr_8 [i_1] [i_3] [i_2 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_2 - 1]))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [7U]))) < (3097729679U)))), (((unsigned long long int) arr_1 [i_0]))))))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4] [i_5] [i_5])) ? (((((/* implicit */_Bool) (short)13997)) ? (arr_13 [i_5] [i_5] [i_4]) : (((/* implicit */unsigned long long int) 2660251700U)))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_5])) ? (arr_13 [i_4] [i_5] [i_5]) : (arr_13 [i_5] [i_5] [i_5])))));
                var_20 = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 1634715595U)) != (arr_13 [i_4] [i_4] [i_5])))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5]))) == (1197237628U))) ? (((((/* implicit */_Bool) 1197237628U)) ? (((/* implicit */unsigned long long int) 3097729667U)) : (arr_13 [i_4] [i_5] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 286512350U)) ? (((/* implicit */int) arr_12 [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_4]))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (signed char)34);
    var_23 = var_7;
}
