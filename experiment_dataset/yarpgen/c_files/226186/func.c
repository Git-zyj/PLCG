/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226186
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
    var_11 = ((/* implicit */unsigned char) (unsigned short)36433);
    var_12 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_7)) || ((!(((/* implicit */_Bool) var_3))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_1] [18LL] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((var_2), (((/* implicit */long long int) var_9)))), (((((/* implicit */_Bool) (unsigned short)29113)) ? (((/* implicit */long long int) 2843379432U)) : (var_6)))))) ? (((unsigned int) ((int) arr_6 [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)50438)) : (((/* implicit */int) var_0)))))))));
                                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10138424012961655798ULL)) ? (arr_6 [i_3] [i_3] [i_3]) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_5), ((-(((/* implicit */int) (short)17007))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                arr_18 [i_5] [i_5] [i_5 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) 3187627779338022905LL))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned char)170))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-16980))));
                var_17 = (((~(((/* implicit */int) var_10)))) - (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_6])))) >= (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_1)))))))));
            }
        } 
    } 
}
